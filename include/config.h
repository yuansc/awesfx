/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.in by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* default SoundFont path */
#define DEFAULT_SF_PATH "/usr/share/sounds/sf2:/usr/share/sfbank:/usr/local/lib/sfbank"

/* default volume (in percent) */
#define DEFAULT_VOLUME 70

/* default attenuation sense (-a) */
#define DEF_ATTEN_SENSE 10

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `asound' library (-lasound). */
#define HAVE_LIBASOUND 1

/* Define to 1 if you have the `atopology' library (-latopology). */
/* #undef HAVE_LIBATOPOLOGY */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "awesfx"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "tiwai@suse.de"

/* Define to the full name of this package. */
#define PACKAGE_NAME "awesfx"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "awesfx 0.5.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "awesfx"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.5.2"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.5.2"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif
