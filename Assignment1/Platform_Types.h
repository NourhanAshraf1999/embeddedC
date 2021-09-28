/*
 * Platform_Types.h
 *
 *  Created on: Sep 28, 2021
 *      Author: NourhanAshraf
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
/**************NeededMacros***************/
/****CPUTypes****/
#define CPU_TYPE_8			 8
#define CPU_TYPE_16			16
#define CPU_TYPE_32			32
#define CPU_TYPE_64			64
/***************/

/**CPUBitOrder**/
#define MSB_FIRST			 0
#define LSB_FIRST			 1
/***************/

/*CPUByteOrder*/
#define HIGH_BYTE_FIRST   	 0
#define LOW_BYTE_FIRST     	 1
/*************/
#ifndef FALSE
#define FALSE                 0
#endif

#ifndef TRUE
#define TRUE                  1
#endif

/****************************************/

/**************UnsignedGroup***************/
typedef unsigned char      boolean;
typedef unsigned char      uint8;
typedef unsigned short     uint16;
typedef unsigned int       uint32;
typedef unsigned long long uint64;
typedef unsigned char	   uint8_least;
typedef unsigned short	   uint16_least;
typedef unsigned long	   uint32_least;
/******************************************/

/**************SignedGroup***************/
typedef signed char        sint8;
typedef signed short       sint16;
typedef signed int         sint32;
typedef signed long long   sint64;
typedef signed char		   sint8_least;
typedef signed short	   sint16_least;
typedef signed long		   sint32_least;
/****************************************/

/**************Decimals***************/
typedef float              float32;
typedef double             float64;
/****************************************/



#endif /* PLATFORM_TYPES_H_ */
