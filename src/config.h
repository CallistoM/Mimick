#ifndef CONFIG_H_IN_
# define CONFIG_H_IN_

#define MMK_ARCH "x86_64"
#define MMK_BITS 64
#define MMK_MANGLING none

/* #undef MMK_ARCH_x86 */
#define MMK_ARCH_x86_64 1
/* #undef MMK_ARCH_ARM */
/* #undef MMK_ARCH_ARM64 */

/* #undef MMK_EXE_FMT_ELF */
#define MMK_EXE_FMT_PE 1
/* #undef MMK_EXE_FMT_MACH_O */

/* #undef HAVE__R_DEBUG */
/* #undef HAVE__DYNAMIC */
/* #undef HAVE_ELF_AUXV_T */
/* #undef HAVE_ELF_AUXINFO */
/* #undef HAVE_MMAP */
/* #undef HAVE_MMAP_MAP_ANONYMOUS */
/* #undef HAVE_MMAP_MAP_ANON */
#define HAVE___STDIO_COMMON_VFPRINTF 1

#endif /* !CONFIG_H_IN_ */
