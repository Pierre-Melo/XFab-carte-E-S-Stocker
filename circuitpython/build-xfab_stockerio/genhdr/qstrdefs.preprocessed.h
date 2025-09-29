# 0 "<stdin>"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "<stdin>"
# 29 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 37 "../../py/mpconfig.h"
# 1 "build-xfab_stockerio/genhdr/mpversion.h" 1
# 38 "../../py/mpconfig.h" 2
# 103 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1






       

# 1 "sdk/src/rp2350/hardware_regs/include/hardware/platform_defs.h" 1 3 4
# 10 "./mpconfigport.h" 2
# 49 "./mpconfigport.h"
# 1 "../../py/circuitpy_mpconfig.h" 1
# 11 "../../py/circuitpy_mpconfig.h"
       

# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdint.h" 1 3 4
# 34 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdint.h" 3 4

# 34 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdint.h" 3 4
typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;




typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;




typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 14 "../../py/circuitpy_mpconfig.h" 2
# 1 "sdk/src/rp2_common/pico_atomic/include/stdatomic.h" 1 3 4
# 30 "sdk/src/rp2_common/pico_atomic/include/stdatomic.h" 3 4
# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdatomic.h" 1 3 4
# 29 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdatomic.h" 3 4
typedef enum
  {
    memory_order_relaxed = 0,
    memory_order_consume = 1,
    memory_order_acquire = 2,
    memory_order_release = 3,
    memory_order_acq_rel = 4,
    memory_order_seq_cst = 5
  } memory_order;


typedef _Atomic _Bool atomic_bool;
typedef _Atomic char atomic_char;
typedef _Atomic signed char atomic_schar;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic short atomic_short;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic int atomic_int;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic long atomic_long;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic long long atomic_llong;
typedef _Atomic unsigned long long atomic_ullong;



typedef _Atomic short unsigned int atomic_char16_t;
typedef _Atomic long unsigned int atomic_char32_t;
typedef _Atomic unsigned int atomic_wchar_t;
typedef _Atomic signed char atomic_int_least8_t;
typedef _Atomic unsigned char atomic_uint_least8_t;
typedef _Atomic short int atomic_int_least16_t;
typedef _Atomic short unsigned int atomic_uint_least16_t;
typedef _Atomic long int atomic_int_least32_t;
typedef _Atomic long unsigned int atomic_uint_least32_t;
typedef _Atomic long long int atomic_int_least64_t;
typedef _Atomic long long unsigned int atomic_uint_least64_t;
typedef _Atomic int atomic_int_fast8_t;
typedef _Atomic unsigned int atomic_uint_fast8_t;
typedef _Atomic int atomic_int_fast16_t;
typedef _Atomic unsigned int atomic_uint_fast16_t;
typedef _Atomic int atomic_int_fast32_t;
typedef _Atomic unsigned int atomic_uint_fast32_t;
typedef _Atomic long long int atomic_int_fast64_t;
typedef _Atomic long long unsigned int atomic_uint_fast64_t;
typedef _Atomic int atomic_intptr_t;
typedef _Atomic unsigned int atomic_uintptr_t;
typedef _Atomic unsigned int atomic_size_t;
typedef _Atomic int atomic_ptrdiff_t;
typedef _Atomic long long int atomic_intmax_t;
typedef _Atomic long long unsigned int atomic_uintmax_t;
# 97 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdatomic.h" 3 4
extern void atomic_thread_fence (memory_order);

extern void atomic_signal_fence (memory_order);
# 226 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdatomic.h" 3 4
typedef _Atomic struct
{

  _Bool __val;



} atomic_flag;




extern _Bool atomic_flag_test_and_set (volatile atomic_flag *);


extern _Bool atomic_flag_test_and_set_explicit (volatile atomic_flag *,
      memory_order);



extern void atomic_flag_clear (volatile atomic_flag *);

extern void atomic_flag_clear_explicit (volatile atomic_flag *, memory_order);
# 31 "sdk/src/rp2_common/pico_atomic/include/stdatomic.h" 2 3 4


# 1 "sdk/src/common/pico_base_headers/include/pico.h" 1 3 4
# 26 "sdk/src/common/pico_base_headers/include/pico.h" 3 4
# 1 "sdk/src/common/pico_base_headers/include/pico/types.h" 1 3 4
# 12 "sdk/src/common/pico_base_headers/include/pico/types.h" 3 4
# 1 "sdk/src/common/pico_base_headers/include/pico/assert.h" 1 3 4
# 10 "sdk/src/common/pico_base_headers/include/pico/assert.h" 3 4
# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdbool.h" 1 3 4
# 11 "sdk/src/common/pico_base_headers/include/pico/assert.h" 2 3 4







# 1 "/usr/include/newlib/assert.h" 1 3 4
# 9 "/usr/include/newlib/assert.h" 3 4
# 1 "/usr/include/newlib/_ansi.h" 1 3 4
# 10 "/usr/include/newlib/_ansi.h" 3 4
# 1 "/usr/include/newlib/newlib.h" 1 3 4
# 10 "/usr/include/newlib/newlib.h" 3 4
# 1 "/usr/include/newlib/_newlib_version.h" 1 3 4
# 11 "/usr/include/newlib/newlib.h" 2 3 4
# 11 "/usr/include/newlib/_ansi.h" 2 3 4
# 1 "/usr/include/newlib/sys/config.h" 1 3 4



# 1 "/usr/include/newlib/machine/ieeefp.h" 1 3 4
# 5 "/usr/include/newlib/sys/config.h" 2 3 4
# 1 "/usr/include/newlib/sys/features.h" 1 3 4
# 6 "/usr/include/newlib/sys/config.h" 2 3 4
# 12 "/usr/include/newlib/_ansi.h" 2 3 4
# 10 "/usr/include/newlib/assert.h" 2 3 4
# 39 "/usr/include/newlib/assert.h" 3 4
void __assert (const char *, int, const char *)
     __attribute__ ((__noreturn__));
void __assert_func (const char *, int, const char *, const char *)
     __attribute__ ((__noreturn__));
# 19 "sdk/src/common/pico_base_headers/include/pico/assert.h" 2 3 4
# 40 "sdk/src/common/pico_base_headers/include/pico/assert.h" 3 4
extern void hard_assertion_failure(void);
# 51 "sdk/src/common/pico_base_headers/include/pico/assert.h" 3 4
static inline void hard_assert(_Bool condition, ...) {
    if (!condition)
        hard_assertion_failure();
}
# 13 "sdk/src/common/pico_base_headers/include/pico/types.h" 2 3 4



# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 145 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 214 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 329 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 425 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 436 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
} max_align_t;
# 17 "sdk/src/common/pico_base_headers/include/pico/types.h" 2 3 4

typedef unsigned int uint;
# 43 "sdk/src/common/pico_base_headers/include/pico/types.h" 3 4
typedef uint64_t absolute_time_t;
# 52 "sdk/src/common/pico_base_headers/include/pico/types.h" 3 4
static inline uint64_t to_us_since_boot(absolute_time_t t) {



    return t;

}
# 67 "sdk/src/common/pico_base_headers/include/pico/types.h" 3 4
static inline void update_us_since_boot(absolute_time_t *t, uint64_t us_since_boot) {




    *t = us_since_boot;

}







static inline absolute_time_t from_us_since_boot(uint64_t us_since_boot) {
    absolute_time_t t;
    update_us_since_boot(&t, us_since_boot);
    return t;
}
# 27 "sdk/src/common/pico_base_headers/include/pico.h" 2 3 4
# 1 "sdk_config/pico/version.h" 1 3 4
# 28 "sdk/src/common/pico_base_headers/include/pico.h" 2 3 4
# 62 "sdk/src/common/pico_base_headers/include/pico.h" 3 4
# 1 "sdk/src/common/pico_base_headers/include/pico/config.h" 1 3 4
# 19 "sdk/src/common/pico_base_headers/include/pico/config.h" 3 4
# 1 "sdk_config/pico/config_autogen.h" 1 3 4
       

# 1 "sdk/src/rp2_common/cmsis/include/cmsis/rename_exceptions.h" 1 3 4
# 4 "sdk_config/pico/config_autogen.h" 2 3 4

# 1 "boards/xfab_stockerio/pico-sdk-configboard.h" 1 3 4
# 6 "sdk_config/pico/config_autogen.h" 2 3 4
# 20 "sdk/src/common/pico_base_headers/include/pico/config.h" 2 3 4
# 63 "sdk/src/common/pico_base_headers/include/pico.h" 2 3 4

# 1 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 1 3 4
# 23 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
# 1 "sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 1 3 4
# 23 "sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 3 4
# 1 "/usr/include/newlib/sys/cdefs.h" 1 3 4
# 45 "/usr/include/newlib/sys/cdefs.h" 3 4
# 1 "/usr/include/newlib/machine/_default_types.h" 1 3 4
# 41 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 46 "/usr/include/newlib/sys/cdefs.h" 2 3 4

# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 48 "/usr/include/newlib/sys/cdefs.h" 2 3 4
# 24 "sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 2 3 4
# 75 "sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 3 4
# 1 "sdk/src/common/pico_base_headers/include/pico/types.h" 1 3 4
# 76 "sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 2 3 4
# 173 "sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 3 4
__inline__ __attribute__((__always_inline__)) static void __compiler_memory_barrier(void) {
    __asm volatile (".syntax unified\n" "" : : : "memory");
}
# 24 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 2 3 4
# 1 "sdk/src/rp2_common/pico_platform_sections/include/pico/platform/sections.h" 1 3 4
# 25 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 2 3 4
# 1 "sdk/src/rp2_common/pico_platform_panic/include/pico/platform/panic.h" 1 3 4
# 20 "sdk/src/rp2_common/pico_platform_panic/include/pico/platform/panic.h" 3 4
void __attribute__((noreturn)) panic_unsupported(void);
# 31 "sdk/src/rp2_common/pico_platform_panic/include/pico/platform/panic.h" 3 4
void __attribute__((noreturn)) panic(const char *fmt, ...);
# 26 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 2 3 4
# 1 "sdk/src/rp2_common/pico_platform_common/include/pico/platform/common.h" 1 3 4
# 56 "sdk/src/rp2_common/pico_platform_common/include/pico/platform/common.h" 3 4
static inline _Bool running_on_fpga(void) {return 0;}





static inline _Bool running_in_sim(void) {return 0;}
# 74 "sdk/src/rp2_common/pico_platform_common/include/pico/platform/common.h" 3 4
static __inline__ __attribute__((__always_inline__)) void tight_loop_contents(void) {}
# 27 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 2 3 4
# 1 "sdk/src/rp2350/hardware_regs/include/hardware/regs/addressmap.h" 1 3 4
# 28 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 2 3 4
# 1 "sdk/src/rp2350/hardware_regs/include/hardware/regs/sio.h" 1 3 4
# 29 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 2 3 4
# 87 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
static inline void busy_wait_at_least_cycles(uint32_t minimum_cycles) {
    __asm volatile (".syntax unified\n" "1: subs %0, #3\n" "bcs 1b\n" : "+r" (minimum_cycles) : : "cc", "memory")
# 103 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
     ;
}




static __inline__ __attribute__((__always_inline__)) void __breakpoint(void) {



    __asm volatile (".syntax unified\n" "bkpt #0" : : : "memory");

}






__inline__ __attribute__((__always_inline__)) static uint get_core_num(void) {
    return (*(uint32_t *) (0xd0000000u + 0x00000000u));
}
# 139 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
static __inline__ __attribute__((__always_inline__)) uint __get_current_exception(void) {
# 154 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
    uint exception;
    __asm volatile (".syntax unified\n" "mrs %0, ipsr\n" "uxtb %0, %0\n" : "=l" (exception))



     ;
    return exception;

}






__inline__ __attribute__((__always_inline__)) static _Bool pico_processor_state_is_nonsecure(void) {




    uint32_t tt;
    __asm volatile (".syntax unified\n" "movs %0, #0\n" "tt %0, %0\n" : "=r" (tt) : : "cc")



     ;
    return !(tt & (1u << 22));







}





uint8_t rp2350_chip_version(void);





static inline uint8_t rp2040_chip_version(void) {
    return 2;
}





static inline uint8_t rp2040_rom_version(void) {
    
# 209 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
#pragma GCC diagnostic push
    
# 210 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
#pragma GCC diagnostic ignored "-Warray-bounds"
    return *(uint8_t*)0x13;
    
# 212 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
#pragma GCC diagnostic pop
}
# 225 "sdk/src/rp2350/pico_platform/include/pico/platform.h" 3 4
__inline__ __attribute__((__always_inline__)) static int32_t __mul_instruction(int32_t a, int32_t b) {



    __asm (".syntax unified\n" "muls %0, %1" : "+l" (a) : "l" (b) : "cc");

    return a;
}
# 65 "sdk/src/common/pico_base_headers/include/pico.h" 2 3 4
# 1 "sdk/src/common/pico_base_headers/include/pico/error.h" 1 3 4
# 22 "sdk/src/common/pico_base_headers/include/pico/error.h" 3 4
enum pico_error_codes {
    PICO_OK = 0,
    PICO_ERROR_NONE = 0,
    PICO_ERROR_GENERIC = -1,
    PICO_ERROR_TIMEOUT = -2,
    PICO_ERROR_NO_DATA = -3,
    PICO_ERROR_NOT_PERMITTED = -4,
    PICO_ERROR_INVALID_ARG = -5,
    PICO_ERROR_IO = -6,
    PICO_ERROR_BADAUTH = -7,
    PICO_ERROR_CONNECT_FAILED = -8,
    PICO_ERROR_INSUFFICIENT_RESOURCES = -9,
    PICO_ERROR_INVALID_ADDRESS = -10,
    PICO_ERROR_BAD_ALIGNMENT = -11,
    PICO_ERROR_INVALID_STATE = -12,
    PICO_ERROR_BUFFER_TOO_SMALL = -13,
    PICO_ERROR_PRECONDITION_NOT_MET = -14,
    PICO_ERROR_MODIFIED_DATA = -15,
    PICO_ERROR_INVALID_DATA = -16,
    PICO_ERROR_NOT_FOUND = -17,
    PICO_ERROR_UNSUPPORTED_MODIFICATION = -18,
    PICO_ERROR_LOCK_REQUIRED = -19,
    PICO_ERROR_VERSION_MISMATCH = -20,
    PICO_ERROR_RESOURCE_IN_USE = -21
};
# 66 "sdk/src/common/pico_base_headers/include/pico.h" 2 3 4
# 34 "sdk/src/rp2_common/pico_atomic/include/stdatomic.h" 2 3 4
# 15 "../../py/circuitpy_mpconfig.h" 2
# 32 "../../py/circuitpy_mpconfig.h"

# 32 "../../py/circuitpy_mpconfig.h"
extern void common_hal_mcu_disable_interrupts(void);
extern void common_hal_mcu_enable_interrupts(void);
# 80 "../../py/circuitpy_mpconfig.h"
# 1 "../../supervisor/port_heap.h" 1






       


# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 11 "../../supervisor/port_heap.h" 2
# 21 "../../supervisor/port_heap.h"
void port_heap_init(void);

void *port_malloc(size_t size, 
# 23 "../../supervisor/port_heap.h" 3 4
                              _Bool 
# 23 "../../supervisor/port_heap.h"
                                   dma_capable);
void *port_malloc_zero(size_t size, 
# 24 "../../supervisor/port_heap.h" 3 4
                                   _Bool 
# 24 "../../supervisor/port_heap.h"
                                        dma_capable);

void port_free(void *ptr);

void *port_realloc(void *ptr, size_t size, 
# 28 "../../supervisor/port_heap.h" 3 4
                                          _Bool 
# 28 "../../supervisor/port_heap.h"
                                               dma_capable);





# 33 "../../supervisor/port_heap.h" 3 4
_Bool 
# 33 "../../supervisor/port_heap.h"
    port_buffer_is_dma_capable(const void *ptr);


size_t port_heap_get_largest_free_size(void);
# 81 "../../py/circuitpy_mpconfig.h" 2
# 200 "../../py/circuitpy_mpconfig.h"
typedef int mp_int_t;
typedef unsigned int mp_uint_t;


_Static_assert(sizeof(mp_int_t) == sizeof(void *));
_Static_assert(sizeof(mp_uint_t) == sizeof(void *));

typedef long mp_off_t;
# 226 "../../py/circuitpy_mpconfig.h"
# 1 "boards/xfab_stockerio/mpconfigboard.h" 1
# 227 "../../py/circuitpy_mpconfig.h" 2
# 395 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t nvm_module;
# 447 "../../py/circuitpy_mpconfig.h"
# 1 "/usr/include/newlib/alloca.h" 1 3
# 11 "/usr/include/newlib/alloca.h" 3
# 1 "/usr/include/newlib/sys/reent.h" 1 3
# 13 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 14 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 15 "/usr/include/newlib/sys/reent.h" 2 3

# 1 "/usr/include/newlib/sys/_types.h" 1 3
# 24 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 359 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4

# 359 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 25 "/usr/include/newlib/sys/_types.h" 2 3


# 1 "/usr/include/newlib/machine/_types.h" 1 3
# 28 "/usr/include/newlib/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/usr/include/newlib/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "/usr/include/newlib/sys/_types.h" 3
typedef unsigned int __size_t;
# 147 "/usr/include/newlib/sys/_types.h" 3
typedef signed int _ssize_t;
# 158 "/usr/include/newlib/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef long __daddr_t;



typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 17 "/usr/include/newlib/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 35 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/sys/lock.h" 1 3
# 11 "/usr/include/newlib/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 36 "/usr/include/newlib/sys/reent.h" 2 3
typedef _LOCK_RECURSIVE_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 99 "/usr/include/newlib/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 116 "/usr/include/newlib/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 153 "/usr/include/newlib/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 270 "/usr/include/newlib/sys/reent.h" 3
typedef struct __sFILE __FILE;



extern __FILE __sf[3];

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

extern struct _glue __sglue;
# 306 "/usr/include/newlib/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 578 "/usr/include/newlib/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];




  struct __locale_t *_locale;





  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {



          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
# 647 "/usr/include/newlib/sys/reent.h" 3
   char _getlocalename_l_buf[32 ];
        } _reent;







    } _new;







  void (**_sig_func)(int);
};
# 797 "/usr/include/newlib/sys/reent.h" 3
extern struct _reent *_impure_ptr ;





extern struct _reent _impure_data ;
# 917 "/usr/include/newlib/sys/reent.h" 3
extern struct _atexit *__atexit;
extern struct _atexit __atexit0;

extern void (*__stdio_exit_handler) (void);

void _reclaim_reent (struct _reent *);

extern int _fwalk_sglue (struct _reent *, int (*)(struct _reent *, __FILE *),
    struct _glue *);
# 12 "/usr/include/newlib/alloca.h" 2 3
# 448 "../../py/circuitpy_mpconfig.h" 2




# 451 "../../py/circuitpy_mpconfig.h"
void background_callback_run_all(void);
# 50 "./mpconfigport.h" 2
# 58 "./mpconfigport.h"
# 1 "sdk/src/common/pico_sync/include/pico/critical_section.h" 1 3 4
# 11 "sdk/src/common/pico_sync/include/pico/critical_section.h" 3 4
# 1 "sdk/src/common/pico_sync/include/pico/lock_core.h" 1 3 4
# 11 "sdk/src/common/pico_sync/include/pico/lock_core.h" 3 4
# 1 "sdk/src/common/pico_time/include/pico/time.h" 1 3 4
# 11 "sdk/src/common/pico_time/include/pico/time.h" 3 4
# 1 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 1 3 4
# 11 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
# 1 "sdk/src/rp2350/hardware_structs/include/hardware/structs/timer.h" 1 3 4
# 15 "sdk/src/rp2350/hardware_structs/include/hardware/structs/timer.h" 3 4
# 1 "sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 1 3 4
# 63 "sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3 4

# 63 "sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3 4
typedef volatile uint64_t io_rw_64;
typedef const volatile uint64_t io_ro_64;
typedef volatile uint64_t io_wo_64;
typedef volatile uint32_t io_rw_32;
typedef const volatile uint32_t io_ro_32;
typedef volatile uint32_t io_wo_32;
typedef volatile uint16_t io_rw_16;
typedef const volatile uint16_t io_ro_16;
typedef volatile uint16_t io_wo_16;
typedef volatile uint8_t io_rw_8;
typedef const volatile uint8_t io_ro_8;
typedef volatile uint8_t io_wo_8;

typedef volatile uint8_t *const ioptr;
typedef ioptr const const_ioptr;
# 135 "sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3 4
__inline__ __attribute__((__always_inline__)) static void hw_set_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x2u << 12u) + ((uintptr_t)((volatile void *) addr)))) = mask;
}







__inline__ __attribute__((__always_inline__)) static void hw_clear_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x3u << 12u) + ((uintptr_t)((volatile void *) addr)))) = mask;
}







__inline__ __attribute__((__always_inline__)) static void hw_xor_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x1u << 12u) + ((uintptr_t)((volatile void *) addr)))) = mask;
}
# 171 "sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3 4
__inline__ __attribute__((__always_inline__)) static void hw_write_masked(io_rw_32 *addr, uint32_t values, uint32_t write_mask) {
    hw_xor_bits(addr, (*addr ^ values) & write_mask);
}



# 1 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 1 3 4
# 15 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
# 1 "sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 1 3 4
# 16 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 2 3 4
# 1 "sdk/src/rp2350/hardware_regs/include/hardware/regs/accessctrl.h" 1 3 4
# 17 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 2 3 4
# 26 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
typedef struct {
   





    io_rw_32 lock;

   


    io_rw_32 force_core_ns;

   


    io_wo_32 cfgreset;


   


    io_rw_32 gpio_nsmask[2];

   
# 61 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 rom;

   
# 73 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 xip_main;


   
# 86 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 sram[10];

   
# 98 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 dma;

   
# 110 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 usbctrl;


   
# 123 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 pio[3];

   
# 135 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 coresight_trace;

   
# 147 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 coresight_periph;

   
# 159 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 sysinfo;

   
# 171 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 resets;


   
# 184 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 io_bank[2];

   
# 196 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 pads_bank0;

   
# 208 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 pads_qspi;

   
# 220 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 busctrl;

   
# 232 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 adc0;

   
# 244 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 hstx;


   
# 257 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 i2c[2];

   
# 269 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 pwm;


   
# 282 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 spi[2];


   
# 295 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 timer[2];


   
# 308 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 uart[2];

   
# 320 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 otp;

   
# 332 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 tbman;

   
# 344 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 powman;

   
# 356 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 trng;

   
# 368 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 sha256;

   
# 380 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 syscfg;

   
# 392 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 clocks;

   
# 404 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 xosc;

   
# 416 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 rosc;

   
# 428 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 pll_sys;

   
# 440 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 pll_usb;

   
# 452 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 ticks;

   
# 464 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 watchdog;

   
# 476 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 rsm;

   
# 488 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 xip_ctrl;

   
# 500 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 xip_qmi;

   
# 512 "sdk/src/rp2350/hardware_structs/include/hardware/structs/accessctrl.h" 3 4
    io_rw_32 xip_aux;
} accessctrl_hw_t;


_Static_assert(sizeof (accessctrl_hw_t) == 0x00ec, "");
# 178 "sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 2 3 4
# 16 "sdk/src/rp2350/hardware_structs/include/hardware/structs/timer.h" 2 3 4
# 1 "sdk/src/rp2350/hardware_regs/include/hardware/regs/timer.h" 1 3 4
# 17 "sdk/src/rp2350/hardware_structs/include/hardware/structs/timer.h" 2 3 4
# 26 "sdk/src/rp2350/hardware_structs/include/hardware/structs/timer.h" 3 4
typedef struct {
   


    io_wo_32 timehw;

   


    io_wo_32 timelw;

   


    io_ro_32 timehr;

   


    io_ro_32 timelr;


   


    io_rw_32 alarm[4];

   


    io_rw_32 armed;

   


    io_ro_32 timerawh;

   


    io_ro_32 timerawl;

   



    io_rw_32 dbgpause;

   


    io_rw_32 pause;

   


    io_rw_32 locked;

   


    io_rw_32 source;

   





    io_rw_32 intr;

   





    io_rw_32 inte;

   





    io_rw_32 intf;

   





    io_ro_32 ints;
} timer_hw_t;



_Static_assert(sizeof (timer_hw_t) == 0x004c, "");
# 12 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 2 3 4
# 1 "sdk/src/rp2350/hardware_regs/include/hardware/regs/intctrl.h" 1 3 4
# 73 "sdk/src/rp2350/hardware_regs/include/hardware/regs/intctrl.h" 3 4
typedef enum irq_num_rp2350 {
    TIMER0_IRQ_0 = 0,
    TIMER0_IRQ_1 = 1,
    TIMER0_IRQ_2 = 2,
    TIMER0_IRQ_3 = 3,
    TIMER1_IRQ_0 = 4,
    TIMER1_IRQ_1 = 5,
    TIMER1_IRQ_2 = 6,
    TIMER1_IRQ_3 = 7,
    PWM_IRQ_WRAP_0 = 8,
    PWM_IRQ_WRAP_1 = 9,
    DMA_IRQ_0 = 10,
    DMA_IRQ_1 = 11,
    DMA_IRQ_2 = 12,
    DMA_IRQ_3 = 13,
    USBCTRL_IRQ = 14,
    PIO0_IRQ_0 = 15,
    PIO0_IRQ_1 = 16,
    PIO1_IRQ_0 = 17,
    PIO1_IRQ_1 = 18,
    PIO2_IRQ_0 = 19,
    PIO2_IRQ_1 = 20,
    IO_IRQ_BANK0 = 21,
    IO_IRQ_BANK0_NS = 22,
    IO_IRQ_QSPI = 23,
    IO_IRQ_QSPI_NS = 24,
    SIO_IRQ_FIFO = 25,
    SIO_IRQ_BELL = 26,
    SIO_IRQ_FIFO_NS = 27,
    SIO_IRQ_BELL_NS = 28,
    SIO_IRQ_MTIMECMP = 29,
    CLOCKS_IRQ = 30,
    SPI0_IRQ = 31,
    SPI1_IRQ = 32,
    UART0_IRQ = 33,
    UART1_IRQ = 34,
    ADC_IRQ_FIFO = 35,
    I2C0_IRQ = 36,
    I2C1_IRQ = 37,
    OTP_IRQ = 38,
    TRNG_IRQ = 39,
    PROC0_IRQ_CTI = 40,
    PROC1_IRQ_CTI = 41,
    PLL_SYS_IRQ = 42,
    PLL_USB_IRQ = 43,
    POWMAN_IRQ_POW = 44,
    POWMAN_IRQ_TIMER = 45,
    SPARE_IRQ_0 = 46,
    SPARE_IRQ_1 = 47,
    SPARE_IRQ_2 = 48,
    SPARE_IRQ_3 = 49,
    SPARE_IRQ_4 = 50,
    SPARE_IRQ_5 = 51,
    IRQ_COUNT
} irq_num_t;
# 13 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 2 3 4
# 110 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Static_assert(TIMER1_IRQ_3 == TIMER0_IRQ_0 + 7, "");
# 128 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Static_assert(TIMER1_IRQ_3 == TIMER0_IRQ_0 + 7, "");
# 146 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Static_assert(TIMER1_IRQ_3 == TIMER0_IRQ_0 + 7, "");
# 188 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
static inline void check_hardware_alarm_num_param(__attribute__((__unused__)) uint alarm_num) {
    ({if (((0 || 0) && !0)) ((void)0);});
}
# 202 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
static inline uint32_t timer_time_us_32(timer_hw_t *timer) {
    return timer->timerawl;
}
# 215 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
static inline uint32_t time_us_32(void) {
    return timer_time_us_32((((timer_hw_t *)0x400b0000u)));
}
# 230 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
uint64_t timer_time_us_64(timer_hw_t *timer);
# 242 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
uint64_t time_us_64(void);
# 251 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_busy_wait_us_32(timer_hw_t *timer, uint32_t delay_us);







void busy_wait_us_32(uint32_t delay_us);
# 268 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_busy_wait_us(timer_hw_t *timer, uint64_t delay_us);







void busy_wait_us(uint64_t delay_us);
# 285 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_busy_wait_ms(timer_hw_t *timer, uint32_t delay_ms);







void busy_wait_ms(uint32_t delay_ms);
# 302 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_busy_wait_until(timer_hw_t *timer, absolute_time_t t);







void busy_wait_until(absolute_time_t t);
# 320 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
static inline _Bool timer_time_reached(timer_hw_t *timer, absolute_time_t t) {
    uint64_t target = to_us_since_boot(t);
    uint32_t hi_target = (uint32_t)(target >> 32u);
    uint32_t hi = timer->timerawh;
    return (hi >= hi_target && (timer->timerawl >= (uint32_t) target || hi != hi_target));
}
# 334 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
static inline _Bool time_reached(absolute_time_t t) {
    return timer_time_reached((((timer_hw_t *)0x400b0000u)), t);
}







typedef void (*hardware_alarm_callback_t)(uint alarm_num);
# 356 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_hardware_alarm_claim(timer_hw_t *timer, uint alarm_num);
# 367 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void hardware_alarm_claim(uint alarm_num);
# 380 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
int timer_hardware_alarm_claim_unused(timer_hw_t *timer, _Bool required);
# 392 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
int hardware_alarm_claim_unused(_Bool required);
# 402 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_hardware_alarm_unclaim(timer_hw_t *timer, uint alarm_num);
# 411 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void hardware_alarm_unclaim(uint alarm_num);
# 422 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool timer_hardware_alarm_is_claimed(timer_hw_t *timer, uint alarm_num);
# 432 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool hardware_alarm_is_claimed(uint alarm_num);
# 452 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_hardware_alarm_set_callback(timer_hw_t *timer, uint alarm_num, hardware_alarm_callback_t callback);
# 471 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void hardware_alarm_set_callback(uint alarm_num, hardware_alarm_callback_t callback);
# 485 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool timer_hardware_alarm_set_target(timer_hw_t *timer, uint alarm_num, absolute_time_t t);
# 498 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool hardware_alarm_set_target(uint alarm_num, absolute_time_t t);
# 508 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_hardware_alarm_cancel(timer_hw_t *timer, uint alarm_num);
# 517 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void hardware_alarm_cancel(uint alarm_num);
# 533 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void timer_hardware_alarm_force_irq(timer_hw_t *timer, uint alarm_num);
# 548 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
void hardware_alarm_force_irq(uint alarm_num);
# 557 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
static inline uint timer_hardware_alarm_get_irq_num(timer_hw_t *timer, uint alarm_num) {
    check_hardware_alarm_num_param(alarm_num);
    return (TIMER0_IRQ_0 + ((timer) == ((timer_hw_t *)0x400b8000u)) * 4u + (alarm_num));
}






static inline uint hardware_alarm_get_irq_num(uint alarm_num) {
    return timer_hardware_alarm_get_irq_num((((timer_hw_t *)0x400b0000u)), alarm_num);
}
# 579 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
static inline uint timer_get_index(timer_hw_t *timer) {
    return ((timer) == ((timer_hw_t *)0x400b8000u));
}
# 590 "sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
static inline timer_hw_t *timer_get_instance(uint timer_num) {
    ({if (((0 || 0) && !0)) ((void)0);});
    return ((timer_num) ? ((timer_hw_t *)0x400b8000u) : ((timer_hw_t *)0x400b0000u));
}
# 12 "sdk/src/common/pico_time/include/pico/time.h" 2 3 4
# 66 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline absolute_time_t get_absolute_time(void) {
    absolute_time_t t;
    update_us_since_boot(&t, time_us_64());
    return t;
}

static inline uint32_t us_to_ms(uint64_t us) {
    if (us >> 32u) {
        return (uint32_t)(us / 1000u);
    } else {
        return ((uint32_t)us) / 1000u;
    }
}
# 87 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline uint32_t to_ms_since_boot(absolute_time_t t) {
    uint64_t us = to_us_since_boot(t);
    return us_to_ms(us);
}
# 99 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline absolute_time_t delayed_by_us(const absolute_time_t t, uint64_t us) {
    absolute_time_t t2;
    uint64_t base = to_us_since_boot(t);
    uint64_t delayed = base + us;
    if ((int64_t)delayed < 0) {

        delayed = 0x7fffffffffffffffLL;
    }
    update_us_since_boot(&t2, delayed);
    return t2;
}
# 118 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline absolute_time_t delayed_by_ms(const absolute_time_t t, uint32_t ms) {
    absolute_time_t t2;
    uint64_t base = to_us_since_boot(t);
    uint64_t delayed = base + ms * 1000ull;
    if ((int64_t)delayed < 0) {

        delayed = 0x7fffffffffffffffLL;
    }
    update_us_since_boot(&t2, delayed);
    return t2;
}







static inline absolute_time_t make_timeout_time_us(uint64_t us) {
    return delayed_by_us(get_absolute_time(), us);
}







static inline absolute_time_t make_timeout_time_ms(uint32_t ms) {
    return delayed_by_ms(get_absolute_time(), ms);
}
# 161 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline int64_t absolute_time_diff_us(absolute_time_t from, absolute_time_t to) {
    return (int64_t)(to_us_since_boot(to) - to_us_since_boot(from));
}
# 172 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline absolute_time_t absolute_time_min(absolute_time_t a, absolute_time_t b) {
    return to_us_since_boot(a) < to_us_since_boot(b) ? a : b;
}






extern const absolute_time_t at_the_end_of_time;







static inline _Bool is_at_the_end_of_time(absolute_time_t t) {
    return to_us_since_boot(t) == to_us_since_boot(at_the_end_of_time);
}




extern const absolute_time_t nil_time;







static inline _Bool is_nil_time(absolute_time_t t) {
    return !to_us_since_boot(t);
}
# 237 "sdk/src/common/pico_time/include/pico/time.h" 3 4
void sleep_until(absolute_time_t target);
# 247 "sdk/src/common/pico_time/include/pico/time.h" 3 4
void sleep_us(uint64_t us);
# 256 "sdk/src/common/pico_time/include/pico/time.h" 3 4
void sleep_ms(uint32_t ms);
# 293 "sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool best_effort_wfe_or_timeout(absolute_time_t timeout_timestamp);
# 367 "sdk/src/common/pico_time/include/pico/time.h" 3 4
typedef int32_t alarm_id_t;
# 378 "sdk/src/common/pico_time/include/pico/time.h" 3 4
typedef int64_t (*alarm_callback_t)(alarm_id_t id, void *user_data);

typedef struct alarm_pool alarm_pool_t;
typedef void alarm_pool_timer_t;





void alarm_pool_init_default(void);
void runtime_init_default_alarm_pool(void);
# 398 "sdk/src/common/pico_time/include/pico/time.h" 3 4
alarm_pool_t *alarm_pool_get_default(void);


alarm_pool_t *alarm_pool_create_on_timer(alarm_pool_timer_t *timer, uint timer_alarm_num, uint max_timers);

alarm_pool_timer_t *alarm_pool_timer_for_timer_num(uint timer_num);

alarm_pool_timer_t *alarm_pool_get_default_timer(void);
# 425 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline alarm_pool_t *alarm_pool_create(uint timer_alarm_num, uint max_timers) {
    return alarm_pool_create_on_timer(alarm_pool_get_default_timer(), timer_alarm_num, max_timers);
}

alarm_pool_t *alarm_pool_create_on_timer_with_unused_hardware_alarm(alarm_pool_timer_t *timer, uint max_timers);
# 448 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline alarm_pool_t *alarm_pool_create_with_unused_hardware_alarm(uint max_timers) {
    return alarm_pool_create_on_timer_with_unused_hardware_alarm(alarm_pool_get_default_timer(), max_timers);
}







uint alarm_pool_timer_alarm_num(alarm_pool_t *pool);

static inline uint alarm_pool_hardware_alarm_num(alarm_pool_t *pool) {
    return alarm_pool_timer_alarm_num(pool);
}






uint alarm_pool_core_num(alarm_pool_t *pool);






void alarm_pool_destroy(alarm_pool_t *pool);
# 499 "sdk/src/common/pico_time/include/pico/time.h" 3 4
alarm_id_t alarm_pool_add_alarm_at(alarm_pool_t *pool, absolute_time_t time, alarm_callback_t callback, void *user_data, _Bool fire_if_past);
# 518 "sdk/src/common/pico_time/include/pico/time.h" 3 4
alarm_id_t alarm_pool_add_alarm_at_force_in_context(alarm_pool_t *pool, absolute_time_t time, alarm_callback_t callback,
                                                    void *user_data);
# 541 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline alarm_id_t alarm_pool_add_alarm_in_us(alarm_pool_t *pool, uint64_t us, alarm_callback_t callback, void *user_data, _Bool fire_if_past) {
    return alarm_pool_add_alarm_at(pool, delayed_by_us(get_absolute_time(), us), callback, user_data, fire_if_past);
}
# 566 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline alarm_id_t alarm_pool_add_alarm_in_ms(alarm_pool_t *pool, uint32_t ms, alarm_callback_t callback, void *user_data, _Bool fire_if_past) {
    return alarm_pool_add_alarm_at(pool, delayed_by_ms(get_absolute_time(), ms), callback, user_data, fire_if_past);
}
# 580 "sdk/src/common/pico_time/include/pico/time.h" 3 4
int64_t alarm_pool_remaining_alarm_time_us(alarm_pool_t *pool, alarm_id_t alarm_id);
# 592 "sdk/src/common/pico_time/include/pico/time.h" 3 4
int32_t alarm_pool_remaining_alarm_time_ms(alarm_pool_t *pool, alarm_id_t alarm_id);
# 602 "sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool alarm_pool_cancel_alarm(alarm_pool_t *pool, alarm_id_t alarm_id);
# 625 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline alarm_id_t add_alarm_at(absolute_time_t time, alarm_callback_t callback, void *user_data, _Bool fire_if_past) {
    return alarm_pool_add_alarm_at(alarm_pool_get_default(), time, callback, user_data, fire_if_past);
}
# 649 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline alarm_id_t add_alarm_in_us(uint64_t us, alarm_callback_t callback, void *user_data, _Bool fire_if_past) {
    return alarm_pool_add_alarm_in_us(alarm_pool_get_default(), us, callback, user_data, fire_if_past);
}
# 673 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline alarm_id_t add_alarm_in_ms(uint32_t ms, alarm_callback_t callback, void *user_data, _Bool fire_if_past) {
    return alarm_pool_add_alarm_in_ms(alarm_pool_get_default(), ms, callback, user_data, fire_if_past);
}







static inline _Bool cancel_alarm(alarm_id_t alarm_id) {
    return alarm_pool_cancel_alarm(alarm_pool_get_default(), alarm_id);
}
# 696 "sdk/src/common/pico_time/include/pico/time.h" 3 4
int64_t remaining_alarm_time_us(alarm_id_t alarm_id);
# 707 "sdk/src/common/pico_time/include/pico/time.h" 3 4
int32_t remaining_alarm_time_ms(alarm_id_t alarm_id);
# 721 "sdk/src/common/pico_time/include/pico/time.h" 3 4
typedef struct repeating_timer repeating_timer_t;







typedef _Bool (*repeating_timer_callback_t)(repeating_timer_t *rt);






struct repeating_timer {
    int64_t delay_us;
    alarm_pool_t *pool;
    alarm_id_t alarm_id;
    repeating_timer_callback_t callback;
    void *user_data;
};
# 762 "sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool alarm_pool_add_repeating_timer_us(alarm_pool_t *pool, int64_t delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out);
# 782 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline _Bool alarm_pool_add_repeating_timer_ms(alarm_pool_t *pool, int32_t delay_ms, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(pool, delay_ms * (int64_t)1000, callback, user_data, out);
}
# 804 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline _Bool add_repeating_timer_us(int64_t delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(), delay_us, callback, user_data, out);
}
# 825 "sdk/src/common/pico_time/include/pico/time.h" 3 4
static inline _Bool add_repeating_timer_ms(int32_t delay_ms, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(), delay_ms * (int64_t)1000, callback, user_data, out);
}
# 837 "sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool cancel_repeating_timer(repeating_timer_t *timer);
# 12 "sdk/src/common/pico_sync/include/pico/lock_core.h" 2 3 4
# 1 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 1 3 4
# 71 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static void __nop(void) {




    __asm volatile ("nop.w");




}
# 90 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static void __sev(void) {



    __asm volatile (".syntax unified\n" "sev");

}
# 106 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static void __wfe(void) {



    __asm volatile (".syntax unified\n" "wfe");

}
# 121 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static void __wfi(void) {
    __asm volatile (".syntax unified\n" "wfi");
}
# 132 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static void __dmb(void) {



    __asm volatile (".syntax unified\n" "dmb" : : : "memory");

}
# 147 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static void __dsb(void) {



    __asm volatile (".syntax unified\n" "dsb" : : : "memory");

}
# 162 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static void __isb(void) {



    __asm volatile (".syntax unified\n" "isb" ::: "memory");

}




__inline__ __attribute__((__always_inline__)) static void __mem_fence_acquire(void) {



    __dmb();





}





__inline__ __attribute__((__always_inline__)) static void __mem_fence_release(void) {



    __dmb();





}




__inline__ __attribute__((__always_inline__)) static void disable_interrupts(void) {





    __asm volatile (".syntax unified\n" "cpsid i" : : : "memory");

}




__inline__ __attribute__((__always_inline__)) static void enable_interrupts(void) {





    __asm volatile (".syntax unified\n" "cpsie i" : : : "memory");

}
# 237 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static uint32_t save_and_disable_interrupts(void) {
    uint32_t status;






    __asm volatile (".syntax unified\n" "mrs %0, PRIMASK\n" "cpsid i" : "=r" (status) :: "memory")


                                        ;

    return status;
}






__inline__ __attribute__((__always_inline__)) static void restore_interrupts(uint32_t status) {
# 268 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
    __asm volatile (".syntax unified\n" "msr PRIMASK,%0"::"r" (status) : "memory");

}
# 280 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
__inline__ __attribute__((__always_inline__)) static void restore_interrupts_from_disabled(uint32_t status) {
# 289 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
    __asm volatile (".syntax unified\n" "msr PRIMASK,%0"::"r" (status) : "memory");

}

# 1 "sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 1 3 4
# 11 "sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3 4
# 1 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 1 3 4
# 12 "sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 2 3 4
# 90 "sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3 4
typedef volatile uint8_t spin_lock_t;
# 225 "sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3 4
__inline__ __attribute__((__always_inline__)) static spin_lock_t *spin_lock_instance(uint lock_num) {
    ({if (((0 || 0) && !0)) ((void)0);});

    return ({ extern spin_lock_t _sw_spin_locks[32u]; &_sw_spin_locks[lock_num]; });



}







__inline__ __attribute__((__always_inline__)) static uint spin_lock_get_num(spin_lock_t *lock) {

    uint lock_num = ({ extern spin_lock_t _sw_spin_locks[32u]; (lock) - _sw_spin_locks; });
    ({if (((0 || 0) && !0)) ((void)0);});
    return lock_num;






}






__inline__ __attribute__((__always_inline__)) static void spin_lock_unsafe_blocking(spin_lock_t *lock) {




    ({ uint32_t _tmp0, _tmp1; __asm volatile (".syntax unified\n" "1:\n" "ldaexb %1, [%2]\n" "movs %0, #1\n" "cmp %1, #0\n" "bne 1b\n" "strexb %1, %0, [%2]\n" "cmp %1, #0\n" "bne 1b\n" : "=&r" (_tmp0), "=&r" (_tmp1) : "r" (lock)); __mem_fence_acquire(); });






}

__inline__ __attribute__((__always_inline__)) static _Bool spin_try_lock_unsafe(spin_lock_t *lock) {

    return ({ uint32_t _tmp0, _tmp1; __asm volatile (".syntax unified\n" "ldaexb %1, [%2]\n" "movs %0, #1\n" "cmp %1, #0\n" "bne 1f\n" "strexb %1, %0, [%2]\n" "1:\n" : "=&r" (_tmp0), "=&r" (_tmp1) : "r" (lock)); __mem_fence_acquire(); !_tmp1; });



}





__inline__ __attribute__((__always_inline__)) static void spin_unlock_unsafe(spin_lock_t *lock) {

    ({ uint32_t zero = 0; __asm volatile (".syntax unified\n" "stlb %0, [%1]\n" : : "r" (zero), "r" (lock)); });




}
# 301 "sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3 4
__inline__ __attribute__((__always_inline__)) static uint32_t spin_lock_blocking(spin_lock_t *lock) {
    uint32_t save = save_and_disable_interrupts();
    spin_lock_unsafe_blocking(lock);
    return save;
}






inline static _Bool is_spin_locked(spin_lock_t *lock) {

    return ((_Bool) *(lock));





}
# 332 "sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3 4
__inline__ __attribute__((__always_inline__)) static void spin_unlock(spin_lock_t *lock, uint32_t saved_irq) {
    spin_unlock_unsafe(lock);
    restore_interrupts_from_disabled(saved_irq);
}
# 345 "sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3 4
spin_lock_t *spin_lock_init(uint lock_num);




void spin_locks_reset(void);
# 294 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 2 3 4
# 310 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
uint next_striped_spin_lock_num(void);
# 321 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
void spin_lock_claim(uint lock_num);
# 332 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
void spin_lock_claim_mask(uint32_t lock_num_mask);
# 341 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
void spin_lock_unclaim(uint lock_num);







int spin_lock_claim_unused(_Bool required);
# 359 "sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
_Bool spin_lock_is_claimed(uint lock_num);
# 13 "sdk/src/common/pico_sync/include/pico/lock_core.h" 2 3 4
# 53 "sdk/src/common/pico_sync/include/pico/lock_core.h" 3 4
struct lock_core {

    spin_lock_t *spin_lock;



};

typedef struct lock_core lock_core_t;
# 72 "sdk/src/common/pico_sync/include/pico/lock_core.h" 3 4
void lock_init(lock_core_t *core, uint lock_num);
# 12 "sdk/src/common/pico_sync/include/pico/critical_section.h" 2 3 4
# 30 "sdk/src/common/pico_sync/include/pico/critical_section.h" 3 4
typedef struct __attribute__((__packed__)) __attribute__((__aligned__(4))) critical_section {
    spin_lock_t *spin_lock;
    uint32_t save;
} critical_section_t;
# 45 "sdk/src/common/pico_sync/include/pico/critical_section.h" 3 4
void critical_section_init(critical_section_t *crit_sec);






void critical_section_init_with_lock_num(critical_section_t *crit_sec, uint lock_num);
# 62 "sdk/src/common/pico_sync/include/pico/critical_section.h" 3 4
__inline__ __attribute__((__always_inline__)) static void critical_section_enter_blocking(critical_section_t *crit_sec) {
    crit_sec->save = spin_lock_blocking(crit_sec->spin_lock);
}






__inline__ __attribute__((__always_inline__)) static void critical_section_exit(critical_section_t *crit_sec) {
    spin_unlock(crit_sec->spin_lock, crit_sec->save);
}
# 84 "sdk/src/common/pico_sync/include/pico/critical_section.h" 3 4
void critical_section_deinit(critical_section_t *crit_sec);







static inline _Bool critical_section_is_initialized(critical_section_t *crit_sec) {
    return crit_sec->spin_lock != 0;
}
# 59 "./mpconfigport.h" 2

# 59 "./mpconfigport.h"
extern critical_section_t background_queue_lock;






enum {
    enum_NUM_DMA_CHANNELS = 
# 67 "./mpconfigport.h" 3 4
                           16u
# 67 "./mpconfigport.h"
                                           ,
    enum_NUM_PWM_SLICES = 
# 68 "./mpconfigport.h" 3 4
                         12u
# 68 "./mpconfigport.h"
                                       ,
};
# 104 "../../py/mpconfig.h" 2
# 885 "../../py/mpconfig.h"
typedef float mp_float_t;
# 30 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (1))



Q()
Q(*)
Q(_)
Q(/)





Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
# 80 "<stdin>"
Q( )

Q(%#o)

Q(%#x)

Q(*)

Q(*)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/lib)

Q(<dictcomp>)

Q(<dictcomp>)

Q(<genexpr>)

Q(<genexpr>)

Q(<input>)

Q(<lambda>)

Q(<lambda>)

Q(<listcomp>)

Q(<listcomp>)

Q(<module>)

Q(<module>)

Q(<setcomp>)

Q(<setcomp>)

Q(<stdin>)

Q(<stdin>)

Q(<string>)

Q(A0)

Q(A1)

Q(A2)

Q(A3)

Q(A4)

Q(A5)

Q(A6)

Q(A7)

Q(AES)

Q(AES)

Q(AES)

Q(AUTO_RELOAD)

Q(AUTO_RELOAD)

Q(AddressRange)

Q(AddressRange)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(BGR)

Q(BOOTLOADER)

Q(BOOTLOADER)

Q(BROWNOUT)

Q(BROWNOUT)

Q(BROWNOUT)

Q(BROWNOUT)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(BrokenPipeError)

Q(BrokenPipeError)

Q(BufferedIn)

Q(BufferedIn)

Q(ByteArray)

Q(ByteArray)

Q(BytesIO)

Q(BytesIO)

Q(C)

Q(CancelledError)

Q(ConnectionError)

Q(ConnectionError)

Q(Counter)

Q(Counter)

Q(DEEP_SLEEP_ALARM)

Q(DEEP_SLEEP_ALARM)

Q(DOWN)

Q(DOWN)

Q(Device)

Q(Device)

Q(DigitalInOut)

Q(DigitalInOut)

Q(Direction)

Q(Direction)

Q(Direction)

Q(DriveMode)

Q(DriveMode)

Q(DriveMode)

Q(EACCES)

Q(EACCES)

Q(EADDRINUSE)

Q(EADDRINUSE)

Q(EAGAIN)

Q(EAGAIN)

Q(EALREADY)

Q(EALREADY)

Q(EBADF)

Q(EBADF)

Q(ECONNABORTED)

Q(ECONNABORTED)

Q(ECONNREFUSED)

Q(ECONNREFUSED)

Q(ECONNRESET)

Q(ECONNRESET)

Q(EEXIST)

Q(EEXIST)

Q(EHOSTUNREACH)

Q(EHOSTUNREACH)

Q(EINPROGRESS)

Q(EINPROGRESS)

Q(EINVAL)

Q(EINVAL)

Q(EIO)

Q(EIO)

Q(EISDIR)

Q(EISDIR)

Q(ENOBUFS)

Q(ENOBUFS)

Q(ENODEV)

Q(ENODEV)

Q(ENOENT)

Q(ENOENT)

Q(ENOMEM)

Q(ENOMEM)

Q(ENOSPC)

Q(ENOSPC)

Q(ENOTCONN)

Q(ENOTCONN)

Q(EOFError)

Q(EOFError)

Q(EOPNOTSUPP)

Q(EOPNOTSUPP)

Q(EPERM)

Q(EPERM)

Q(EROFS)

Q(EROFS)

Q(ETIMEDOUT)

Q(ETIMEDOUT)

Q(EVEN)

Q(EVEN)

Q(EVEN_BYTES)

Q(EVEN_BYTES)

Q(EVERY_BYTE)

Q(EVERY_BYTE)

Q(Edge)

Q(Edge)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(ExtType)

Q(ExtType)

Q(FALL)

Q(FALL)

Q(FLASH_WRITE_FAIL)

Q(FLASH_WRITE_FAIL)

Q(FileIO)

Q(Flash)

Q(FutureWarning)

Q(FutureWarning)

Q(GC_ALLOC_OUTSIDE_VM)

Q(GC_ALLOC_OUTSIDE_VM)

Q(GP0)

Q(GP1)

Q(GP10)

Q(GP11)

Q(GP12)

Q(GP13)

Q(GP14)

Q(GP15)

Q(GP16)

Q(GP17)

Q(GP18)

Q(GP19)

Q(GP2)

Q(GP20)

Q(GP21)

Q(GP22)

Q(GP23)

Q(GP24)

Q(GP25)

Q(GP26)

Q(GP27)

Q(GP28)

Q(GP29)

Q(GP3)

Q(GP30)

Q(GP31)

Q(GP32)

Q(GP33)

Q(GP34)

Q(GP35)

Q(GP36)

Q(GP37)

Q(GP38)

Q(GP39)

Q(GP4)

Q(GP40)

Q(GP41)

Q(GP42)

Q(GP43)

Q(GP44)

Q(GP45)

Q(GP46)

Q(GP47)

Q(GP5)

Q(GP6)

Q(GP7)

Q(GP8)

Q(GP9)

Q(GPIO0)

Q(GPIO1)

Q(GPIO10)

Q(GPIO11)

Q(GPIO12)

Q(GPIO13)

Q(GPIO14)

Q(GPIO15)

Q(GPIO16)

Q(GPIO17)

Q(GPIO18)

Q(GPIO19)

Q(GPIO2)

Q(GPIO20)

Q(GPIO21)

Q(GPIO22)

Q(GPIO23)

Q(GPIO24)

Q(GPIO25)

Q(GPIO26)

Q(GPIO27)

Q(GPIO28)

Q(GPIO29)

Q(GPIO3)

Q(GPIO30)

Q(GPIO31)

Q(GPIO32)

Q(GPIO33)

Q(GPIO34)

Q(GPIO35)

Q(GPIO36)

Q(GPIO37)

Q(GPIO38)

Q(GPIO39)

Q(GPIO4)

Q(GPIO40)

Q(GPIO41)

Q(GPIO42)

Q(GPIO43)

Q(GPIO44)

Q(GPIO45)

Q(GPIO46)

Q(GPIO47)

Q(GPIO5)

Q(GPIO6)

Q(GPIO7)

Q(GPIO8)

Q(GPIO9)

Q(Generator)

Q(GeneratorExit)

Q(GeneratorExit)

Q(HARD_FAULT)

Q(HARD_FAULT)

Q(Hash)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2CDevice)

Q(I2CDevice)

Q(I2CTarget)

Q(I2CTarget)

Q(I2CTargetRequest)

Q(INPUT)

Q(INPUT)

Q(INTERRUPT_ERROR)

Q(INTERRUPT_ERROR)

Q(IRQ)

Q(IV)

Q(IV)

Q(IV)

Q(IV)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LookupError)

Q(LookupError)

Q(M)

Q(MISO)

Q(MISO)

Q(MODE_CBC)

Q(MODE_CTR)

Q(MODE_ECB)

Q(MOSI)

Q(MOSI)

Q(MemoryError)

Q(MemoryError)

Q(NLR_JUMP_FAIL)

Q(NLR_JUMP_FAIL)

Q(NONE)

Q(NONE)

Q(NORMAL)

Q(NORMAL)

Q(NO_CIRCUITPY)

Q(NO_CIRCUITPY)

Q(NO_HEAP)

Q(NO_HEAP)

Q(NameError)

Q(NameError)

Q(None)

Q(None)

Q(None)

Q(None)

Q(None)

Q(None)

Q(None)

Q(NoneType)

Q(NotImplemented)

Q(NotImplemented)

Q(NotImplementedError)

Q(NotImplementedError)

Q(ODD)

Q(ODD)

Q(ODD_BYTES)

Q(ODD_BYTES)

Q(OPEN_DRAIN)

Q(OPEN_DRAIN)

Q(OSError)

Q(OSError)

Q(OUTPUT)

Q(OUTPUT)

Q(OneWire)

Q(OneWire)

Q(OrderedDict)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(POLLERR)

Q(POLLHUP)

Q(POLLIN)

Q(POLLOUT)

Q(POWER_ON)

Q(POWER_ON)

Q(PROGRAMMATIC)

Q(PROGRAMMATIC)

Q(PUSH_PULL)

Q(PUSH_PULL)

Q(PWMOut)

Q(PWMOut)

Q(ParallelImageCapture)

Q(ParallelImageCapture)

Q(Parity)

Q(Parity)

Q(Parity)

Q(Pin)

Q(Pin)

Q(Pin)

Q(Pin)

Q(Pin)

Q(Pin)

Q(Pin)

Q(PixelBuf)

Q(PixelBuf)

Q(PixelMap)

Q(PixelMap)

Q(PixelPolicy)

Q(PixelPolicy)

Q(Port)

Q(Port)

Q(Processor)

Q(Processor)

Q(Pull)

Q(Pull)

Q(Pull)

Q(Pull)

Q(PulseIn)

Q(PulseIn)

Q(PulseIn)

Q(PulseOut)

Q(PulseOut)

Q(QRDecoder)

Q(QRDecoder)

Q(QRDecoder)

Q(QRInfo)

Q(QRInfo)

Q(QRPosition)

Q(RAISE)

Q(RAISE)

Q(REPL_RELOAD)

Q(REPL_RELOAD)

Q(RESCUE_DEBUG)

Q(RESCUE_DEBUG)

Q(RESET)

Q(RESET)

Q(RESET_PIN)

Q(RESET_PIN)

Q(RGB565)

Q(RGB565)

Q(RGB565_SWAPPED)

Q(RGB565_SWAPPED)

Q(RISE)

Q(RISE)

Q(RISE_AND_FALL)

Q(RISE_AND_FALL)

Q(ReloadException)

Q(ReloadException)

Q(ResetReason)

Q(ResetReason)

Q(RunMode)

Q(RunMode)

Q(RunMode)

Q(RunReason)

Q(RunReason)

Q(Runtime)

Q(RuntimeError)

Q(RuntimeError)

Q(SAFE_MODE)

Q(SAFE_MODE)

Q(SDK_FATAL_ERROR)

Q(SDK_FATAL_ERROR)

Q(SOFTWARE)

Q(SOFTWARE)

Q(SPEED_FULL)

Q(SPEED_HIGH)

Q(SPEED_LOW)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPIDevice)

Q(SPIDevice)

Q(STACK_OVERFLOW)

Q(STACK_OVERFLOW)

Q(STARTUP)

Q(STARTUP)

Q(SUPERVISOR_RELOAD)

Q(SUPERVISOR_RELOAD)

Q(SafeModeReason)

Q(SafeModeReason)

Q(Serial)

Q(Serial)

Q(StateMachine)

Q(StateMachine)

Q(Status_Bar)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(T)

Q(Task)

Q(Task)

Q(TaskQueue)

Q(TaskQueue)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(TimeoutError)

Q(TimeoutError)

Q(TouchIn)

Q(TouchIn)

Q(True)

Q(True)

Q(TypeError)

Q(TypeError)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UF2)

Q(UF2)

Q(UNKNOWN)

Q(UNKNOWN)

Q(UP)

Q(UP)

Q(USBDevices)

Q(USBError)

Q(USBError)

Q(USBFramebuffer)

Q(USBFramebuffer)

Q(USBTimeoutError)

Q(USBTimeoutError)

Q(USB_BOOT_DEVICE_NOT_INTERFACE_ZERO)

Q(USB_BOOT_DEVICE_NOT_INTERFACE_ZERO)

Q(USB_TOO_MANY_ENDPOINTS)

Q(USB_TOO_MANY_ENDPOINTS)

Q(USB_TOO_MANY_INTERFACE_NAMES)

Q(USB_TOO_MANY_INTERFACE_NAMES)

Q(USER)

Q(USER)

Q(UnicodeError)

Q(UnicodeError)

Q(ValueError)

Q(ValueError)

Q(VfsFat)

Q(VfsFat)

Q(WATCHDOG)

Q(WATCHDOG)

Q(WATCHDOG)

Q(WATCHDOG)

Q(Warning)

Q(Warning)

Q(Warning)

Q(WatchDogMode)

Q(WatchDogMode)

Q(WatchDogTimeout)

Q(WatchDogTimeout)

Q(WatchDogTimer)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0x0a_)

Q(__abs__)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__and__)

Q(__anext__)

Q(__await__)

Q(__await__)

Q(__await__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__bytes__)

Q(__call__)

Q(__cause__)

Q(__cause__)

Q(__cause__)

Q(__cause__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__complex__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__context__)

Q(__context__)

Q(__context__)

Q(__context__)

Q(__context__)

Q(__context__)

Q(__context__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delete__)

Q(__delete__)

Q(__delete__)

Q(__delitem__)

Q(__delitem__)

Q(__dict__)

Q(__dict__)

Q(__dict__)

Q(__dir__)

Q(__divmod__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__float__)

Q(__floordiv__)

Q(__future__)

Q(__future__)

Q(__ge__)

Q(__get__)

Q(__get__)

Q(__get__)

Q(__get__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__globals__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__invert__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lshift__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__matmul__)

Q(__mod__)

Q(__module__)

Q(__mul__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__ne__)

Q(__neg__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__or__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__pos__)

Q(__pow__)

Q(__qualname__)

Q(__radd__)

Q(__rand__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__rfloordiv__)

Q(__rlshift__)

Q(__rmatmul__)

Q(__rmod__)

Q(__rmul__)

Q(__ror__)

Q(__rpow__)

Q(__rrshift__)

Q(__rshift__)

Q(__rsub__)

Q(__rtruediv__)

Q(__rxor__)

Q(__set__)

Q(__set__)

Q(__set__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__suppress_context__)

Q(__suppress_context__)

Q(__traceback__)

Q(__traceback__)

Q(__truediv__)

Q(__version__)

Q(__xor__)

Q(_asyncio)

Q(_asyncio)

Q(_build)

Q(_del__)

Q(_machine)

Q(_mpy)

Q(_pixelmap)

Q(_pixelmap)

Q(_task_queue)

Q(_transmit)

Q(a)

Q(a2b_base64)

Q(abs)

Q(ack)

Q(ack)

Q(acos)

Q(acos)

Q(acosh)

Q(adafruit_bus_device)

Q(adafruit_bus_device)

Q(adafruit_bus_device.i2c_device)

Q(adafruit_bus_device.spi_device)

Q(adafruit_pixelbuf)

Q(adafruit_pixelbuf)

Q(add)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(addresses)

Q(aesio)

Q(aesio)

Q(all)

Q(all)

Q(analogbufio)

Q(analogbufio)

Q(annotations)

Q(any)

Q(any)

Q(append)

Q(append)

Q(append)

Q(append)

Q(appendleft)

Q(arange)

Q(arctan2)

Q(argmax)

Q(argmin)

Q(args)

Q(argsort)

Q(argv)

Q(around)

Q(array)

Q(array)

Q(array)

Q(array)

Q(array)

Q(asarray)

Q(asin)

Q(asin)

Q(asinh)

Q(atan)

Q(atan)

Q(atan2)

Q(atanh)

Q(atexit)

Q(atexit)

Q(attach_kernel_driver)

Q(auto)

Q(auto)

Q(auto_pull)

Q(auto_push)

Q(auto_write)

Q(auto_write)

Q(auto_write)

Q(autoreload)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(b2a_base64)

Q(bRequest)

Q(background_read)

Q(background_write)

Q(base)

Q(base)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(big)

Q(big)

Q(big)

Q(bin)

Q(binascii)

Q(binascii)

Q(bisect)

Q(bit_length)

Q(bit_transpose)

Q(bitbangio)

Q(bitbangio)

Q(bitops)

Q(bitops)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bitwise_and)

Q(bitwise_or)

Q(bitwise_xor)

Q(ble_workflow)

Q(block_size)

Q(bmRequestType)

Q(board)

Q(board)

Q(board)

Q(board_id)

Q(bool)

Q(bool)

Q(bool)

Q(bottom_left_x)

Q(bottom_left_y)

Q(bottom_right_x)

Q(bottom_right_y)

Q(bound_method)

Q(bound_method)

Q(bound_method)

Q(bpp)

Q(bpp)

Q(brightness)

Q(brightness)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer_in)

Q(buffer_out)

Q(buffering)

Q(builtins)

Q(builtins)

Q(bus)

Q(busio)

Q(busio)

Q(busio)

Q(bytearray)

Q(bytearray)

Q(bytecode)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes)

Q(byteswap)

Q(byteswap)

Q(calcsize)

Q(callable)

Q(cancel)

Q(capture)

Q(cast)

Q(category)

Q(category)

Q(ceil)

Q(ceil)

Q(center)

Q(chain)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chip_select)

Q(chip_select)

Q(cho_solve)

Q(choice)

Q(cholesky)

Q(chr)

Q(circuitpython)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(clear_rxfifo)

Q(clear_txstall)

Q(clear_validity)

Q(clip)

Q(clock)

Q(clock)

Q(clock)

Q(clock)

Q(clock)

Q(clock)

Q(clock)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(code)

Q(code)

Q(code)

Q(code)

Q(codeop)

Q(codeop)

Q(collect)

Q(collections)

Q(collections)

Q(color)

Q(colorwheel)

Q(comments)

Q(comments)

Q(compile)

Q(compile)

Q(compile_command)

Q(complex)

Q(complex)

Q(compress)

Q(concatenate)

Q(configuration)

Q(configure)

Q(configure)

Q(configure)

Q(connected)

Q(console)

Q(console)

Q(console)

Q(console)

Q(const)

Q(const)

Q(continuous_capture_get_frame)

Q(continuous_capture_start)

Q(continuous_capture_stop)

Q(convolve)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copysign)

Q(core)

Q(coro)

Q(coroutine)

Q(coroutine)

Q(cos)

Q(cos)

Q(cosh)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(counter)

Q(countio)

Q(countio)

Q(countio)

Q(cp437)

Q(cp874)

Q(cpu)

Q(cpus)

Q(crc32)

Q(cross)

Q(cs_active_value)

Q(ctrl_transfer)

Q(cts)

Q(cts)

Q(cur_task)

Q(cur_task)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data_or_wLength)

Q(data_pins)

Q(data_type)

Q(ddof)

Q(decimals)

Q(decode)

Q(decode)

Q(decode)

Q(decompress)

Q(decrypt_into)

Q(default)

Q(default)

Q(default)

Q(degrees)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(delattr)

Q(delay_us)

Q(delete)

Q(deleter)

Q(delimiter)

Q(delimiter)

Q(deque)

Q(deque)

Q(det)

Q(detach_kernel_driver)

Q(device_address)

Q(diag)

Q(dict)

Q(dict)

Q(dict)

Q(dict_view)

Q(diff)

Q(difference)

Q(difference)

Q(difference_update)

Q(digest)

Q(digest_size)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(dir)

Q(direction)

Q(direction)

Q(disable)

Q(disable)

Q(disable_concurrent_write_protection)

Q(disable_interrupts)

Q(disable_usb_drive)

Q(discard)

Q(display)

Q(display)

Q(divmod)

Q(dm)

Q(doc)

Q(done)

Q(dot)

Q(dp)

Q(drive_mode)

Q(drive_mode)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dump)

Q(dumps)

Q(duty_cycle)

Q(duty_cycle)

Q(duty_cycle)

Q(duty_cycle)

Q(dx)

Q(e)

Q(e)

Q(edge)

Q(edge)

Q(edgeitems)

Q(edgeitems)

Q(eig)

Q(empty)

Q(enable)

Q(enable)

Q(enable_framebuffer)

Q(enable_interrupts)

Q(enable_usb_drive)

Q(encode)

Q(encoding)

Q(encrypt_into)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(endpoint)

Q(endpoint)

Q(endpoint)

Q(endpoint)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(equal)

Q(erase_filesystem)

Q(erf)

Q(erfc)

Q(errno)

Q(errno)

Q(errno)

Q(errno)

Q(errorcode)

Q(eval)

Q(eval)

Q(exclusive_pin_use)

Q(exec)

Q(exec)

Q(exit)

Q(exp)

Q(exp)

Q(expm1)

Q(ext_hook)

Q(extend)

Q(extend)

Q(extend)

Q(extend)

Q(extended)

Q(extended)

Q(extra_clocks)

Q(eye)

Q(fabs)

Q(fatol)

Q(feed)

Q(fft)

Q(fft)

Q(fft)

Q(fifo_type)

Q(fifo_type)

Q(file)

Q(file)

Q(file)

Q(file)

Q(filename)

Q(filename)

Q(filename)

Q(filename)

Q(filename2)

Q(filesystem)

Q(fill)

Q(fill)

Q(filter)

Q(filter)

Q(find)

Q(find)

Q(find)

Q(find)

Q(find_all)

Q(first_in_pin)

Q(first_in_pin)

Q(first_out_pin)

Q(first_out_pin)

Q(first_set_pin)

Q(first_set_pin)

Q(first_sideset_pin)

Q(first_sideset_pin)

Q(flat)

Q(flatiter)

Q(flatten)

Q(flip)

Q(float)

Q(float)

Q(float)

Q(float)

Q(floor)

Q(floor)

Q(floppyio)

Q(floppyio)

Q(flush)

Q(flush)

Q(flush)

Q(flush)

Q(flux)

Q(flux_readinto)

Q(flux_t2_max)

Q(flux_t3_max)

Q(fmin)

Q(fmod)

Q(footer)

Q(format)

Q(format)

Q(format_exception)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frexp)

Q(from_bytes)

Q(from_int16_buffer)

Q(from_int32_buffer)

Q(from_uint16_buffer)

Q(from_uint32_buffer)

Q(frombuffer)

Q(fromhex)

Q(fromkeys)

Q(frozenset)

Q(frozenset)

Q(full)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gamma)

Q(gammaln)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(get_previous_traceback)

Q(get_printoptions)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getenv)

Q(getlocale)

Q(getmount)

Q(getpass)

Q(getpass)

Q(getpass)

Q(getrandbits)

Q(getter)

Q(getvalue)

Q(globals)

Q(group)

Q(groups)

Q(half_duplex)

Q(half_duplex)

Q(hasattr)

Q(hash)

Q(hashlib)

Q(hashlib)

Q(header)

Q(header)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(help)

Q(help)

Q(hex)

Q(hex)

Q(hex)

Q(hexlify)

Q(high)

Q(href)

Q(href)

Q(i2c)

Q(i2c_device)

Q(i2c_device)

Q(i2ctarget)

Q(i2ctarget)

Q(id)

Q(idProduct)

Q(idProduct)

Q(idVendor)

Q(idVendor)

Q(idle_state)

Q(ifft)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(imag)

Q(imagecapture)

Q(imagecapture)

Q(implementation)

Q(in_buffer)

Q(in_buffer)

Q(in_buffer)

Q(in_buffer)

Q(in_buffer)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_pin_count)

Q(in_pin_count)

Q(in_shift_right)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_waiting)

Q(in_waiting)

Q(in_waiting)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index_wait)

Q(index_wait)

Q(indices)

Q(indices)

Q(indices)

Q(indices)

Q(inf)

Q(init)

Q(init)

Q(init)

Q(initial_out_pin_direction)

Q(initial_out_pin_state)

Q(initial_set_pin_direction)

Q(initial_set_pin_state)

Q(initial_sideset_pin_direction)

Q(initial_sideset_pin_state)

Q(inplace)

Q(input)

Q(input)

Q(input)

Q(insert)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int16)

Q(int8)

Q(interp)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(inv)

Q(io)

Q(io)

Q(ioctl)

Q(ioctl)

Q(ipoll)

Q(is_kernel_driver_active)

Q(is_read)

Q(is_restart)

Q(isalpha)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isfinite)

Q(isinf)

Q(isinf)

Q(isinstance)

Q(islower)

Q(isnan)

Q(iso_8859-1)

Q(iso_8859-13)

Q(iso_8859-15)

Q(iso_8859-2)

Q(iso_8859-3)

Q(iso_8859-4)

Q(iso_8859-5)

Q(iso_8859-6)

Q(iso_8859-7)

Q(iso_8859-8)

Q(iso_8859-9)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(items)

Q(items)

Q(itemsize)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(jmp_pin)

Q(jmp_pin)

Q(jmp_pin_pull)

Q(jmp_pull)

Q(join)

Q(json)

Q(json)

Q(json)

Q(k)

Q(k)

Q(keepends)

Q(key)

Q(key)

Q(key)

Q(key)

Q(key)

Q(key)

Q(key_size)

Q(keys)

Q(keys)

Q(label)

Q(last)

Q(last_read)

Q(last_write)

Q(ldexp)

Q(left)

Q(left_shift)

Q(len)

Q(length)

Q(length)

Q(length)

Q(limit)

Q(linalg)

Q(linalg)

Q(linalg)

Q(linalg)

Q(linspace)

Q(list)

Q(list)

Q(list)

Q(listdir)

Q(little)

Q(little)

Q(little)

Q(little)

Q(load)

Q(load)

Q(loads)

Q(loadtxt)

Q(loc)

Q(locale)

Q(locale)

Q(locals)

Q(localtime)

Q(log)

Q(log)

Q(log10)

Q(log2)

Q(logspace)

Q(loop)

Q(loop)

Q(loop)

Q(loop2)

Q(loop2)

Q(low)

Q(lower)

Q(lower)

Q(lstrip)

Q(machine)

Q(manufacturer)

Q(manufacturer)

Q(manufacturer)

Q(map)

Q(map)

Q(match)

Q(match)

Q(match)

Q(math)

Q(math)

Q(max)

Q(max)

Q(max_rows)

Q(maximum)

Q(maxiter)

Q(maxiter)

Q(maxiter)

Q(maxlen)

Q(maxlen)

Q(maxsize)

Q(may_exec)

Q(may_exec)

Q(mean)

Q(median)

Q(mem_alloc)

Q(mem_free)

Q(memorymap)

Q(memorymap)

Q(memoryview)

Q(memoryview)

Q(message)

Q(mfm_readinto)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(micropython)

Q(micropython)

Q(micropython)

Q(min)

Q(min)

Q(minimum)

Q(miso)

Q(miso)

Q(miso)

Q(miso)

Q(miso)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mktime)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(modf)

Q(modify)

Q(module)

Q(modules)

Q(modules)

Q(monotonic)

Q(monotonic_ns)

Q(mosi)

Q(mosi)

Q(mosi)

Q(mosi)

Q(mosi)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount_path)

Q(mount_path)

Q(mov_status_n)

Q(mov_status_type)

Q(mov_status_type)

Q(move_to_end)

Q(msgpack)

Q(msgpack)

Q(n)

Q(n)

Q(name)

Q(name)

Q(namedtuple)

Q(nan)

Q(ndarray)

Q(ndarray)

Q(ndinfo)

Q(new)

Q(newline)

Q(newton)

Q(next)

Q(nodename)

Q(nonzero)

Q(norm)

Q(normal)

Q(not_equal)

Q(num)

Q(num)

Q(numpy)

Q(numpy)

Q(nvm)

Q(nvm)

Q(nvm)

Q(obj)

Q(object)

Q(object)

Q(object)

Q(oct)

Q(offset)

Q(offset)

Q(offset)

Q(offset)

Q(offset)

Q(on_next_reset)

Q(once)

Q(once)

Q(ones)

Q(onewireio)

Q(onewireio)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(optimize)

Q(optimize)

Q(ord)

Q(order)

Q(os)

Q(os)

Q(otypes)

Q(out)

Q(out)

Q(out)

Q(out)

Q(out)

Q(out_buffer)

Q(out_buffer)

Q(out_buffer)

Q(out_buffer)

Q(out_buffer)

Q(out_buffer)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_pin_count)

Q(out_pin_count)

Q(out_pin_count)

Q(out_shift_right)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_waiting)

Q(output)

Q(output)

Q(pack)

Q(pack)

Q(pack_into)

Q(parity)

Q(partition)

Q(path)

Q(pause)

Q(paused)

Q(payload)

Q(pc)

Q(peek)

Q(pend_throw)

Q(pend_throw)

Q(pending)

Q(pending_read)

Q(pending_write)

Q(ph_key)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(pi)

Q(pi)

Q(pid)

Q(pid)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pins)

Q(pins)

Q(pins_are_sequential)

Q(pio_version)

Q(pixel_policy)

Q(pixel_policy)

Q(pixel_policy)

Q(pixel_policy)

Q(pixelbuf)

Q(pixelbuf)

Q(platform)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(poll)

Q(poll)

Q(poll)

Q(polyfit)

Q(polyval)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(popitem)

Q(popleft)

Q(popleft)

Q(port_numbers)

Q(pow)

Q(pow)

Q(print)

Q(print_exception)

Q(probe)

Q(probe)

Q(probe)

Q(probe)

Q(product)

Q(product)

Q(product)

Q(program)

Q(program)

Q(program)

Q(prompt)

Q(property)

Q(property)

Q(protocol_audiosample)

Q(protocol_framebuffer)

Q(protocol_vfs)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull_in_pin_down)

Q(pull_in_pin_up)

Q(pull_threshold)

Q(pull_threshold)

Q(pulseio)

Q(pulseio)

Q(push)

Q(push_threshold)

Q(push_threshold)

Q(putget)

Q(pwmio)

Q(pwmio)

Q(pystack exhausted)

Q(qr)

Q(qrio)

Q(qrio)

Q(qrio)

Q(r)

Q(r)

Q(radians)

Q(radians)

Q(rainbowio)

Q(rainbowio)

Q(randint)

Q(random)

Q(random)

Q(random)

Q(random)

Q(random)

Q(randrange)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(range)

Q(raw_value)

Q(rb)

Q(rb)

Q(re)

Q(re)

Q(re)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_bit)

Q(readblocks)

Q(readblocks)

Q(readfrom_into)

Q(readfrom_into)

Q(readfrom_into)

Q(reading)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readlines)

Q(readonly)

Q(readonly)

Q(readonly)

Q(readonly)

Q(real)

Q(receiver_buffer_size)

Q(receiver_buffer_size)

Q(receiver_buffer_size)

Q(reduced)

Q(refresh)

Q(register)

Q(register)

Q(rekey)

Q(release)

Q(reload)

Q(reload_on_error)

Q(reload_on_success)

Q(remount)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(rename)

Q(rename)

Q(rename)

Q(rename)

Q(replace)

Q(repr)

Q(request)

Q(reset)

Q(reset)

Q(reset)

Q(reset_input_buffer)

Q(reset_input_buffer)

Q(reset_output_buffer)

Q(reset_reason)

Q(reset_terminal)

Q(reshape)

Q(restart)

Q(resume)

Q(retstep)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(rgb_status_brightness)

Q(right)

Q(right_shift)

Q(rindex)

Q(rindex)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(roll)

Q(round)

Q(rp2pio)

Q(rp2pio)

Q(rpartition)

Q(rs485_dir)

Q(rs485_dir)

Q(rs485_invert)

Q(rsplit)

Q(rstrip)

Q(rtol)

Q(rts)

Q(rts)

Q(run)

Q(run_mode)

Q(run_reason)

Q(runtime)

Q(rx)

Q(rx)

Q(rx)

Q(rx)

Q(rxfifo)

Q(rxfifo)

Q(rxstall)

Q(safe_mode_reason)

Q(sample_rate)

Q(sample_rate)

Q(samplerate)

Q(save)

Q(savetxt)

Q(scale)

Q(scan)

Q(scan)

Q(scipy)

Q(scipy)

Q(scl)

Q(scl)

Q(scl)

Q(scl)

Q(scl)

Q(scl)

Q(sda)

Q(sda)

Q(sda)

Q(sda)

Q(sda)

Q(sda)

Q(search)

Q(search)

Q(seconds)

Q(seed)

Q(seek)

Q(seek)

Q(segment_size)

Q(select)

Q(select)

Q(select)

Q(self)

Q(self)

Q(send)

Q(send)

Q(send)

Q(send)

Q(sep)

Q(sep)

Q(separators)

Q(serial_bytes_available)

Q(serial_connected)

Q(serial_number)

Q(set)

Q(set)

Q(set)

Q(set_configuration)

Q(set_next_code_file)

Q(set_pin_count)

Q(set_pin_count)

Q(set_pin_count)

Q(set_printoptions)

Q(set_usb_identification)

Q(set_user_keymap)

Q(setattr)

Q(setdefault)

Q(setter)

Q(shape)

Q(shape)

Q(shift_underscore_jis)

Q(show)

Q(show)

Q(sideset_enable)

Q(sideset_pin_count)

Q(sideset_pindirs)

Q(signal)

Q(signal)

Q(signed)

Q(signed)

Q(signed)

Q(simplefilter)

Q(sin)

Q(sin)

Q(sinc)

Q(single)

Q(single)

Q(sinh)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size_or_buffer)

Q(skiprows)

Q(sleep)

Q(slice)

Q(slice)

Q(slice)

Q(smbus)

Q(solve_triangular)

Q(sort)

Q(sort)

Q(sort)

Q(sorted)

Q(sos)

Q(sosfilt)

Q(source)

Q(source)

Q(span)

Q(special)

Q(special)

Q(spectrogram)

Q(speed)

Q(spi)

Q(spi_device)

Q(spi_device)

Q(split)

Q(split)

Q(splitlines)

Q(sqrt)

Q(sqrt)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(startswith)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(state)

Q(state)

Q(staticmethod)

Q(staticmethod)

Q(status_bar)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(std)

Q(stderr)

Q(stdin)

Q(stdout)

Q(step)

Q(step)

Q(sticky_on_error)

Q(sticky_on_reload)

Q(sticky_on_success)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop_background_read)

Q(stop_background_write)

Q(storage)

Q(storage)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(stream)

Q(stream)

Q(stream)

Q(strerror)

Q(strides)

Q(strip)

Q(struct)

Q(struct)

Q(struct_time)

Q(struct_time)

Q(sub)

Q(sub)

Q(sum)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(supervisor)

Q(supervisor)

Q(supervisor)

Q(supervisor)

Q(swap)

Q(swap)

Q(swap)

Q(swap)

Q(swap_in)

Q(swap_out)

Q(switch_to_input)

Q(switch_to_output)

Q(symbol)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sync)

Q(sys)

Q(sys)

Q(sysname)

Q(tan)

Q(tan)

Q(tanh)

Q(tb)

Q(tb)

Q(tell)

Q(tell)

Q(temperature)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(throw)

Q(throw)

Q(throw)

Q(ticks_ms)

Q(time)

Q(time)

Q(time)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(tm_hour)

Q(tm_isdst)

Q(tm_mday)

Q(tm_min)

Q(tm_mon)

Q(tm_sec)

Q(tm_wday)

Q(tm_yday)

Q(tm_year)

Q(tm_year)

Q(to_bytes)

Q(tobytes)

Q(tol)

Q(tolist)

Q(top_left_x)

Q(top_left_y)

Q(top_right_x)

Q(top_right_y)

Q(touchio)

Q(touchio)

Q(trace)

Q(traceback)

Q(traceback)

Q(traceback)

Q(traceback)

Q(traceback)

Q(trailer)

Q(transpose)

Q(trapz)

Q(trigger_duration)

Q(trunc)

Q(try_lock)

Q(try_lock)

Q(try_lock)

Q(try_lock)

Q(try_lock)

Q(try_lock)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tx)

Q(tx)

Q(tx)

Q(tx)

Q(txfifo)

Q(txfifo)

Q(txget)

Q(txput)

Q(txrx)

Q(txstall)

Q(type)

Q(type)

Q(uid)

Q(uint16)

Q(uint8)

Q(ulab)

Q(ulab)

Q(ulab.numpy)

Q(ulab.numpy.fft)

Q(ulab.numpy.linalg)

Q(ulab.scipy)

Q(ulab.scipy.linalg)

Q(ulab.scipy.optimize)

Q(ulab.scipy.signal)

Q(ulab.scipy.special)

Q(ulab.utils)

Q(umount)

Q(umount)

Q(umount)

Q(umount)

Q(uname)

Q(unhexlify)

Q(uniform)

Q(uniform)

Q(union)

Q(union)

Q(unlink)

Q(unlock)

Q(unlock)

Q(unlock)

Q(unlock)

Q(unlock)

Q(unlock)

Q(unpack)

Q(unpack)

Q(unpack_from)

Q(unregister)

Q(unregister)

Q(update)

Q(update)

Q(update)

Q(upper)

Q(urandom)

Q(usb)

Q(usb)

Q(usb.core)

Q(usb.core)

Q(usb.util)

Q(usb.util)

Q(usb_cdc)

Q(usb_cdc)

Q(usb_connected)

Q(usb_host)

Q(usb_host)

Q(usb_host)

Q(usb_video)

Q(usb_video)

Q(use_list)

Q(usecols)

Q(user_interruptible)

Q(usys)

Q(utf-8)

Q(utf-8)

Q(utf-8)

Q(utf-8)

Q(utf-8)

Q(util)

Q(utils)

Q(utils)

Q(utime)

Q(utime)

Q(utime)

Q(v)

Q(validity)

Q(validity)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(values)

Q(values)

Q(variable_frequency)

Q(variable_frequency)

Q(variable_frequency)

Q(vectorize)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(vid)

Q(vid)

Q(voltage)

Q(vsync)

Q(vsync)

Q(w)

Q(wIndex)

Q(wValue)

Q(wait_for_txstall)

Q(warn)

Q(warnings)

Q(warnings)

Q(watchdog)

Q(watchdog)

Q(watchdog)

Q(watchdog)

Q(wb)

Q(where)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(working_directory)

Q(working_directory)

Q(working_directory)

Q(wrap)

Q(wrap)

Q(wrap_target)

Q(wrap_target)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_bit)

Q(write_readinto)

Q(write_readinto)

Q(write_readinto)

Q(write_then_readinto)

Q(write_timeout)

Q(write_value)

Q(write_value)

Q(writeblocks)

Q(writeblocks)

Q(writeto)

Q(writeto)

Q(writeto)

Q(writeto_then_readfrom)

Q(writeto_then_readfrom)

Q(writeto_then_readfrom)

Q(writing)

Q(x)

Q(x)

Q(xatol)

Q(xtol)

Q(zeros)

Q(zi)

Q(zip)

Q(zip)

Q(zlib)

Q(zlib)

Q({_colon_#b})

TRANSLATE("  File \"%q\", line %d")

TRANSLATE(" is of type %q\n")

TRANSLATE(" not found.\n")

TRANSLATE(" output:\n")

TRANSLATE("%%c needs int or char")

TRANSLATE("%%c needs int or char")

TRANSLATE("%02X")

TRANSLATE("%S")

TRANSLATE("%S")

TRANSLATE("%S")

TRANSLATE("%S")

TRANSLATE("%q and %q contain duplicate pins")

TRANSLATE("%q contains duplicate pins")

TRANSLATE("%q in %q must be of type %q, not %q")

TRANSLATE("%q in use")

TRANSLATE("%q in use")

TRANSLATE("%q in use")

TRANSLATE("%q in use")

TRANSLATE("%q index out of range")

TRANSLATE("%q index out of range")

TRANSLATE("%q indices must be integers, not %s")

TRANSLATE("%q init failed")

TRANSLATE("%q init failed")

TRANSLATE("%q init failed")

TRANSLATE("%q length must be %d")

TRANSLATE("%q length must be %d-%d")

TRANSLATE("%q length must be <= %d")

TRANSLATE("%q length must be >= %d")

TRANSLATE("%q must be %d")

TRANSLATE("%q must be %d-%d")

TRANSLATE("%q must be %d-%d")

TRANSLATE("%q must be <= %d")

TRANSLATE("%q must be >= %d")

TRANSLATE("%q must be >= %d")

TRANSLATE("%q must be a bytearray or array of type 'H' or 'B'")

TRANSLATE("%q must be a subclass of %q")

TRANSLATE("%q must be of type %q or %q, not %q")

TRANSLATE("%q must be of type %q or %q, not %q")

TRANSLATE("%q must be of type %q or %q, not %q")

TRANSLATE("%q must be of type %q or %q, not %q")

TRANSLATE("%q must be of type %q or %q, not %q")

TRANSLATE("%q must be of type %q or %q, not %q")

TRANSLATE("%q must be of type %q or %q, not %q")

TRANSLATE("%q must be of type %q, not %q")

TRANSLATE("%q must be of type %q, not %q")

TRANSLATE("%q must be of type %q, not %q")

TRANSLATE("%q must be of type %q, not %q")

TRANSLATE("%q must be of type %q, not %q")

TRANSLATE("%q out of range")

TRANSLATE("%q out of range")

TRANSLATE("%q out of range")

TRANSLATE("%q step cannot be zero")

TRANSLATE("%q step cannot be zero")

TRANSLATE("%q step cannot be zero")

TRANSLATE("%q too long")

TRANSLATE("%q")

TRANSLATE("%q=%q")

TRANSLATE("%q=%q")

TRANSLATE("%q[%u] shifts in more bits than pin count")

TRANSLATE("%q[%u] shifts out more bits than pin count")

TRANSLATE("%q[%u] uses extra pin")

TRANSLATE("%q[%u] waits on input outside of count")

TRANSLATE("%s")

TRANSLATE("'%q' argument required")

TRANSLATE("'%q' object does not support '%q'")

TRANSLATE("'%q' object isn't an iterator")

TRANSLATE("'%q' object isn't an iterator")

TRANSLATE("'%q' object isn't callable")

TRANSLATE("'%q' object isn't callable")

TRANSLATE("'%q' object isn't callable")

TRANSLATE("'%q' object isn't iterable")

TRANSLATE("'%s' object doesn't support item assignment")

TRANSLATE("'%s' object doesn't support item deletion")

TRANSLATE("'%s' object has no attribute '%q'")

TRANSLATE("'%s' object isn't subscriptable")

TRANSLATE("'=' alignment not allowed in string format specifier")

TRANSLATE("'await' outside function")

TRANSLATE("'break'/'continue' outside loop")

TRANSLATE("'return' outside function")

TRANSLATE("'yield from' inside async function")

TRANSLATE("'yield' outside function")

TRANSLATE("* arg after **")

TRANSLATE("*x must be assignment target")

TRANSLATE(", in %q\n")

TRANSLATE("0.0 to a complex power")

TRANSLATE("Address range not allowed")

TRANSLATE("Address range wraps around")

TRANSLATE("All dma channels in use")

TRANSLATE("All state machines in use")

TRANSLATE("All state machines in use")

TRANSLATE("All state machines in use")

TRANSLATE("An error occurred while retrieving '%s':\n")

TRANSLATE("Array must contain halfwords (type 'H')")

TRANSLATE("Array values should be single bytes.")

TRANSLATE("Array values should be single bytes.")

TRANSLATE("Auto-reload is off.\n")

TRANSLATE("Auto-reload is on. Simply save files over USB to run them or enter REPL to disable.\n")

TRANSLATE("Boot device must be first (interface #0).")

TRANSLATE("Buffer elements must be 4 bytes long or less")

TRANSLATE("Buffer elements must be 4 bytes long or less")

TRANSLATE("Buffer elements must be 4 bytes long or less")

TRANSLATE("Buffer must be a multiple of %d bytes")

TRANSLATE("Buffer too small")

TRANSLATE("Buffer too small")

TRANSLATE("Buffer too small")

TRANSLATE("CBC blocks must be multiples of 16 bytes")

TRANSLATE("CIRCUITPY drive could not be found or created.")

TRANSLATE("Call super().__init__() before accessing native object.")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot delete values")

TRANSLATE("Cannot get pull while in output mode")

TRANSLATE("Cannot remount path when visible via USB.")

TRANSLATE("Cannot set value when direction is input.")

TRANSLATE("Cannot subclass slice")

TRANSLATE("Cannot use GPIO0..15 together with GPIO32..47")

TRANSLATE("CircuitPython core code crashed hard. Whoops!\n")

TRANSLATE("Could not allocate DMA capable buffer")

TRANSLATE("Could not allocate DMA capable buffer")

TRANSLATE("Could not allocate DMA capable buffer")

TRANSLATE("Done")

TRANSLATE("Drive mode not used when direction is input.")

TRANSLATE("Drive mode not used when direction is input.")

TRANSLATE("During handling of the above exception, another exception occurred:")

TRANSLATE("ECB only operates on 16 bytes at a time")

TRANSLATE("Error in regex")

TRANSLATE("Error in safemode.py.")

TRANSLATE("FFT is defined for ndarrays only")

TRANSLATE("FFT is defined for ndarrays only")

TRANSLATE("FFT is implemented for linear arrays only")

TRANSLATE("FFT is implemented for linear arrays only")

TRANSLATE("Failed to write internal flash.")

TRANSLATE("File exists")

TRANSLATE("File not found")

TRANSLATE("File not found")

TRANSLATE("Function requires lock")

TRANSLATE("Function requires lock")

TRANSLATE("Function requires lock")

TRANSLATE("Function requires lock")

TRANSLATE("Hard fault: memory access or instruction error.")

TRANSLATE("Heap allocation when VM not running.")

TRANSLATE("I/O operation on closed file")

TRANSLATE("I2C peripheral in use")

TRANSLATE("I2C peripheral in use")

TRANSLATE("In-buffer elements must be <= 4 bytes long")

TRANSLATE("Init program size invalid")

TRANSLATE("Initial set pin direction conflicts with initial out pin direction")

TRANSLATE("Initial set pin state conflicts with initial out pin state")

TRANSLATE("Input buffer length (%d) must be a multiple of the strand count (%d)")

TRANSLATE("Input/output error")

TRANSLATE("Internal error")

TRANSLATE("Internal error")

TRANSLATE("Internal resource(s) in use")

TRANSLATE("Internal watchdog timer expired.")

TRANSLATE("Interrupt error.")

TRANSLATE("Invalid %q pin")

TRANSLATE("Invalid %q")

TRANSLATE("Invalid %q")

TRANSLATE("Invalid %q")

TRANSLATE("Invalid %q")

TRANSLATE("Invalid argument")

TRANSLATE("Invalid byte %.*s")

TRANSLATE("Invalid format")

TRANSLATE("Invalid unicode escape")

TRANSLATE("Key must be 16, 24, or 32 bytes long")

TRANSLATE("Key must be 16, 24, or 32 bytes long")

TRANSLATE("Key not found")

TRANSLATE("LHS of keyword arg must be an id")

TRANSLATE("MicroPython .mpy file; use CircuitPython mpy-cross")

TRANSLATE("Mismatched data size")

TRANSLATE("Mismatched data size")

TRANSLATE("Mismatched data size")

TRANSLATE("Mismatched swap flag")

TRANSLATE("Mismatched swap flag")

TRANSLATE("Missing first_in_pin. %q[%u] reads pin(s)")

TRANSLATE("Missing first_in_pin. %q[%u] shifts in from pin(s)")

TRANSLATE("Missing first_in_pin. %q[%u] waits based on pin")

TRANSLATE("Missing first_out_pin. %q[%u] shifts out to pin(s)")

TRANSLATE("Missing first_out_pin. %q[%u] writes pin(s)")

TRANSLATE("Missing first_set_pin. %q[%u] sets pin(s)")

TRANSLATE("Missing jmp_pin. %q[%u] jumps on pin")

TRANSLATE("Mount point directory missing")

TRANSLATE("Mount point directory missing")

TRANSLATE("Must be a %q subclass.")

TRANSLATE("Must provide MISO or MOSI pin")

TRANSLATE("NLR jump failed. Likely memory corruption.")

TRANSLATE("No %q pin")

TRANSLATE("No %q pin")

TRANSLATE("No %q pin")

TRANSLATE("No %q pin")

TRANSLATE("No %q pin")

TRANSLATE("No %q pin")

TRANSLATE("No I2C device at address: 0x%x")

TRANSLATE("No configuration set")

TRANSLATE("No default %q bus")

TRANSLATE("No default %q bus")

TRANSLATE("No default %q bus")

TRANSLATE("No hardware random available")

TRANSLATE("No in in program")

TRANSLATE("No in or out in program")

TRANSLATE("No out in program")

TRANSLATE("No pull up found on SDA or SCL; check your wiring")

TRANSLATE("No pulldown on pin; 1Mohm recommended")

TRANSLATE("No pullup on pin; 1Mohm recommended")

TRANSLATE("No space left on device")

TRANSLATE("No such device")

TRANSLATE("No such file/directory")

TRANSLATE("No usb host port initialized")

TRANSLATE("Object has been deinitialized and can no longer be used. Create a new object.")

TRANSLATE("Only one address is allowed")

TRANSLATE("Operation not permitted")

TRANSLATE("Out-buffer elements must be <= 4 bytes long")

TRANSLATE("PWM slice already in use")

TRANSLATE("PWM slice channel A already in use")

TRANSLATE("Permission denied")

TRANSLATE("Pin count too large")

TRANSLATE("Pin must be on PWM Channel B")

TRANSLATE("Pins must be sequential")

TRANSLATE("Pipe error")

TRANSLATE("Pipe error")

TRANSLATE("Plus any modules on the filesystem\n")

TRANSLATE("Power dipped. Make sure you are providing enough power.")

TRANSLATE("Press any key to enter the REPL. Use CTRL-D to reload.\n")

TRANSLATE("Program does IN without loading ISR")

TRANSLATE("Program does OUT without loading OSR")

TRANSLATE("Program size invalid")

TRANSLATE("Program size invalid")

TRANSLATE("Pull not used when direction is output.")

TRANSLATE("Pull not used when direction is output.")

TRANSLATE("RISE_AND_FALL not available on this chip")

TRANSLATE("RTC is not supported on this board")

TRANSLATE("Read-only filesystem")

TRANSLATE("Read-only filesystem")

TRANSLATE("Read-only")

TRANSLATE("Requested AES mode is unsupported")

TRANSLATE("Requested AES mode is unsupported")

TRANSLATE("Running in safe mode! Not running saved code.\n")

TRANSLATE("SPI peripheral in use")

TRANSLATE("Slice and value different lengths.")

TRANSLATE("Slice and value different lengths.")

TRANSLATE("Slices not supported")

TRANSLATE("Source and destination buffers must be the same length")

TRANSLATE("Stack overflow. Increase stack size.")

TRANSLATE("The `microcontroller` module was used to boot into safe mode.")

TRANSLATE("The above exception was the direct cause of the following exception:")

TRANSLATE("Third-party firmware fatal error.")

TRANSLATE("This microcontroller does not support continuous capture.")

TRANSLATE("This microcontroller does not support continuous capture.")

TRANSLATE("This microcontroller does not support continuous capture.")

TRANSLATE("Traceback (most recent call last):\n")

TRANSLATE("UART peripheral in use")

TRANSLATE("UID:")

TRANSLATE("USB devices need more endpoints than are available.")

TRANSLATE("USB devices specify too many interface names.")

TRANSLATE("Unable to access unaligned IO register")

TRANSLATE("Unable to access unaligned IO register")

TRANSLATE("Unable to allocate to the heap.")

TRANSLATE("Unable to init parser")

TRANSLATE("Unable to write to nvm.")

TRANSLATE("Unable to write to nvm.")

TRANSLATE("Unable to write to read-only memory")

TRANSLATE("Unknown reason.")

TRANSLATE("Unmatched number of items on RHS (expected %d, got %d).")

TRANSLATE("Unmatched number of items on RHS (expected %d, got %d).")

TRANSLATE("Unsupported hash algorithm")

TRANSLATE("WARNING: Your code filename has two extensions\n")

TRANSLATE("Welcome to Adafruit CircuitPython %s!\n\nVisit circuitpython.org for more information.\n\nTo list built-in modules type `help(\"modules\")`.\n")

TRANSLATE("You pressed the BOOT button at start up")

TRANSLATE("[truncated due to length]")

TRANSLATE("[truncated due to length]")

TRANSLATE("\nCode done running.\n")

TRANSLATE("\nCode stopped by auto-reload. Reloading soon.\n")

TRANSLATE("\nPlease file an issue with your program at github.com/adafruit/circuitpython/issues.")

TRANSLATE("\nPress reset to exit safe mode.\n")

TRANSLATE("\nYou are in safe mode because:\n")

TRANSLATE("__init__() should return None, not '%s'")

TRANSLATE("__new__ arg must be a user-type")

TRANSLATE("a bytes-like object is required")

TRANSLATE("a bytes-like object is required")

TRANSLATE("abort() called")

TRANSLATE("addresses is empty")

TRANSLATE("arange: cannot compute length")

TRANSLATE("arg is an empty sequence")

TRANSLATE("argsort argument must be an ndarray")

TRANSLATE("argsort is not implemented for flattened arrays")

TRANSLATE("argument must be None, an integer or a tuple of integers")

TRANSLATE("argument name reused")

TRANSLATE("argument num/types mismatch")

TRANSLATE("arguments must be ndarrays")

TRANSLATE("arguments must be ndarrays")

TRANSLATE("array and index length must be equal")

TRANSLATE("array is too big")

TRANSLATE("array/bytes required on right side")

TRANSLATE("array/bytes required on right side")

TRANSLATE("array/bytes required on right side")

TRANSLATE("async for/with outside async function")

TRANSLATE("attempt to get (arg)min/(arg)max of empty sequence")

TRANSLATE("attempt to get argmin/argmax of an empty sequence")

TRANSLATE("attributes not supported")

TRANSLATE("axis is out of bounds")

TRANSLATE("axis must be None, or an integer")

TRANSLATE("axis must be None, or an integer")

TRANSLATE("axis must be None, or an integer")

TRANSLATE("axis too long")

TRANSLATE("bad compile mode")

TRANSLATE("bad conversion specifier")

TRANSLATE("bad typecode")

TRANSLATE("bad typecode")

TRANSLATE("buffer is smaller than requested size")

TRANSLATE("buffer is smaller than requested size")

TRANSLATE("buffer size must be a multiple of element size")

TRANSLATE("buffer size must be a multiple of element size")

TRANSLATE("buffer size must match format")

TRANSLATE("buffer slices must be of equal length")

TRANSLATE("buffer slices must be of equal length")

TRANSLATE("buffer too small")

TRANSLATE("bytecode overflow")

TRANSLATE("bytes length not a multiple of item size")

TRANSLATE("bytes value out of range")

TRANSLATE("can only specify one unknown dimension")

TRANSLATE("can't add special method to already-subclassed class")

TRANSLATE("can't assign to expression")

TRANSLATE("can't assign to expression")

TRANSLATE("can't assign to expression")

TRANSLATE("can't cancel self")

TRANSLATE("can't convert %q to %q")

TRANSLATE("can't convert %q to %q")

TRANSLATE("can't convert %s to complex")

TRANSLATE("can't convert %s to float")

TRANSLATE("can't convert %s to int")

TRANSLATE("can't convert %s to int")

TRANSLATE("can't convert %s to int")

TRANSLATE("can't convert '%q' object to %q implicitly")

TRANSLATE("can't create '%q' instances")

TRANSLATE("can't declare nonlocal in outer code")

TRANSLATE("can't delete expression")

TRANSLATE("can't import name %q")

TRANSLATE("can't perform relative import")

TRANSLATE("can't send non-None value to a just-started generator")

TRANSLATE("can't set attribute '%q'")

TRANSLATE("can't set attribute")

TRANSLATE("can't switch from automatic field numbering to manual field specification")

TRANSLATE("can't switch from manual field specification to automatic field numbering")

TRANSLATE("can't truncate-divide a complex number")

TRANSLATE("can't wait")

TRANSLATE("cannot assign new shape")

TRANSLATE("cannot cast output with casting rule")

TRANSLATE("cannot delete array elements")

TRANSLATE("cannot reshape array")

TRANSLATE("chr() arg not in range(0x110000)")

TRANSLATE("code outside range 0~127")

TRANSLATE("complex divide by zero")

TRANSLATE("convolve arguments must be linear arrays")

TRANSLATE("convolve arguments must be ndarrays")

TRANSLATE("convolve arguments must not be empty")

TRANSLATE("corrupted file")

TRANSLATE("corrupted file")

TRANSLATE("corrupted file")

TRANSLATE("could not invert Vandermonde matrix")

TRANSLATE("cross is defined for 1D arrays of length 3")

TRANSLATE("data type not understood")

TRANSLATE("default 'except' must be last")

TRANSLATE("default is not a function")

TRANSLATE("dict update sequence has wrong length")

TRANSLATE("diff argument must be an ndarray")

TRANSLATE("differentiation order out of range")

TRANSLATE("differentiation order out of range")

TRANSLATE("dimensions do not match")

TRANSLATE("divide by zero")

TRANSLATE("division by zero")

TRANSLATE("dtype of int32 is not supported")

TRANSLATE("empty file")

TRANSLATE("empty heap")

TRANSLATE("empty separator")

TRANSLATE("empty separator")

TRANSLATE("empty separator")

TRANSLATE("empty sequence")

TRANSLATE("empty")

TRANSLATE("empty")

TRANSLATE("en_US")

TRANSLATE("exceptions must derive from BaseException")

TRANSLATE("expected ':' after format specifier")

TRANSLATE("expecting just a value for set")

TRANSLATE("expecting key:value for dict")

TRANSLATE("ext_hook is not a function")

TRANSLATE("extra keyword arguments given")

TRANSLATE("extra positional arguments given")

TRANSLATE("filesystem must provide mount method")

TRANSLATE("first argument must be a callable")

TRANSLATE("first argument must be a function")

TRANSLATE("first argument must be a function")

TRANSLATE("first argument must be a function")

TRANSLATE("first argument must be a tuple of ndarrays")

TRANSLATE("first argument must be an ndarray")

TRANSLATE("first argument must be an ndarray")

TRANSLATE("first argument must be an ndarray")

TRANSLATE("first argument to super() must be type")

TRANSLATE("first two arguments must be ndarrays")

TRANSLATE("first two arguments must be ndarrays")

TRANSLATE("flattening order must be either 'C', or 'F'")

TRANSLATE("flip argument must be an ndarray")

TRANSLATE("format needs a dict")

TRANSLATE("format string didn't convert all arguments")

TRANSLATE("format string needs more arguments")

TRANSLATE("full")

TRANSLATE("full")

TRANSLATE("function doesn't take keyword arguments")

TRANSLATE("function expected at most %d arguments, got %d")

TRANSLATE("function got multiple values for argument '%q'")

TRANSLATE("function got multiple values for argument '%q'")

TRANSLATE("function has the same sign at the ends of interval")

TRANSLATE("function is defined for ndarrays only")

TRANSLATE("function missing %d required positional arguments")

TRANSLATE("function missing keyword-only argument")

TRANSLATE("function missing required keyword argument '%q'")

TRANSLATE("function missing required positional argument #%d")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("generator already executing")

TRANSLATE("generator already executing")

TRANSLATE("generator ignored GeneratorExit")

TRANSLATE("generator raised StopIteration")

TRANSLATE("generator raised StopIteration")

TRANSLATE("identifier redefined as global")

TRANSLATE("identifier redefined as nonlocal")

TRANSLATE("import * not at module level")

TRANSLATE("incompatible .mpy arch")

TRANSLATE("incompatible .mpy file")

TRANSLATE("incompatible .mpy file")

TRANSLATE("incomplete format key")

TRANSLATE("incomplete format")

TRANSLATE("incorrect padding")

TRANSLATE("index is out of bounds")

TRANSLATE("index is out of bounds")

TRANSLATE("index is out of bounds")

TRANSLATE("index is out of bounds")

TRANSLATE("index must be tuple or int")

TRANSLATE("index out of range")

TRANSLATE("index out of range")

TRANSLATE("indices must be integers, slices, or Boolean lists")

TRANSLATE("input and output dimensions differ")

TRANSLATE("input and output shapes differ")

TRANSLATE("input argument must be an integer, a tuple, or a list")

TRANSLATE("input array length must be power of 2")

TRANSLATE("input arrays are not compatible")

TRANSLATE("input arrays are not compatible")

TRANSLATE("input data must be an iterable")

TRANSLATE("input data must be an iterable")

TRANSLATE("input is not iterable")

TRANSLATE("input matrix is asymmetric")

TRANSLATE("input matrix is asymmetric")

TRANSLATE("input matrix is singular")

TRANSLATE("input matrix is singular")

TRANSLATE("input must be a dense ndarray")

TRANSLATE("input must be a dense ndarray")

TRANSLATE("input must be one-dimensional")

TRANSLATE("input must be square matrix")

TRANSLATE("input must be tuple, list, range, or ndarray")

TRANSLATE("input must be tuple, list, range, or ndarray")

TRANSLATE("input vectors must be of equal length")

TRANSLATE("interp is defined for 1D iterables of equal length")

TRANSLATE("invalid exception")

TRANSLATE("invalid format specifier")

TRANSLATE("invalid micropython decorator")

TRANSLATE("invalid micropython decorator")

TRANSLATE("invalid step")

TRANSLATE("invalid syntax for integer with base %d")

TRANSLATE("invalid syntax for number")

TRANSLATE("invalid syntax")

TRANSLATE("invalid syntax")

TRANSLATE("invalid syntax")

TRANSLATE("issubclass() arg 1 must be a class")

TRANSLATE("issubclass() arg 2 must be a class or a tuple of classes")

TRANSLATE("iterations did not converge")

TRANSLATE("join expects a list of str/bytes objects consistent with self object")

TRANSLATE("keyword argument(s) not implemented - use normal args instead")

TRANSLATE("lhs and rhs should be compatible")

TRANSLATE("local variable referenced before assignment")

TRANSLATE("malformed f-string")

TRANSLATE("math domain error")

TRANSLATE("matrix is not positive definite")

TRANSLATE("maximum number of dimensions is " "2")

TRANSLATE("maximum number of dimensions is " "2")

TRANSLATE("maximum number of dimensions is " "2")

TRANSLATE("maximum number of dimensions is " "2")

TRANSLATE("maximum recursion depth exceeded")

TRANSLATE("maxiter must be > 0")

TRANSLATE("maxiter must be > 0")

TRANSLATE("maxiter should be > 0")

TRANSLATE("median argument must be an ndarray")

TRANSLATE("memory allocation failed, allocating %u bytes")

TRANSLATE("memory allocation failed, heap is locked")

TRANSLATE("memoryview offset too large")

TRANSLATE("memoryview: length is not a multiple of itemsize")

TRANSLATE("mode must be complete, or reduced")

TRANSLATE("more degrees of freedom than data points")

TRANSLATE("more degrees of freedom than data points")

TRANSLATE("multiple *x in assignment")

TRANSLATE("multiple bases have instance lay-out conflict")

TRANSLATE("must use keyword argument for key function")

TRANSLATE("name '%q' isn't defined")

TRANSLATE("name too long")

TRANSLATE("native code in .mpy unsupported")

TRANSLATE("ndarray length overflows")

TRANSLATE("need more than %d values to unpack")

TRANSLATE("need more than %d values to unpack")

TRANSLATE("negative shift count")

TRANSLATE("negative shift count")

TRANSLATE("negative shift count")

TRANSLATE("nested index must be int")

TRANSLATE("no active exception to reraise")

TRANSLATE("no binding for nonlocal found")

TRANSLATE("no default packer")

TRANSLATE("no default seed")

TRANSLATE("no module named '%q'")

TRANSLATE("non-default argument follows default argument")

TRANSLATE("non-hex digit")

TRANSLATE("not a constant")

TRANSLATE("not supported for input types")

TRANSLATE("number of points must be at least 2")

TRANSLATE("number of points must be at least 2")

TRANSLATE("object ")

TRANSLATE("object '%s' isn't a tuple or list")

TRANSLATE("object not in sequence")

TRANSLATE("object of type '%s' has no len()")

TRANSLATE("object with buffer protocol required")

TRANSLATE("offset is too large")

TRANSLATE("offset must be non-negative and no greater than buffer length")

TRANSLATE("only ndarrays can be concatenated")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("opcode")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operation is defined for 2D arrays only")

TRANSLATE("operation is defined for ndarrays only")

TRANSLATE("operation is implemented for 1D Boolean arrays only")

TRANSLATE("operation is not implemented on ndarrays")

TRANSLATE("operation is not supported for given type")

TRANSLATE("operation not supported for the input types")

TRANSLATE("ord() expected a character, but string of length %d found")

TRANSLATE("out array is too small")

TRANSLATE("out has wrong type")

TRANSLATE("out keyword is not supported for function")

TRANSLATE("out must be a float dense array")

TRANSLATE("out must be an ndarray")

TRANSLATE("out must be of float dtype")

TRANSLATE("output array has wrong type")

TRANSLATE("output array must be contiguous")

TRANSLATE("overflow converting long int to machine word")

TRANSLATE("overflow converting long int to machine word")

TRANSLATE("pop from empty %q")

TRANSLATE("pop from empty %q")

TRANSLATE("pop from empty %q")

TRANSLATE("pop from empty %q")

TRANSLATE("positional arg after **")

TRANSLATE("positional arg after keyword arg")

TRANSLATE("pow() 3rd argument cannot be 0")

TRANSLATE("pow() with 3 arguments requires integers")

TRANSLATE("pull masks conflict with direction masks")

TRANSLATE("real and imaginary parts must be of equal length")

TRANSLATE("requested length %d but object has length %d")

TRANSLATE("results cannot be cast to specified type")

TRANSLATE("results cannot be cast to specified type")

TRANSLATE("roll argument must be an ndarray")

TRANSLATE("rsplit(None,n)")

TRANSLATE("shape must be None, and integer or a tuple of integers")

TRANSLATE("shape must be None, and integer or a tuple of integers")

TRANSLATE("shape must be None, and integer or a tuple of integers")

TRANSLATE("shape must be integer or tuple of integers")

TRANSLATE("short read")

TRANSLATE("sign not allowed in string format specifier")

TRANSLATE("sign not allowed with integer format specifier 'c'")

TRANSLATE("size is defined for ndarrays only")

TRANSLATE("size must match out.shape when used together")

TRANSLATE("small int overflow")

TRANSLATE("soft reboot\n")

TRANSLATE("sort argument must be an ndarray")

TRANSLATE("sos array must be of shape (n_section, 6)")

TRANSLATE("sos[:, 3] should be all ones")

TRANSLATE("sosfilt requires iterable arguments")

TRANSLATE("splitting with sub-captures")

TRANSLATE("stop not reachable from start")

TRANSLATE("stop not reachable from start")

TRANSLATE("stream operation not supported")

TRANSLATE("string argument without an encoding")

TRANSLATE("string argument without an encoding")

TRANSLATE("string index out of range")

TRANSLATE("string index out of range")

TRANSLATE("string indices must be integers, not %s")

TRANSLATE("substring not found")

TRANSLATE("substring not found")

TRANSLATE("super() can't find self")

TRANSLATE("syntax error in JSON")

TRANSLATE("timeout waiting for flux")

TRANSLATE("timeout waiting for index pulse")

TRANSLATE("timeout waiting for index pulse")

TRANSLATE("timestamp out of range for platform time_t")

TRANSLATE("tobytes can be invoked for dense arrays only")

TRANSLATE("too many args")

TRANSLATE("too many dimensions")

TRANSLATE("too many dimensions")

TRANSLATE("too many indices")

TRANSLATE("too many values to unpack (expected %d)")

TRANSLATE("trapz is defined for 1D arrays of equal length")

TRANSLATE("trapz is defined for 1D iterables")

TRANSLATE("tx and rx cannot both be None")

TRANSLATE("type '%q' isn't an acceptable base type")

TRANSLATE("type object '%q' has no attribute '%q'")

TRANSLATE("type takes 1 or 3 arguments")

TRANSLATE("unexpected indent")

TRANSLATE("unexpected keyword argument '%q'")

TRANSLATE("unexpected keyword argument '%q'")

TRANSLATE("unexpected keyword argument '%q'")

TRANSLATE("unexpected keyword argument '%q'")

TRANSLATE("unicode name escapes")

TRANSLATE("unindent doesn't match any outer indent level")

TRANSLATE("unknown format code '%c' for object of type '%q'")

TRANSLATE("unknown format code '%c' for object of type '%q'")

TRANSLATE("unknown format code '%c' for object of type '%q'")

TRANSLATE("unmatched '%c' in format")

TRANSLATE("unmatched '%c' in format")

TRANSLATE("unreadable attribute")

TRANSLATE("unreadable attribute")

TRANSLATE("unreadable attribute")

TRANSLATE("unsupported format character '%c' (0x%x) at index %d")

TRANSLATE("unsupported type for %q: '%s'")

TRANSLATE("unsupported types for %q: '%q', '%q'")

TRANSLATE("usecols is too high")

TRANSLATE("value must fit in %d byte(s)")

TRANSLATE("value must fit in %d byte(s)")

TRANSLATE("wrong axis index")

TRANSLATE("wrong axis index")

TRANSLATE("wrong axis specified")

TRANSLATE("wrong dtype")

TRANSLATE("wrong index type")

TRANSLATE("wrong input type")

TRANSLATE("wrong input type")

TRANSLATE("wrong input type")

TRANSLATE("wrong input type")

TRANSLATE("wrong input type")

TRANSLATE("wrong input type")

TRANSLATE("wrong input type")

TRANSLATE("wrong length of condition array")

TRANSLATE("wrong length of index array")

TRANSLATE("wrong number of arguments")

TRANSLATE("wrong number of arguments")

TRANSLATE("wrong number of arguments")

TRANSLATE("wrong output type")

TRANSLATE("wrong output type")

TRANSLATE("zi must be an ndarray")

TRANSLATE("zi must be of float type")

TRANSLATE("zi must be of shape (n_section, 2)")
