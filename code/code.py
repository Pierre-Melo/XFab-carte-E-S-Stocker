import time
import board
import asyncio
from struct import pack, unpack
from digitalio import DigitalInOut, Direction, Pull
from pwmio import PWMOut
from microcontroller import nvm

MS = "Sig14"
ME = "Sig2"
SOL = "Sig15"
SENS_S_LOW = "S-IR4"
SENS_S_STOP = "S-IR5"
SENS_E_LOW = "E-IR2"
SENS_E_STOP = "E-IR1"
PERIOD = 0.02
DEBOUNCE_MS = 2  # integer milliseconds 

#System I/O return, E command (?), SOLE command (?), S command (?)
sigdict = {
    "Sig23": board.GP0,
    "Sig21": board.GP1,
    "Sig16": board.GP2,
    "Sig15": board.GP3,
    "Sig14": board.GP4,
    "Sig12": board.GP5,
    "Sig11": board.GP6,
    "Sig1": board.GP36,
    "Sig2": board.GP37,
    "Sig3": board.GP38,
    "Sig10": board.GP39
}

#Sensor return, S for Output Sensors, E for Input Sensors, PMS for SOLENOID state photosensor, SOTL and SOTU for sensor line return (Transistor 0V)
#Connected to System I/O : SOTU, SOTL, PMS, E-IR1, E-IR3, E-IR5, S-IR1, S-IR3, S-IR5
sensdict = {
    "SOTL": board.GP10,
    "SOTU": board.GP25,
    "S-IR1": board.GP15,
    "S-IR2": board.GP9,
    "S-IR3": board.GP14,
    "S-IR4": board.GP8,
    "S-IR5": board.GP13,
    "PMS": board.GP21,
    "E-IR1": board.GP26,
    "E-IR2": board.GP19,
    "E-IR3": board.GP29,
    "E-IR4": board.GP23,
    "E-IR5": board.GP28,
    "E-IR6": board.GP20,
    "E-IR7": board.GP22,
    "E-IR8": board.GP27
}

#Motor Return, MotS for Output Motor, MotE for Input Motor, SoleL or SoleR for Solenoid (direction doesn't matter to it)
motdict = {
    "MotS": board.GP35,
    "MotE": board.GP32,
    "SoleL": board.GP31,
    "SoleR":board.GP30
}

#Signal pins definition based on sigdict
def sigdef():
    """Définit tous les IO du dictionnaire sigdict. 
    """
    for sig, pin in sigdict.items():
        sigdict[sig] = DigitalInOut(sigdict[sig])
        sigdict[sig].direction = Direction.INPUT
        sigdict[sig].pull = Pull.DOWN

#Sensor pins definition based on sensdict
def sensdef():
    """Définit tous les IO du dictionnaire sensdict. 
    """
    for sens, pin in sensdict.items():
        sensdict[sens] = DigitalInOut(sensdict[sens])
        sensdict[sens].direction = Direction.INPUT
        sensdict[sens].pull = Pull.UP

#Motor pins definition based on motdict
def motdef():
    """Définit tous les IO du dictionnaire motdict. 
    """
    for mot, pin in motdict.items():
        if mot.startswith("Sole"):
            motdict[mot] = DigitalInOut(motdict[mot])
            motdict[mot].direction = Direction.OUTPUT
        else:
            motdict[mot] = PWMOut(motdict[mot])

#Returns motor speeds stored in memory
def load_speeds() -> tuple[int, int]:
    """Retourne les vitesses moteurs définies 
    dans la mémoire sous forme de tuple"""
    try:
        data = nvm[:12]
        magic, low, high = unpack("<III", data)
        if magic != 0x0FAB:
            raise ValueError("bad magic")
        if (low == 0xFFFFFFFF) or (high == 0xFFFFFFFF):
            raise ValueError("erased value")
        if not (0 <= low <= 65535) or not (0 <= high <= 65535):
            raise ValueError("out of range")
        return low, high
    except Exception:
        return 32000, 64000 # defaults

#Asynchronous function to monitor pin state
async def wait_level(pin, level: bool):
    if DEBOUNCE_MS <= 0:
        while pin.value != level:
            await asyncio.sleep(0.001)
        return
    t0 = None
    while True:
        ok = pin.value == level
        now = time.monotonic_ns()
        if ok:
            t0 = now if t0 is None else t0
            if (now - t0) // 1_000_000 >= DEBOUNCE_MS:
                return
        else:
            t0 = None
        await asyncio.sleep(0.001)

#Asynchronous function to control motors
async def motor(mot: str, sig: str, sens_stop: str, sens_low: str, speeds: tuple):
    pin = sigdict[sig]
    pwm = motdict[mot]
    while True:
        await wait_level(pin, True)
        try:
            while pin.value:
                if sensdict[sens_stop].value:
                    pwm.duty_cycle = 0 #stop
                elif sensdict[sens_low].value:
                    pwm.duty_cycle = speeds[0] #low speed
                else:
                    pwm.duty_cycle = speeds[1] #high speed
                await asyncio.sleep(PERIOD)
        finally:
            pwm.duty_cycle = 0
            await wait_level(pin, False)

#Asynchronous function to control solenoids
async def solenoid(sol: str, sig: str):
    pin = sigdict[sig]
    solio = motdict[sol]
    while True:
        await wait_level(pin, True)
        try:
            solio.value = True 
            await wait_level(pin, False)  # wait for falling edge; no 1 kHz loop
        finally:
            solio.value = False

#Asynchronous Main loop
async def main():
    sigdef()
    sensdef()
    motdef()
    speeds = load_speeds()
    asyncio.create_task(motor("MotS", MS, SENS_S_STOP, SENS_S_LOW, speeds))
    asyncio.create_task(motor("MotE", ME, SENS_E_STOP, SENS_E_LOW, speeds))
    asyncio.create_task(solenoid("SoleL", SOL))
    while True:
        await asyncio.sleep(1)

if __name__ == "__main__":
    asyncio.run(main())