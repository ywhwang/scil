#ifndef HAVE_TYPES_H
#define HAVE_TYPES_H

typedef signed char   sint8;
typedef unsigned char uint8;

#if defined X86_32
    typedef signed short       sint16;
    typedef unsigned short     uint16;
    typedef signed int         sint32;
    typedef unsigned int       uint32;
    typedef signed long long   sint64;
    typedef unsigned long long uint64;
    typedef unsigned long      ulint32;
    #define M32
    #define NUMERAL ulint32
#endif

#if defined X86_64
    typedef signed short   sint16;
    typedef unsigned short uint16;
    typedef signed int     sint32;
    typedef unsigned int   uint32;
    typedef signed long    sint64;
    typedef unsigned long  uint64;
    #define M64
    #define NUMERAL uint64
#endif

typedef unsigned int bool;
#define TOSTRING(x)  (#x)

#endif
