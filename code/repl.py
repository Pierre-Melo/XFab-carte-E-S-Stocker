import time
import board
import asyncio
from struct import pack, unpack
from digitalio import DigitalInOut, Direction, Pull
from pwmio import PWMOut
from microcontroller import nvm
from code import load_speeds, MS, ME, SOL, SENS_S_LOW, SENS_S_STOP, SENS_E_LOW, SENS_E_STOP, PERIOD, DEBOUNCE_MS, sigdict, sensdict, motdict, sigdef, sensdef, motdef,  main

# Allows to store motor speeds in memory
def save_speeds(motlow: int, mothigh: int):
	"""Définis les vitesses moteurs dans la mémoire.

	Paramètres:
	 motlow (integer): Valeur de vitesse réduite du moteur, entre 0-65535
	 mothigh(integer): Valeur de vitesse haute du moteur, entre 0-65535
	"""
	if not (0 <= motlow <= 65535):
		print("Vitesse réduite erronnée ! Doit être entre 0 et 65535 !")
		return
	if not (0 <= mothigh <= 65535):
		print("Vitesse haute erronnée ! Doit être entre 0 et 65535 !")
		return
	buf = bytearray(nvm)
	buf[:12] = pack("<III", 0x0FAB, motlow, mothigh)
	nvm[:] = buf
	print("Vitesse changée avec succés !\nVeuillez recharger la carte (CTRL+R).")

# Print all 3 dicts content
def printdict():
	"""Appelle print() avec le contenu de l'entièreté des dictionnaires.
	"""
	print("Dictionnaire SystemIO - sigdict : \n")
	for key, value in sigdict.items():
		print(f"{key}: {value}")
	print("Dictionnaire Capteurs - sensdict : \n")
	for key, value in sensdict.items():
		print(f"{key}: {value}")
	print("Dictionnaire Moteurs - motdict : \n")
	for key, value in motdict.items():
		print(f"{key}: {value}")

# Manual pin definition
def pindef(sig: str, dire: str):
	"""Définis manuellement les signaux.

	   Paramètres:
	 sig (string): Signal
	 dire (string): Direction, "IN" pour Input ou "OUT" pour Output
	"""
	sig = sig.strip()
	dire = dire.strip().lower()

	if sig in sigdict:
		target = sigdict
	elif sig in sensdict:
		target = sensdict
	else:
		print(f"Signal inconnu : {sig}")
		return

	pinobj = target[sig]
	if isinstance(pinobj, DigitalInOut):
		pin = pinobj
	else:
		pin = DigitalInOut(pinobj)
		target[sig] = pin

	# Appliquer la direction/pull
	if dire == "in":
		pin.direction = Direction.INPUT
	elif dire == "out":
		pin.direction = Direction.OUTPUT
	else:
		print("Entrée mauvaise : dire = 'IN' ou 'OUT' seulement !")

# Prints signal value
def testsig(sig: str):
	"""Appelle print() avec la valeur d'un signal de sigdict.

	   Paramètres:
	 sig (string): Signal du dictionnaire sigdict
	"""

	sig = sig.strip()

	print(sig, " : ", sigdict[sig].value)

# Prints sensor value
def testsens(sens: str):
	"""Appelle print() avec la valeur d'un signal de sensdict.

	   Paramètres:
	 sens (string): Signal du dictionnaire sensdict
	"""

	sens = sens.strip()

	print(sens, " : ", sensdict[sens].value)

# Prints every signal value
def testpins():
	"""Appelle print() avec la valeur des signaux de sigdict et de sensdict.
	"""
	print("Signals : \n")
	for sig, pin in sigdict.items():
		print(sig, " : ", sigdict[sig].value)
	print("\nSensors : \n")
	for sens, pin in sensdict.items():
		print(sens, " : ", sensdict[sens].value)

# Prints every sensor value
def sensread():
	"""Appelle print() avec la valeur des signaux de sensdict.
	"""
	print("\nSensors : \n")
	for sens, pin in sensdict.items():
		print(sens, " : ", sensdict[sens].value)

# Prints every signal value
def sigread():
	"""Appelle print() avec la valeur des signaux de sigdict.
	"""
	print("Signals : \n")
	for sig, pin in sigdict.items():
		print(sig, " : ", sigdict[sig].value)

def motor_test(name: str, speed: str):
	"""
	Teste un moteur ou un solénoïde en fonction de son nom et d'une consigne de vitesse.

	Paramètres:
		name (str): "MotS", "MotE", "SoleL" ou "SoleR".
		speed (str): "stop", "low", ou "high".
					 Pour les solénoïdes, "low" et "high" sont équivalents.
	"""
	name = name.strip()
	speed = speed.strip().lower()

	if name not in motdict:
		print(f"Élément inconnu : {name}")
		return

	# Solenoid (digital output)
	if name.startswith("Sole"):
		if speed == "stop":
			motdict[name].value = False
			print(f"{name} désactivé")
		elif speed in ("low", "high"):
			motdict[name].value = True
			print(f"{name} activé")
		else:
			print("Vitesse invalide pour solénoïde (stop/low/high)")
		return

	# Motor (PWM output)
	pwm = motdict[name]
	low, high = load_speeds()

	if speed == "stop":
		pwm.duty_cycle = 0
		print(f"{name} arrêté")
	elif speed == "low":
		pwm.duty_cycle = low
		print(f"{name} vitesse basse ({low})")
	elif speed == "high":
		pwm.duty_cycle = high
		print(f"{name} vitesse haute ({high})")
	else:
		print("Vitesse invalide (stop/low/high)")

# Test version of the main in code.py
def testrun(
	MS: str = "Sig14",
	ME: str = "Sig2",
	SOL: str = "Sig15",
	SENS_S_LOW: str = "S-IR4",
	SENS_S_STOP: str = "S-IR5",
	SENS_E_LOW: str = "E-IR2",
	SENS_E_STOP: str = "E-IR1",
	PERIOD: float = 0.02,
	DEBOUNCE_MS: int = 2
):
	"""
	Procédure de main() dans le code principal, permet de tester ce dernier.

	Paramètres:
		MS (str): Signal du moteur de sortie (par défaut "Sig14").
		ME (str): Signal du moteur d’entrée (par défaut "Sig2").
		SOL (str): Signal du solénoïde (par défaut "Sig15").
		SENS_S_LOW (str): Capteur bas côté sortie (par défaut "S-IR4").
		SENS_S_STOP (str): Capteur d’arrêt côté sortie (par défaut "S-IR5").
		SENS_E_LOW (str): Capteur bas côté entrée (par défaut "E-IR2").
		SENS_E_STOP (str): Capteur d’arrêt côté entrée (par défaut "E-IR1").
		PERIOD (float): Période de mise à jour en secondes (par défaut 0.02).
		DEBOUNCE_MS (int): Durée du débounce en millisecondes (par défaut 2).
	"""
	MS = MS.strip()
	ME = ME.strip()
	SOL = SOL.strip()
	SENS_S_LOW = SENS_S_LOW.strip()
	SENS_S_STOP = SENS_S_STOP.strip()
	SENS_E_LOW = SENS_E_LOW.strip()
	SENS_E_STOP = SENS_E_STOP.strip()

	# get original values
	import code as codemain
	orig = { 
		"MS": codemain.MS,
		"ME": codemain.ME,
		"SOL": codemain.SOL,
		"SENS_S_LOW": codemain.SENS_S_LOW,
		"SENS_S_STOP": codemain.SENS_S_STOP,
		"SENS_E_LOW": codemain.SENS_E_LOW,
		"SENS_E_STOP": codemain.SENS_E_STOP,
		"PERIOD": codemain.PERIOD,
		"DEBOUNCE_MS": codemain.DEBOUNCE_MS,
	}
	try: # change parameters and run
		codemain.MS = MS
		codemain.ME = ME
		codemain.SOL = SOL
		codemain.SENS_S_LOW = SENS_S_LOW
		codemain.SENS_S_STOP = SENS_S_STOP
		codemain.SENS_E_LOW = SENS_E_LOW
		codemain.SENS_E_STOP = SENS_E_STOP
		codemain.PERIOD = PERIOD
		codemain.DEBOUNCE_MS = DEBOUNCE_MS
		asyncio.run(main()) # start loop
	finally: # restore defaults when it ends
		codemain.MS = orig["MS"]
		codemain.ME = orig["ME"]
		codemain.SOL = orig["SOL"]
		codemain.SENS_S_LOW = orig["SENS_S_LOW"]
		codemain.SENS_S_STOP = orig["SENS_S_STOP"]
		codemain.SENS_E_LOW = orig["SENS_E_LOW"]
		codemain.SENS_E_STOP = orig["SENS_E_STOP"]
		codemain.PERIOD = orig["PERIOD"]
		codemain.DEBOUNCE_MS = orig["DEBOUNCE_MS"]

print("Loaded !")
