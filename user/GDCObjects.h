/*
 * GDCObjects.h
 *
 *  Created on: 2017年10月24日
 *      Author: wangpingan
 */

#ifndef USER_GDCOBJECTS_H_
#define USER_GDCOBJECTS_H_


#include "objdef.h"


#define PROTO extern

//GDC.V0.05 参数表 在0x2000的基础上 + 参数索引  索引以16进制表示，包含所有的参数，报警参数暂未记录


/******************************************************************************
*                    Object 0x2000 : P0
******************************************************************************/
/**
* \addtogroup 0x2000 0x2000 | P0
* @{
* \brief Object 0x2000 (P0) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2000 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2000[] = "P0\000\377";

/**
* \brief Object variable
*/
PROTO UINT32 P00x2000
= 0x00000000
;
/** @}*/



/******************************************************************************
*                    Object 0x2001 : P1
******************************************************************************/
/**
* \addtogroup 0x2001 0x2001 | P1
* @{
* \brief Object 0x2001 (P1) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2001 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2001[] = "P1\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P10x2001

= 0x00000000
;
/** @}*/



/******************************************************************************
*                    Object 0x2002 : P2
******************************************************************************/
/**
* \addtogroup 0x2002 0x2002 | P2
* @{
* \brief Object 0x2002 (P2) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2002 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2002[] = "P2\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P20x2002

= 0x00000000
;
/** @}*/



/******************************************************************************
*                    Object 0x2003 : P3
******************************************************************************/
/**
* \addtogroup 0x2003 0x2003 | P3
* @{
* \brief Object 0x2003 (P3) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2003 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2003[] = "P3\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P30x2003

= 0x00000000
;
/** @}*/



/******************************************************************************
*                    Object 0x2004 : P4
******************************************************************************/
/**
* \addtogroup 0x2004 0x2004 | P4
* @{
* \brief Object 0x2004 (P4) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2004 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2004[] = "P4\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P40x2004

= 0x00000000
;
/** @}*/



/******************************************************************************
*                    Object 0x2005 : P5
******************************************************************************/
/**
* \addtogroup 0x2005 0x2005 | P5
* @{
* \brief Object 0x2005 (P5) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2005 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2005[] = "P5\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P50x2005

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2006 : P6
******************************************************************************/
/**
* \addtogroup 0x2006 0x2006 | P6
* @{
* \brief Object 0x2006 (P6) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2006 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2006[] = "P6\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P60x2006

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2007 : P7
******************************************************************************/
/**
* \addtogroup 0x2007 0x2007 | P7
* @{
* \brief Object 0x2007 (P7) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2007 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2007[] = "P7\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P70x2007

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2008 : P8
******************************************************************************/
/**
* \addtogroup 0x2008 0x2008 | P8
* @{
* \brief Object 0x2008 (P8) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2008 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2008[] = "P8\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P80x2008

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2009 : P9
******************************************************************************/
/**
* \addtogroup 0x2009 0x2009 | P9
* @{
* \brief Object 0x2009 (P9) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2009 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2009[] = "P9\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P90x2009

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x200A : P10
******************************************************************************/
/**
* \addtogroup 0x200A 0x200A | P10
* @{
* \brief Object 0x200A (P10) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x200A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x200A[] = "P10\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P100x200A

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x200B : P11
******************************************************************************/
/**
* \addtogroup 0x200B 0x200B | P11
* @{
* \brief Object 0x200B (P11) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x200B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x200B[] = "P11\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P110x200B

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x200C : P12
******************************************************************************/
/**
* \addtogroup 0x200C 0x200C | P12
* @{
* \brief Object 0x200C (P12) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x200C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x200C[] = "P12\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P120x200C

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x200D : P13
******************************************************************************/
/**
* \addtogroup 0x200D 0x200D | P13
* @{
* \brief Object 0x200D (P13) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x200D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x200D[] = "P13\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P130x200D

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x200E : P14
******************************************************************************/
/**
* \addtogroup 0x200E 0x200E | P14
* @{
* \brief Object 0x200E (P14) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x200E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x200E[] = "P14\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P140x200E

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x200F : P15
******************************************************************************/
/**
* \addtogroup 0x200F 0x200F | P15
* @{
* \brief Object 0x200F (P15) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x200F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x200F[] = "P15\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P150x200F

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2010 : P16
******************************************************************************/
/**
* \addtogroup 0x2010 0x2010 | P16
* @{
* \brief Object 0x2010 (P16) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2010 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2010[] = "P16\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P160x2010

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2011 : P17
******************************************************************************/
/**
* \addtogroup 0x2011 0x2011 | P17
* @{
* \brief Object 0x2011 (P17) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2011 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2011[] = "P17\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P170x2011

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2012 : P18
******************************************************************************/
/**
* \addtogroup 0x2012 0x2012 | P18
* @{
* \brief Object 0x2012 (P18) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2012 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2012[] = "P18\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P180x2012

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2013 : P19
******************************************************************************/
/**
* \addtogroup 0x2013 0x2013 | P19
* @{
* \brief Object 0x2013 (P19) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2013 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2013[] = "P19\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P190x2013

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2014 : P20
******************************************************************************/
/**
* \addtogroup 0x2014 0x2014 | P20
* @{
* \brief Object 0x2014 (P20) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2014 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2014[] = "P20\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P200x2014

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2015 : P21
******************************************************************************/
/**
* \addtogroup 0x2015 0x2015 | P21
* @{
* \brief Object 0x2015 (P21) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2015 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2015[] = "P21\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P210x2015

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2016 : P22
******************************************************************************/
/**
* \addtogroup 0x2016 0x2016 | P22
* @{
* \brief Object 0x2016 (P22) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2016 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2016[] = "P22\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P220x2016

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2017 : P23
******************************************************************************/
/**
* \addtogroup 0x2017 0x2017 | P23
* @{
* \brief Object 0x2017 (P23) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2017 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2017[] = "P23\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P230x2017

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2018 : P24
******************************************************************************/
/**
* \addtogroup 0x2018 0x2018 | P24
* @{
* \brief Object 0x2018 (P24) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2018 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2018[] = "P24\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P240x2018
= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2019 : P25
******************************************************************************/
/**
* \addtogroup 0x2019 0x2019 | P25
* @{
* \brief Object 0x2019 (P25) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2019 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2019[] = "P25\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P250x2019

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x201A : P26
******************************************************************************/
/**
* \addtogroup 0x201A 0x201A | P26
* @{
* \brief Object 0x201A (P26) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x201A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x201A[] = "P26\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P260x201A

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x201B : P27
******************************************************************************/
/**
* \addtogroup 0x201B 0x201B | P27
* @{
* \brief Object 0x201B (P27) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x201B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x201B[] = "P27\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P270x201B

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x201C : P28
******************************************************************************/
/**
* \addtogroup 0x201C 0x201C | P28
* @{
* \brief Object 0x201C (P28) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x201C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x201C[] = "P28\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P280x201C

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x201D : P29
******************************************************************************/
/**
* \addtogroup 0x201D 0x201D | P29
* @{
* \brief Object 0x201D (P29) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x201D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x201D[] = "P29\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P290x201D

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x201E : P30
******************************************************************************/
/**
* \addtogroup 0x201E 0x201E | P30
* @{
* \brief Object 0x201E (P30) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x201E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x201E[] = "P30\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P300x201E

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x201F : P31
******************************************************************************/
/**
* \addtogroup 0x201F 0x201F | P31
* @{
* \brief Object 0x201F (P31) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x201F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x201F[] = "P31\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P310x201F

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2020 : P32
******************************************************************************/
/**
* \addtogroup 0x2020 0x2020 | P32
* @{
* \brief Object 0x2020 (P32) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2020 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2020[] = "P32\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P320x2020

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2021 : P33
******************************************************************************/
/**
* \addtogroup 0x2021 0x2021 | P33
* @{
* \brief Object 0x2021 (P33) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2021 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2021[] = "P33\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P330x2021

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2022 : P34
******************************************************************************/
/**
* \addtogroup 0x2022 0x2022 | P34
* @{
* \brief Object 0x2022 (P34) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2022 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2022[] = "P34\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P340x2022

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2023 : P35
******************************************************************************/
/**
* \addtogroup 0x2023 0x2023 | P35
* @{
* \brief Object 0x2023 (P35) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2023 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2023[] = "P35\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P350x2023

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2024 : P36
******************************************************************************/
/**
* \addtogroup 0x2024 0x2024 | P36
* @{
* \brief Object 0x2024 (P36) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2024 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2024[] = "P36\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P360x2024

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2026 : P38
******************************************************************************/
/**
* \addtogroup 0x2026 0x2026 | P38
* @{
* \brief Object 0x2026 (P38) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2026 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2026[] = "P38\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P380x2026

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2027 : P39
******************************************************************************/
/**
* \addtogroup 0x2027 0x2027 | P39
* @{
* \brief Object 0x2027 (P39) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2027 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2027[] = "P39\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P390x2027

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2028 : P40
******************************************************************************/
/**
* \addtogroup 0x2028 0x2028 | P40
* @{
* \brief Object 0x2028 (P40) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2028 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2028[] = "P40\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P400x2028

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2029 : P41
******************************************************************************/
/**
* \addtogroup 0x2029 0x2029 | P41
* @{
* \brief Object 0x2029 (P41) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2029 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2029[] = "P41\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P410x2029

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x202A : P42
******************************************************************************/
/**
* \addtogroup 0x202A 0x202A | P42
* @{
* \brief Object 0x202A (P42) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x202A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x202A[] = "P42\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P420x202A

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x202B : P43
******************************************************************************/
/**
* \addtogroup 0x202B 0x202B | P43
* @{
* \brief Object 0x202B (P43) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x202B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x202B[] = "P43\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P430x202B

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x202C : P44
******************************************************************************/
/**
* \addtogroup 0x202C 0x202C | P44
* @{
* \brief Object 0x202C (P44) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x202C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x202C[] = "P44\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P440x202C

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x202D : P45
******************************************************************************/
/**
* \addtogroup 0x202D 0x202D | P45
* @{
* \brief Object 0x202D (P45) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x202D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x202D[] = "P45\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P450x202D

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x202E : P46
******************************************************************************/
/**
* \addtogroup 0x202E 0x202E | P46
* @{
* \brief Object 0x202E (P46) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x202E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x202E[] = "P46\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P460x202E

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x202F : P47
******************************************************************************/
/**
* \addtogroup 0x202F 0x202F | P47
* @{
* \brief Object 0x202F (P47) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x202F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x202F[] = "P47\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P470x202F

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2030 : P48
******************************************************************************/
/**
* \addtogroup 0x2030 0x2030 | P48
* @{
* \brief Object 0x2030 (P48) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2030 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2030[] = "P48\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P480x2030

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2031 : P49
******************************************************************************/
/**
* \addtogroup 0x2031 0x2031 | P49
* @{
* \brief Object 0x2031 (P49) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2031 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2031[] = "P49\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P490x2031

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2032 : P50
******************************************************************************/
/**
* \addtogroup 0x2032 0x2032 | P50
* @{
* \brief Object 0x2032 (P50) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2032 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2032[] = "P50\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P500x2032

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2033 : P51
******************************************************************************/
/**
* \addtogroup 0x2033 0x2033 | P51
* @{
* \brief Object 0x2033 (P51) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2033 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2033[] = "P51\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P510x2033

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2034 : P52
******************************************************************************/
/**
* \addtogroup 0x2034 0x2034 | P52
* @{
* \brief Object 0x2034 (P52) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2034 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2034[] = "P52\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P520x2034

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2035 : P53
******************************************************************************/
/**
* \addtogroup 0x2035 0x2035 | P53
* @{
* \brief Object 0x2035 (P53) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2035 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2035[] = "P53\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P530x2035

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2036 : P54
******************************************************************************/
/**
* \addtogroup 0x2036 0x2036 | P54
* @{
* \brief Object 0x2036 (P54) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2036 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2036[] = "P54\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P540x2036

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2037 : P55
******************************************************************************/
/**
* \addtogroup 0x2037 0x2037 | P55
* @{
* \brief Object 0x2037 (P55) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2037 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2037[] = "P55\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P550x2037

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2038 : P56
******************************************************************************/
/**
* \addtogroup 0x2038 0x2038 | P56
* @{
* \brief Object 0x2038 (P56) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2038 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2038[] = "P56\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P560x2038

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2039 : P57
******************************************************************************/
/**
* \addtogroup 0x2039 0x2039 | P57
* @{
* \brief Object 0x2039 (P57) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2039 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2039[] = "P57\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P570x2039

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x203A : P58
******************************************************************************/
/**
* \addtogroup 0x203A 0x203A | P58
* @{
* \brief Object 0x203A (P58) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x203A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x203A[] = "P58\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P580x203A

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x203B : P59
******************************************************************************/
/**
* \addtogroup 0x203B 0x203B | P59
* @{
* \brief Object 0x203B (P59) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x203B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x203B[] = "P59\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P590x203B

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x203D : P61
******************************************************************************/
/**
* \addtogroup 0x203D 0x203D | P61
* @{
* \brief Object 0x203D (P61) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x203D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x203D[] = "P61\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P610x203D

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2046 : P70
******************************************************************************/
/**
* \addtogroup 0x2046 0x2046 | P70
* @{
* \brief Object 0x2046 (P70) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2046 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2046[] = "P70\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P700x2046

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2050 : P80
******************************************************************************/
/**
* \addtogroup 0x2050 0x2050 | P80
* @{
* \brief Object 0x2050 (P80) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2050 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2050[] = "P80\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P800x2050

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2051 : P81
******************************************************************************/
/**
* \addtogroup 0x2051 0x2051 | P81
* @{
* \brief Object 0x2051 (P81) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2051 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2051[] = "P81\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P810x2051

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2053 : P83
******************************************************************************/
/**
* \addtogroup 0x2053 0x2053 | P83
* @{
* \brief Object 0x2053 (P83) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2053 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2053[] = "P83\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P830x2053

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2054 : P84
******************************************************************************/
/**
* \addtogroup 0x2054 0x2054 | P84
* @{
* \brief Object 0x2054 (P84) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2054 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2054[] = "P84\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P840x2054

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2059 : P89
******************************************************************************/
/**
* \addtogroup 0x2059 0x2059 | P89
* @{
* \brief Object 0x2059 (P89) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2059 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2059[] = "P89\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P890x2059

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x205A : P90
******************************************************************************/
/**
* \addtogroup 0x205A 0x205A | P90
* @{
* \brief Object 0x205A (P90) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x205A = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x205A[] = "P90\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P900x205A

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x205B : P91
******************************************************************************/
/**
* \addtogroup 0x205B 0x205B | P91
* @{
* \brief Object 0x205B (P91) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x205B = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x205B[] = "P91\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P910x205B

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x205C : P92
******************************************************************************/
/**
* \addtogroup 0x205C 0x205C | P92
* @{
* \brief Object 0x205C (P92) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x205C = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x205C[] = "P92\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P920x205C

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x205D : P93
******************************************************************************/
/**
* \addtogroup 0x205D 0x205D | P93
* @{
* \brief Object 0x205D (P93) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x205D = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x205D[] = "P93\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P930x205D

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x205E : P94
******************************************************************************/
/**
* \addtogroup 0x205E 0x205E | P94
* @{
* \brief Object 0x205E (P94) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x205E = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x205E[] = "P94\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P940x205E

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x205F : P95
******************************************************************************/
/**
* \addtogroup 0x205F 0x205F | P95
* @{
* \brief Object 0x205F (P95) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x205F = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x205F[] = "P95\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P950x205F

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2061 : P97
******************************************************************************/
/**
* \addtogroup 0x2061 0x2061 | P97
* @{
* \brief Object 0x2061 (P97) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2061 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2061[] = "P97\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P970x2061

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2062 : P98
******************************************************************************/
/**
* \addtogroup 0x2062 0x2062 | P98
* @{
* \brief Object 0x2062 (P98) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2062 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2062[] = "P98\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P980x2062

= 0x00000000

;
/** @}*/



/******************************************************************************
*                    Object 0x2063 : P99
******************************************************************************/
/**
* \addtogroup 0x2063 0x2063 | P99
* @{
* \brief Object 0x2063 (P99) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2063 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2063[] = "P99\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P990x2063;
/** @}*/



/******************************************************************************
*                    Object 0x2064 : P100
******************************************************************************/
/**
* \addtogroup 0x2064 0x2064 | P100
* @{
* \brief Object 0x2064 (P100) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2064 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2064[] = "P100\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1000x2064;
/** @}*/



/******************************************************************************
*                    Object 0x2065 : P101
******************************************************************************/
/**
* \addtogroup 0x2065 0x2065 | P101
* @{
* \brief Object 0x2065 (P101) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2065 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2065[] = "P101\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1010x2065;
/** @}*/



/******************************************************************************
*                    Object 0x2066 : P102
******************************************************************************/
/**
* \addtogroup 0x2066 0x2066 | P102
* @{
* \brief Object 0x2066 (P102) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2066 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2066[] = "P102\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1020x2066;
/** @}*/



/******************************************************************************
*                    Object 0x2067 : P103
******************************************************************************/
/**
* \addtogroup 0x2067 0x2067 | P103
* @{
* \brief Object 0x2067 (P103) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2067 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2067[] = "P103\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1030x2067;
/** @}*/



/******************************************************************************
*                    Object 0x2068 : P104
******************************************************************************/
/**
* \addtogroup 0x2068 0x2068 | P104
* @{
* \brief Object 0x2068 (P104) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2068 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2068[] = "P104\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1040x2068;
/** @}*/



/******************************************************************************
*                    Object 0x2069 : P105
******************************************************************************/
/**
* \addtogroup 0x2069 0x2069 | P105
* @{
* \brief Object 0x2069 (P105) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2069 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2069[] = "P105\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1050x2069;
/** @}*/



/******************************************************************************
*                    Object 0x206A : P106
******************************************************************************/
/**
* \addtogroup 0x206A 0x206A | P106
* @{
* \brief Object 0x206A (P106) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x206A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x206A[] = "P106\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1060x206A;
/** @}*/



/******************************************************************************
*                    Object 0x206C : P108
******************************************************************************/
/**
* \addtogroup 0x206C 0x206C | P108
* @{
* \brief Object 0x206C (P108) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x206C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x206C[] = "P108\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1080x206C;
/** @}*/



/******************************************************************************
*                    Object 0x206D : P109
******************************************************************************/
/**
* \addtogroup 0x206D 0x206D | P109
* @{
* \brief Object 0x206D (P109) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x206D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x206D[] = "P109\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1090x206D;
/** @}*/



/******************************************************************************
*                    Object 0x206E : P110
******************************************************************************/
/**
* \addtogroup 0x206E 0x206E | P110
* @{
* \brief Object 0x206E (P110) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x206E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x206E[] = "P110\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1100x206E;
/** @}*/



/******************************************************************************
*                    Object 0x206F : P111
******************************************************************************/
/**
* \addtogroup 0x206F 0x206F | P111
* @{
* \brief Object 0x206F (P111) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x206F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x206F[] = "P111\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1110x206F;
/** @}*/



/******************************************************************************
*                    Object 0x2070 : P112
******************************************************************************/
/**
* \addtogroup 0x2070 0x2070 | P112
* @{
* \brief Object 0x2070 (P112) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2070 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2070[] = "P112\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1120x2070;
/** @}*/



/******************************************************************************
*                    Object 0x2083 : P131
******************************************************************************/
/**
* \addtogroup 0x2083 0x2083 | P131
* @{
* \brief Object 0x2083 (P131) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2083 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2083[] = "P131\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1310x2083;
/** @}*/



/******************************************************************************
*                    Object 0x2084 : P132
******************************************************************************/
/**
* \addtogroup 0x2084 0x2084 | P132
* @{
* \brief Object 0x2084 (P132) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2084 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2084[] = "P132\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1320x2084;
/** @}*/



/******************************************************************************
*                    Object 0x208C : P140
******************************************************************************/
/**
* \addtogroup 0x208C 0x208C | P140
* @{
* \brief Object 0x208C (P140) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x208C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x208C[] = "P140\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1400x208C;
/** @}*/



/******************************************************************************
*                    Object 0x2091 : P145
******************************************************************************/
/**
* \addtogroup 0x2091 0x2091 | P145
* @{
* \brief Object 0x2091 (P145) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2091 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2091[] = "P145\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1450x2091;
/** @}*/



/******************************************************************************
*                    Object 0x2092 : P146
******************************************************************************/
/**
* \addtogroup 0x2092 0x2092 | P146
* @{
* \brief Object 0x2092 (P146) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2092 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2092[] = "P146\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P1460x2092;
/** @}*/



/******************************************************************************
*                    Object 0x2093 : P147
******************************************************************************/
/**
* \addtogroup 0x2093 0x2093 | P147
* @{
* \brief Object 0x2093 (P147) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2093 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2093[] = "P147\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P1470x2093;
/** @}*/



/******************************************************************************
*                    Object 0x2094 : P148
******************************************************************************/
/**
* \addtogroup 0x2094 0x2094 | P148
* @{
* \brief Object 0x2094 (P148) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2094 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2094[] = "P148\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1480x2094;
/** @}*/



/******************************************************************************
*                    Object 0x2095 : P149
******************************************************************************/
/**
* \addtogroup 0x2095 0x2095 | P149
* @{
* \brief Object 0x2095 (P149) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2095 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2095[] = "P149\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1490x2095;
/** @}*/



/******************************************************************************
*                    Object 0x2096 : P150
******************************************************************************/
/**
* \addtogroup 0x2096 0x2096 | P150
* @{
* \brief Object 0x2096 (P150) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2096 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2096[] = "P150\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1500x2096;
/** @}*/



/******************************************************************************
*                    Object 0x2097 : P151
******************************************************************************/
/**
* \addtogroup 0x2097 0x2097 | P151
* @{
* \brief Object 0x2097 (P151) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2097 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2097[] = "P151\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1510x2097;
/** @}*/



/******************************************************************************
*                    Object 0x2098 : P152
******************************************************************************/
/**
* \addtogroup 0x2098 0x2098 | P152
* @{
* \brief Object 0x2098 (P152) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2098 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2098[] = "P152\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1520x2098;
/** @}*/



/******************************************************************************
*                    Object 0x2099 : P153
******************************************************************************/
/**
* \addtogroup 0x2099 0x2099 | P153
* @{
* \brief Object 0x2099 (P153) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2099 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2099[] = "P153\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1530x2099;
/** @}*/



/******************************************************************************
*                    Object 0x209A : P154
******************************************************************************/
/**
* \addtogroup 0x209A 0x209A | P154
* @{
* \brief Object 0x209A (P154) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x209A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x209A[] = "P154\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1540x209A;
/** @}*/



/******************************************************************************
*                    Object 0x209B : P155
******************************************************************************/
/**
* \addtogroup 0x209B 0x209B | P155
* @{
* \brief Object 0x209B (P155) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x209B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x209B[] = "P155\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1550x209B;
/** @}*/



/******************************************************************************
*                    Object 0x209C : P156
******************************************************************************/
/**
* \addtogroup 0x209C 0x209C | P156
* @{
* \brief Object 0x209C (P156) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x209C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x209C[] = "P156\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1560x209C;
/** @}*/



/******************************************************************************
*                    Object 0x209D : P157
******************************************************************************/
/**
* \addtogroup 0x209D 0x209D | P157
* @{
* \brief Object 0x209D (P157) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x209D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x209D[] = "P157\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1570x209D;
/** @}*/



/******************************************************************************
*                    Object 0x209E : P158
******************************************************************************/
/**
* \addtogroup 0x209E 0x209E | P158
* @{
* \brief Object 0x209E (P158) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x209E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x209E[] = "P158\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1580x209E;
/** @}*/



/******************************************************************************
*                    Object 0x209F : P159
******************************************************************************/
/**
* \addtogroup 0x209F 0x209F | P159
* @{
* \brief Object 0x209F (P159) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x209F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x209F[] = "P159\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1590x209F;
/** @}*/



/******************************************************************************
*                    Object 0x20A0 : P160
******************************************************************************/
/**
* \addtogroup 0x20A0 0x20A0 | P160
* @{
* \brief Object 0x20A0 (P160) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20A0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20A0[] = "P160\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1600x20A0;
/** @}*/



/******************************************************************************
*                    Object 0x20A5 : P165
******************************************************************************/
/**
* \addtogroup 0x20A5 0x20A5 | P165
* @{
* \brief Object 0x20A5 (P165) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20A5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20A5[] = "P165\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1650x20A5;
/** @}*/



/******************************************************************************
*                    Object 0x20A6 : P166
******************************************************************************/
/**
* \addtogroup 0x20A6 0x20A6 | P166
* @{
* \brief Object 0x20A6 (P166) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20A6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20A6[] = "P166\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1660x20A6;
/** @}*/



/******************************************************************************
*                    Object 0x20A7 : P167
******************************************************************************/
/**
* \addtogroup 0x20A7 0x20A7 | P167
* @{
* \brief Object 0x20A7 (P167) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20A7 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20A7[] = "P167\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P1670x20A7;
/** @}*/



/******************************************************************************
*                    Object 0x20A9 : P169
******************************************************************************/
/**
* \addtogroup 0x20A9 0x20A9 | P169
* @{
* \brief Object 0x20A9 (P169) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20A9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20A9[] = "P169\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1690x20A9;
/** @}*/



/******************************************************************************
*                    Object 0x20AB : P171
******************************************************************************/
/**
* \addtogroup 0x20AB 0x20AB | P171
* @{
* \brief Object 0x20AB (P171) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20AB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20AB[] = "P171\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1710x20AB;
/** @}*/



/******************************************************************************
*                    Object 0x20AC : P172
******************************************************************************/
/**
* \addtogroup 0x20AC 0x20AC | P172
* @{
* \brief Object 0x20AC (P172) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20AC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20AC[] = "P172\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1720x20AC;
/** @}*/



/******************************************************************************
*                    Object 0x20AD : P173
******************************************************************************/
/**
* \addtogroup 0x20AD 0x20AD | P173
* @{
* \brief Object 0x20AD (P173) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20AD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20AD[] = "P173\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1730x20AD;
/** @}*/



/******************************************************************************
*                    Object 0x20AE : P174
******************************************************************************/
/**
* \addtogroup 0x20AE 0x20AE | P174
* @{
* \brief Object 0x20AE (P174) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20AE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20AE[] = "P174\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1740x20AE;
/** @}*/



/******************************************************************************
*                    Object 0x20AF : P175
******************************************************************************/
/**
* \addtogroup 0x20AF 0x20AF | P175
* @{
* \brief Object 0x20AF (P175) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20AF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20AF[] = "P175\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1750x20AF;
/** @}*/



/******************************************************************************
*                    Object 0x20B0 : P176
******************************************************************************/
/**
* \addtogroup 0x20B0 0x20B0 | P176
* @{
* \brief Object 0x20B0 (P176) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20B0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20B0[] = "P176\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1760x20B0;
/** @}*/



/******************************************************************************
*                    Object 0x20B4 : P180
******************************************************************************/
/**
* \addtogroup 0x20B4 0x20B4 | P180
* @{
* \brief Object 0x20B4 (P180) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20B4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20B4[] = "P180\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1800x20B4;
/** @}*/



/******************************************************************************
*                    Object 0x20B5 : P181
******************************************************************************/
/**
* \addtogroup 0x20B5 0x20B5 | P181
* @{
* \brief Object 0x20B5 (P181) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20B5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20B5[] = "P181\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1810x20B5;
/** @}*/



/******************************************************************************
*                    Object 0x20B6 : P182
******************************************************************************/
/**
* \addtogroup 0x20B6 0x20B6 | P182
* @{
* \brief Object 0x20B6 (P182) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20B6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20B6[] = "P182\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1820x20B6;
/** @}*/



/******************************************************************************
*                    Object 0x20B7 : P183
******************************************************************************/
/**
* \addtogroup 0x20B7 0x20B7 | P183
* @{
* \brief Object 0x20B7 (P183) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20B7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20B7[] = "P183\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1830x20B7;
/** @}*/



/******************************************************************************
*                    Object 0x20B8 : P184
******************************************************************************/
/**
* \addtogroup 0x20B8 0x20B8 | P184
* @{
* \brief Object 0x20B8 (P184) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20B8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20B8[] = "P184\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1840x20B8;
/** @}*/



/******************************************************************************
*                    Object 0x20B9 : P185
******************************************************************************/
/**
* \addtogroup 0x20B9 0x20B9 | P185
* @{
* \brief Object 0x20B9 (P185) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20B9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20B9[] = "P185\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1850x20B9;
/** @}*/



/******************************************************************************
*                    Object 0x20BA : P186
******************************************************************************/
/**
* \addtogroup 0x20BA 0x20BA | P186
* @{
* \brief Object 0x20BA (P186) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20BA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20BA[] = "P186\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1860x20BA;
/** @}*/



/******************************************************************************
*                    Object 0x20BB : P187
******************************************************************************/
/**
* \addtogroup 0x20BB 0x20BB | P187
* @{
* \brief Object 0x20BB (P187) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20BB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20BB[] = "P187\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1870x20BB;
/** @}*/



/******************************************************************************
*                    Object 0x20BE : P190
******************************************************************************/
/**
* \addtogroup 0x20BE 0x20BE | P190
* @{
* \brief Object 0x20BE (P190) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20BE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20BE[] = "P190\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1900x20BE;
/** @}*/



/******************************************************************************
*                    Object 0x20BF : P191
******************************************************************************/
/**
* \addtogroup 0x20BF 0x20BF | P191
* @{
* \brief Object 0x20BF (P191) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20BF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20BF[] = "P191\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1910x20BF;
/** @}*/



/******************************************************************************
*                    Object 0x20C0 : P192
******************************************************************************/
/**
* \addtogroup 0x20C0 0x20C0 | P192
* @{
* \brief Object 0x20C0 (P192) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20C0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20C0[] = "P192\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1920x20C0;
/** @}*/



/******************************************************************************
*                    Object 0x20C1 : P193
******************************************************************************/
/**
* \addtogroup 0x20C1 0x20C1 | P193
* @{
* \brief Object 0x20C1 (P193) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20C1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20C1[] = "P193\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1930x20C1;
/** @}*/



/******************************************************************************
*                    Object 0x20C2 : P194
******************************************************************************/
/**
* \addtogroup 0x20C2 0x20C2 | P194
* @{
* \brief Object 0x20C2 (P194) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20C2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20C2[] = "P194\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P1940x20C2;
/** @}*/



/******************************************************************************
*                    Object 0x20C8 : P200
******************************************************************************/
/**
* \addtogroup 0x20C8 0x20C8 | P200
* @{
* \brief Object 0x20C8 (P200) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20C8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20C8[] = "P200\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2000x20C8;
/** @}*/



/******************************************************************************
*                    Object 0x20C9 : P201
******************************************************************************/
/**
* \addtogroup 0x20C9 0x20C9 | P201
* @{
* \brief Object 0x20C9 (P201) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20C9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20C9[] = "P201\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2010x20C9;
/** @}*/



/******************************************************************************
*                    Object 0x20CA : P202
******************************************************************************/
/**
* \addtogroup 0x20CA 0x20CA | P202
* @{
* \brief Object 0x20CA (P202) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20CA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20CA[] = "P202\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2020x20CA;
/** @}*/



/******************************************************************************
*                    Object 0x20CB : P203
******************************************************************************/
/**
* \addtogroup 0x20CB 0x20CB | P203
* @{
* \brief Object 0x20CB (P203) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20CB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20CB[] = "P203\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2030x20CB;
/** @}*/



/******************************************************************************
*                    Object 0x20CC : P204
******************************************************************************/
/**
* \addtogroup 0x20CC 0x20CC | P204
* @{
* \brief Object 0x20CC (P204) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20CC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20CC[] = "P204\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2040x20CC;
/** @}*/



/******************************************************************************
*                    Object 0x20CD : P205
******************************************************************************/
/**
* \addtogroup 0x20CD 0x20CD | P205
* @{
* \brief Object 0x20CD (P205) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20CD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20CD[] = "P205\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2050x20CD;
/** @}*/



/******************************************************************************
*                    Object 0x20CE : P206
******************************************************************************/
/**
* \addtogroup 0x20CE 0x20CE | P206
* @{
* \brief Object 0x20CE (P206) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20CE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20CE[] = "P206\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2060x20CE;
/** @}*/



/******************************************************************************
*                    Object 0x20CF : P207
******************************************************************************/
/**
* \addtogroup 0x20CF 0x20CF | P207
* @{
* \brief Object 0x20CF (P207) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20CF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20CF[] = "P207\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2070x20CF;
/** @}*/



/******************************************************************************
*                    Object 0x20D0 : P208
******************************************************************************/
/**
* \addtogroup 0x20D0 0x20D0 | P208
* @{
* \brief Object 0x20D0 (P208) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20D0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20D0[] = "P208\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2080x20D0;
/** @}*/



/******************************************************************************
*                    Object 0x20D1 : P209
******************************************************************************/
/**
* \addtogroup 0x20D1 0x20D1 | P209
* @{
* \brief Object 0x20D1 (P209) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20D1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20D1[] = "P209\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2090x20D1;
/** @}*/



/******************************************************************************
*                    Object 0x20D2 : P210
******************************************************************************/
/**
* \addtogroup 0x20D2 0x20D2 | P210
* @{
* \brief Object 0x20D2 (P210) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20D2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20D2[] = "P210\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2100x20D2;
/** @}*/



/******************************************************************************
*                    Object 0x20D5 : P213
******************************************************************************/
/**
* \addtogroup 0x20D5 0x20D5 | P213
* @{
* \brief Object 0x20D5 (P213) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20D5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20D5[] = "P213\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2130x20D5;
/** @}*/



/******************************************************************************
*                    Object 0x20D7 : P215
******************************************************************************/
/**
* \addtogroup 0x20D7 0x20D7 | P215
* @{
* \brief Object 0x20D7 (P215) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20D7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20D7[] = "P215\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2150x20D7;
/** @}*/



/******************************************************************************
*                    Object 0x20D8 : P216
******************************************************************************/
/**
* \addtogroup 0x20D8 0x20D8 | P216
* @{
* \brief Object 0x20D8 (P216) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20D8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20D8[] = "P216\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2160x20D8;
/** @}*/



/******************************************************************************
*                    Object 0x20D9 : P217
******************************************************************************/
/**
* \addtogroup 0x20D9 0x20D9 | P217
* @{
* \brief Object 0x20D9 (P217) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20D9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20D9[] = "P217\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2170x20D9;
/** @}*/



/******************************************************************************
*                    Object 0x20DA : P218
******************************************************************************/
/**
* \addtogroup 0x20DA 0x20DA | P218
* @{
* \brief Object 0x20DA (P218) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20DA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20DA[] = "P218\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2180x20DA;
/** @}*/



/******************************************************************************
*                    Object 0x20DB : P219
******************************************************************************/
/**
* \addtogroup 0x20DB 0x20DB | P219
* @{
* \brief Object 0x20DB (P219) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20DB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20DB[] = "P219\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2190x20DB;
/** @}*/



/******************************************************************************
*                    Object 0x20DC : P220
******************************************************************************/
/**
* \addtogroup 0x20DC 0x20DC | P220
* @{
* \brief Object 0x20DC (P220) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20DC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20DC[] = "P220\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2200x20DC;
/** @}*/



/******************************************************************************
*                    Object 0x20DD : P221
******************************************************************************/
/**
* \addtogroup 0x20DD 0x20DD | P221
* @{
* \brief Object 0x20DD (P221) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20DD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20DD[] = "P221\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2210x20DD;
/** @}*/



/******************************************************************************
*                    Object 0x20DE : P222
******************************************************************************/
/**
* \addtogroup 0x20DE 0x20DE | P222
* @{
* \brief Object 0x20DE (P222) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20DE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20DE[] = "P222\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2220x20DE;
/** @}*/



/******************************************************************************
*                    Object 0x20DF : P223
******************************************************************************/
/**
* \addtogroup 0x20DF 0x20DF | P223
* @{
* \brief Object 0x20DF (P223) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20DF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20DF[] = "P223\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2230x20DF;
/** @}*/



/******************************************************************************
*                    Object 0x20E2 : P226
******************************************************************************/
/**
* \addtogroup 0x20E2 0x20E2 | P226
* @{
* \brief Object 0x20E2 (P226) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20E2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20E2[] = "P226\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2260x20E2;
/** @}*/



/******************************************************************************
*                    Object 0x20E3 : P227
******************************************************************************/
/**
* \addtogroup 0x20E3 0x20E3 | P227
* @{
* \brief Object 0x20E3 (P227) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20E3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20E3[] = "P227\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2270x20E3;
/** @}*/



/******************************************************************************
*                    Object 0x20E4 : P228
******************************************************************************/
/**
* \addtogroup 0x20E4 0x20E4 | P228
* @{
* \brief Object 0x20E4 (P228) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20E4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20E4[] = "P228\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2280x20E4;
/** @}*/



/******************************************************************************
*                    Object 0x20E5 : P229
******************************************************************************/
/**
* \addtogroup 0x20E5 0x20E5 | P229
* @{
* \brief Object 0x20E5 (P229) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20E5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20E5[] = "P229\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2290x20E5;
/** @}*/



/******************************************************************************
*                    Object 0x20E6 : P230
******************************************************************************/
/**
* \addtogroup 0x20E6 0x20E6 | P230
* @{
* \brief Object 0x20E6 (P230) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20E6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20E6[] = "P230\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2300x20E6;
/** @}*/



/******************************************************************************
*                    Object 0x20E8 : P232
******************************************************************************/
/**
* \addtogroup 0x20E8 0x20E8 | P232
* @{
* \brief Object 0x20E8 (P232) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20E8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20E8[] = "P232\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2320x20E8;
/** @}*/



/******************************************************************************
*                    Object 0x20E9 : P233
******************************************************************************/
/**
* \addtogroup 0x20E9 0x20E9 | P233
* @{
* \brief Object 0x20E9 (P233) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20E9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20E9[] = "P233\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2330x20E9;
/** @}*/



/******************************************************************************
*                    Object 0x20EA : P234
******************************************************************************/
/**
* \addtogroup 0x20EA 0x20EA | P234
* @{
* \brief Object 0x20EA (P234) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20EA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20EA[] = "P234\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2340x20EA;
/** @}*/



/******************************************************************************
*                    Object 0x20EB : P235
******************************************************************************/
/**
* \addtogroup 0x20EB 0x20EB | P235
* @{
* \brief Object 0x20EB (P235) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20EB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20EB[] = "P235\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2350x20EB;
/** @}*/



/******************************************************************************
*                    Object 0x20EC : P236
******************************************************************************/
/**
* \addtogroup 0x20EC 0x20EC | P236
* @{
* \brief Object 0x20EC (P236) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20EC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20EC[] = "P236\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2360x20EC;
/** @}*/



/******************************************************************************
*                    Object 0x20ED : P237
******************************************************************************/
/**
* \addtogroup 0x20ED 0x20ED | P237
* @{
* \brief Object 0x20ED (P237) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20ED = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20ED[] = "P237\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2370x20ED;
/** @}*/



/******************************************************************************
*                    Object 0x20EE : P238
******************************************************************************/
/**
* \addtogroup 0x20EE 0x20EE | P238
* @{
* \brief Object 0x20EE (P238) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20EE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20EE[] = "P238\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2380x20EE;
/** @}*/



/******************************************************************************
*                    Object 0x20EF : P239
******************************************************************************/
/**
* \addtogroup 0x20EF 0x20EF | P239
* @{
* \brief Object 0x20EF (P239) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20EF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20EF[] = "P239\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2390x20EF;
/** @}*/



/******************************************************************************
*                    Object 0x20F0 : P240
******************************************************************************/
/**
* \addtogroup 0x20F0 0x20F0 | P240
* @{
* \brief Object 0x20F0 (P240) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F0[] = "P240\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2400x20F0;
/** @}*/



/******************************************************************************
*                    Object 0x20F1 : P241
******************************************************************************/
/**
* \addtogroup 0x20F1 0x20F1 | P241
* @{
* \brief Object 0x20F1 (P241) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F1[] = "P241\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2410x20F1;
/** @}*/



/******************************************************************************
*                    Object 0x20F2 : P242
******************************************************************************/
/**
* \addtogroup 0x20F2 0x20F2 | P242
* @{
* \brief Object 0x20F2 (P242) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F2[] = "P242\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2420x20F2;
/** @}*/



/******************************************************************************
*                    Object 0x20F3 : P243
******************************************************************************/
/**
* \addtogroup 0x20F3 0x20F3 | P243
* @{
* \brief Object 0x20F3 (P243) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F3[] = "P243\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2430x20F3;
/** @}*/



/******************************************************************************
*                    Object 0x20F4 : P244
******************************************************************************/
/**
* \addtogroup 0x20F4 0x20F4 | P244
* @{
* \brief Object 0x20F4 (P244) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F4[] = "P244\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2440x20F4;
/** @}*/



/******************************************************************************
*                    Object 0x20F6 : P246
******************************************************************************/
/**
* \addtogroup 0x20F6 0x20F6 | P246
* @{
* \brief Object 0x20F6 (P246) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F6[] = "P246\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2460x20F6;
/** @}*/



/******************************************************************************
*                    Object 0x20F7 : P247
******************************************************************************/
/**
* \addtogroup 0x20F7 0x20F7 | P247
* @{
* \brief Object 0x20F7 (P247) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F7[] = "P247\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2470x20F7;
/** @}*/



/******************************************************************************
*                    Object 0x20F8 : P248
******************************************************************************/
/**
* \addtogroup 0x20F8 0x20F8 | P248
* @{
* \brief Object 0x20F8 (P248) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F8[] = "P248\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2480x20F8;
/** @}*/



/******************************************************************************
*                    Object 0x20F9 : P249
******************************************************************************/
/**
* \addtogroup 0x20F9 0x20F9 | P249
* @{
* \brief Object 0x20F9 (P249) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20F9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20F9[] = "P249\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2490x20F9;
/** @}*/



/******************************************************************************
*                    Object 0x20FA : P250
******************************************************************************/
/**
* \addtogroup 0x20FA 0x20FA | P250
* @{
* \brief Object 0x20FA (P250) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20FA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20FA[] = "P250\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2500x20FA;
/** @}*/



/******************************************************************************
*                    Object 0x20FB : P251
******************************************************************************/
/**
* \addtogroup 0x20FB 0x20FB | P251
* @{
* \brief Object 0x20FB (P251) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20FB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20FB[] = "P251\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2510x20FB;
/** @}*/



/******************************************************************************
*                    Object 0x20FC : P252
******************************************************************************/
/**
* \addtogroup 0x20FC 0x20FC | P252
* @{
* \brief Object 0x20FC (P252) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20FC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20FC[] = "P252\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2520x20FC;
/** @}*/



/******************************************************************************
*                    Object 0x20FD : P253
******************************************************************************/
/**
* \addtogroup 0x20FD 0x20FD | P253
* @{
* \brief Object 0x20FD (P253) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20FD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20FD[] = "P253\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2530x20FD;
/** @}*/



/******************************************************************************
*                    Object 0x20FE : P254
******************************************************************************/
/**
* \addtogroup 0x20FE 0x20FE | P254
* @{
* \brief Object 0x20FE (P254) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20FE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20FE[] = "P254\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2540x20FE;
/** @}*/



/******************************************************************************
*                    Object 0x20FF : P255
******************************************************************************/
/**
* \addtogroup 0x20FF 0x20FF | P255
* @{
* \brief Object 0x20FF (P255) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x20FF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x20FF[] = "P255\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2550x20FF;
/** @}*/



/******************************************************************************
*                    Object 0x2102 : P258
******************************************************************************/
/**
* \addtogroup 0x2102 0x2102 | P258
* @{
* \brief Object 0x2102 (P258) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2102 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2102[] = "P258\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2580x2102;
/** @}*/



/******************************************************************************
*                    Object 0x2103 : P259
******************************************************************************/
/**
* \addtogroup 0x2103 0x2103 | P259
* @{
* \brief Object 0x2103 (P259) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2103 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2103[] = "P259\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2590x2103;
/** @}*/



/******************************************************************************
*                    Object 0x2104 : P260
******************************************************************************/
/**
* \addtogroup 0x2104 0x2104 | P260
* @{
* \brief Object 0x2104 (P260) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2104 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2104[] = "P260\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2600x2104;
/** @}*/



/******************************************************************************
*                    Object 0x2105 : P261
******************************************************************************/
/**
* \addtogroup 0x2105 0x2105 | P261
* @{
* \brief Object 0x2105 (P261) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2105 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2105[] = "P261\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2610x2105;
/** @}*/



/******************************************************************************
*                    Object 0x2106 : P262
******************************************************************************/
/**
* \addtogroup 0x2106 0x2106 | P262
* @{
* \brief Object 0x2106 (P262) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2106 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2106[] = "P262\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2620x2106;
/** @}*/



/******************************************************************************
*                    Object 0x2107 : P263
******************************************************************************/
/**
* \addtogroup 0x2107 0x2107 | P263
* @{
* \brief Object 0x2107 (P263) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2107 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2107[] = "P263\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2630x2107;
/** @}*/



/******************************************************************************
*                    Object 0x2108 : P264
******************************************************************************/
/**
* \addtogroup 0x2108 0x2108 | P264
* @{
* \brief Object 0x2108 (P264) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2108 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2108[] = "P264\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2640x2108;
/** @}*/



/******************************************************************************
*                    Object 0x2109 : P265
******************************************************************************/
/**
* \addtogroup 0x2109 0x2109 | P265
* @{
* \brief Object 0x2109 (P265) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2109 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2109[] = "P265\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2650x2109;
/** @}*/



/******************************************************************************
*                    Object 0x210E : P270
******************************************************************************/
/**
* \addtogroup 0x210E 0x210E | P270
* @{
* \brief Object 0x210E (P270) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x210E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x210E[] = "P270\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2700x210E;
/** @}*/



/******************************************************************************
*                    Object 0x2112 : P274
******************************************************************************/
/**
* \addtogroup 0x2112 0x2112 | P274
* @{
* \brief Object 0x2112 (P274) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2112 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2112[] = "P274\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2740x2112;
/** @}*/



/******************************************************************************
*                    Object 0x2113 : P275
******************************************************************************/
/**
* \addtogroup 0x2113 0x2113 | P275
* @{
* \brief Object 0x2113 (P275) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2113 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2113[] = "P275\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2750x2113;
/** @}*/



/******************************************************************************
*                    Object 0x2114 : P276
******************************************************************************/
/**
* \addtogroup 0x2114 0x2114 | P276
* @{
* \brief Object 0x2114 (P276) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2114 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2114[] = "P276\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2760x2114;
/** @}*/



/******************************************************************************
*                    Object 0x2115 : P277
******************************************************************************/
/**
* \addtogroup 0x2115 0x2115 | P277
* @{
* \brief Object 0x2115 (P277) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2115 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2115[] = "P277\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2770x2115;
/** @}*/



/******************************************************************************
*                    Object 0x2116 : P278
******************************************************************************/
/**
* \addtogroup 0x2116 0x2116 | P278
* @{
* \brief Object 0x2116 (P278) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2116 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2116[] = "P278\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2780x2116;
/** @}*/



/******************************************************************************
*                    Object 0x2117 : P279
******************************************************************************/
/**
* \addtogroup 0x2117 0x2117 | P279
* @{
* \brief Object 0x2117 (P279) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2117 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2117[] = "P279\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2790x2117;
/** @}*/



/******************************************************************************
*                    Object 0x2122 : P290
******************************************************************************/
/**
* \addtogroup 0x2122 0x2122 | P290
* @{
* \brief Object 0x2122 (P290) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2122 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2122[] = "P290\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2900x2122;
/** @}*/



/******************************************************************************
*                    Object 0x2123 : P291
******************************************************************************/
/**
* \addtogroup 0x2123 0x2123 | P291
* @{
* \brief Object 0x2123 (P291) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2123 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2123[] = "P291\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2910x2123;
/** @}*/



/******************************************************************************
*                    Object 0x2124 : P292
******************************************************************************/
/**
* \addtogroup 0x2124 0x2124 | P292
* @{
* \brief Object 0x2124 (P292) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2124 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2124[] = "P292\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2920x2124;
/** @}*/



/******************************************************************************
*                    Object 0x2125 : P293
******************************************************************************/
/**
* \addtogroup 0x2125 0x2125 | P293
* @{
* \brief Object 0x2125 (P293) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2125 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2125[] = "P293\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2930x2125;
/** @}*/



/******************************************************************************
*                    Object 0x2126 : P294
******************************************************************************/
/**
* \addtogroup 0x2126 0x2126 | P294
* @{
* \brief Object 0x2126 (P294) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2126 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2126[] = "P294\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2940x2126;
/** @}*/



/******************************************************************************
*                    Object 0x2129 : P297
******************************************************************************/
/**
* \addtogroup 0x2129 0x2129 | P297
* @{
* \brief Object 0x2129 (P297) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2129 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2129[] = "P297\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2970x2129;
/** @}*/



/******************************************************************************
*                    Object 0x212A : P298
******************************************************************************/
/**
* \addtogroup 0x212A 0x212A | P298
* @{
* \brief Object 0x212A (P298) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x212A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x212A[] = "P298\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2980x212A;
/** @}*/



/******************************************************************************
*                    Object 0x212B : P299
******************************************************************************/
/**
* \addtogroup 0x212B 0x212B | P299
* @{
* \brief Object 0x212B (P299) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x212B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x212B[] = "P299\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P2990x212B;
/** @}*/



/******************************************************************************
*                    Object 0x212C : P300
******************************************************************************/
/**
* \addtogroup 0x212C 0x212C | P300
* @{
* \brief Object 0x212C (P300) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x212C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x212C[] = "P300\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3000x212C;
/** @}*/



/******************************************************************************
*                    Object 0x212D : P301
******************************************************************************/
/**
* \addtogroup 0x212D 0x212D | P301
* @{
* \brief Object 0x212D (P301) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x212D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x212D[] = "P301\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3010x212D;
/** @}*/



/******************************************************************************
*                    Object 0x212E : P302
******************************************************************************/
/**
* \addtogroup 0x212E 0x212E | P302
* @{
* \brief Object 0x212E (P302) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x212E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x212E[] = "P302\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3020x212E;
/** @}*/



/******************************************************************************
*                    Object 0x212F : P303
******************************************************************************/
/**
* \addtogroup 0x212F 0x212F | P303
* @{
* \brief Object 0x212F (P303) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x212F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x212F[] = "P303\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3030x212F;
/** @}*/



/******************************************************************************
*                    Object 0x2130 : P304
******************************************************************************/
/**
* \addtogroup 0x2130 0x2130 | P304
* @{
* \brief Object 0x2130 (P304) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2130 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2130[] = "P304\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3040x2130;
/** @}*/



/******************************************************************************
*                    Object 0x2131 : P305
******************************************************************************/
/**
* \addtogroup 0x2131 0x2131 | P305
* @{
* \brief Object 0x2131 (P305) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2131 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2131[] = "P305\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3050x2131;
/** @}*/



/******************************************************************************
*                    Object 0x2132 : P306
******************************************************************************/
/**
* \addtogroup 0x2132 0x2132 | P306
* @{
* \brief Object 0x2132 (P306) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2132 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2132[] = "P306\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3060x2132;
/** @}*/



/******************************************************************************
*                    Object 0x2133 : P307
******************************************************************************/
/**
* \addtogroup 0x2133 0x2133 | P307
* @{
* \brief Object 0x2133 (P307) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2133 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2133[] = "P307\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3070x2133;
/** @}*/



/******************************************************************************
*                    Object 0x2134 : P308
******************************************************************************/
/**
* \addtogroup 0x2134 0x2134 | P308
* @{
* \brief Object 0x2134 (P308) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2134 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2134[] = "P308\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3080x2134;
/** @}*/



/******************************************************************************
*                    Object 0x2135 : P309
******************************************************************************/
/**
* \addtogroup 0x2135 0x2135 | P309
* @{
* \brief Object 0x2135 (P309) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2135 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2135[] = "P309\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3090x2135;
/** @}*/



/******************************************************************************
*                    Object 0x2136 : P310
******************************************************************************/
/**
* \addtogroup 0x2136 0x2136 | P310
* @{
* \brief Object 0x2136 (P310) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2136 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2136[] = "P310\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3100x2136;
/** @}*/



/******************************************************************************
*                    Object 0x2137 : P311
******************************************************************************/
/**
* \addtogroup 0x2137 0x2137 | P311
* @{
* \brief Object 0x2137 (P311) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2137 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2137[] = "P311\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3110x2137;
/** @}*/



/******************************************************************************
*                    Object 0x2139 : P313
******************************************************************************/
/**
* \addtogroup 0x2139 0x2139 | P313
* @{
* \brief Object 0x2139 (P313) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2139 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2139[] = "P313\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3130x2139;
/** @}*/



/******************************************************************************
*                    Object 0x213A : P314
******************************************************************************/
/**
* \addtogroup 0x213A 0x213A | P314
* @{
* \brief Object 0x213A (P314) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x213A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x213A[] = "P314\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3140x213A;
/** @}*/



/******************************************************************************
*                    Object 0x213B : P315
******************************************************************************/
/**
* \addtogroup 0x213B 0x213B | P315
* @{
* \brief Object 0x213B (P315) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x213B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x213B[] = "P315\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3150x213B;
/** @}*/



/******************************************************************************
*                    Object 0x213C : P316
******************************************************************************/
/**
* \addtogroup 0x213C 0x213C | P316
* @{
* \brief Object 0x213C (P316) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x213C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x213C[] = "P316\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3160x213C;
/** @}*/



/******************************************************************************
*                    Object 0x213D : P317
******************************************************************************/
/**
* \addtogroup 0x213D 0x213D | P317
* @{
* \brief Object 0x213D (P317) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x213D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x213D[] = "P317\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3170x213D;
/** @}*/



/******************************************************************************
*                    Object 0x213E : P318
******************************************************************************/
/**
* \addtogroup 0x213E 0x213E | P318
* @{
* \brief Object 0x213E (P318) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x213E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x213E[] = "P318\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3180x213E;
/** @}*/



/******************************************************************************
*                    Object 0x213F : P319
******************************************************************************/
/**
* \addtogroup 0x213F 0x213F | P319
* @{
* \brief Object 0x213F (P319) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x213F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x213F[] = "P319\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3190x213F;
/** @}*/



/******************************************************************************
*                    Object 0x215A : P346
******************************************************************************/
/**
* \addtogroup 0x215A 0x215A | P346
* @{
* \brief Object 0x215A (P346) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x215A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x215A[] = "P346\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3460x215A;
/** @}*/



/******************************************************************************
*                    Object 0x215B : P347
******************************************************************************/
/**
* \addtogroup 0x215B 0x215B | P347
* @{
* \brief Object 0x215B (P347) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x215B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x215B[] = "P347\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3470x215B;
/** @}*/



/******************************************************************************
*                    Object 0x215C : P348
******************************************************************************/
/**
* \addtogroup 0x215C 0x215C | P348
* @{
* \brief Object 0x215C (P348) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x215C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x215C[] = "P348\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3480x215C;
/** @}*/



/******************************************************************************
*                    Object 0x215E : P350
******************************************************************************/
/**
* \addtogroup 0x215E 0x215E | P350
* @{
* \brief Object 0x215E (P350) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x215E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x215E[] = "P350\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3500x215E;
/** @}*/



/******************************************************************************
*                    Object 0x215F : P351
******************************************************************************/
/**
* \addtogroup 0x215F 0x215F | P351
* @{
* \brief Object 0x215F (P351) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x215F = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x215F[] = "P351\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P3510x215F;
/** @}*/



/******************************************************************************
*                    Object 0x2160 : P352
******************************************************************************/
/**
* \addtogroup 0x2160 0x2160 | P352
* @{
* \brief Object 0x2160 (P352) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2160 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2160[] = "P352\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3520x2160;
/** @}*/



/******************************************************************************
*                    Object 0x2161 : P353
******************************************************************************/
/**
* \addtogroup 0x2161 0x2161 | P353
* @{
* \brief Object 0x2161 (P353) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2161 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2161[] = "P353\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3530x2161;
/** @}*/



/******************************************************************************
*                    Object 0x2162 : P354
******************************************************************************/
/**
* \addtogroup 0x2162 0x2162 | P354
* @{
* \brief Object 0x2162 (P354) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2162 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2162[] = "P354\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3540x2162;
/** @}*/



/******************************************************************************
*                    Object 0x2163 : P355
******************************************************************************/
/**
* \addtogroup 0x2163 0x2163 | P355
* @{
* \brief Object 0x2163 (P355) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2163 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2163[] = "P355\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3550x2163;
/** @}*/



/******************************************************************************
*                    Object 0x2164 : P356
******************************************************************************/
/**
* \addtogroup 0x2164 0x2164 | P356
* @{
* \brief Object 0x2164 (P356) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2164 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2164[] = "P356\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3560x2164;
/** @}*/



/******************************************************************************
*                    Object 0x2165 : P357
******************************************************************************/
/**
* \addtogroup 0x2165 0x2165 | P357
* @{
* \brief Object 0x2165 (P357) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2165 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2165[] = "P357\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3570x2165;
/** @}*/



/******************************************************************************
*                    Object 0x2166 : P358
******************************************************************************/
/**
* \addtogroup 0x2166 0x2166 | P358
* @{
* \brief Object 0x2166 (P358) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2166 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2166[] = "P358\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3580x2166;
/** @}*/



/******************************************************************************
*                    Object 0x2167 : P359
******************************************************************************/
/**
* \addtogroup 0x2167 0x2167 | P359
* @{
* \brief Object 0x2167 (P359) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2167 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2167[] = "P359\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3590x2167;
/** @}*/



/******************************************************************************
*                    Object 0x2168 : P360
******************************************************************************/
/**
* \addtogroup 0x2168 0x2168 | P360
* @{
* \brief Object 0x2168 (P360) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2168 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2168[] = "P360\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3600x2168;
/** @}*/



/******************************************************************************
*                    Object 0x216C : P364
******************************************************************************/
/**
* \addtogroup 0x216C 0x216C | P364
* @{
* \brief Object 0x216C (P364) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x216C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x216C[] = "P364\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3640x216C;
/** @}*/



/******************************************************************************
*                    Object 0x216D : P365
******************************************************************************/
/**
* \addtogroup 0x216D 0x216D | P365
* @{
* \brief Object 0x216D (P365) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x216D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x216D[] = "P365\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3650x216D;
/** @}*/



/******************************************************************************
*                    Object 0x2176 : P374
******************************************************************************/
/**
* \addtogroup 0x2176 0x2176 | P374
* @{
* \brief Object 0x2176 (P374) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2176 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2176[] = "P374\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3740x2176;
/** @}*/



/******************************************************************************
*                    Object 0x2177 : P375
******************************************************************************/
/**
* \addtogroup 0x2177 0x2177 | P375
* @{
* \brief Object 0x2177 (P375) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2177 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2177[] = "P375\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3750x2177;
/** @}*/



/******************************************************************************
*                    Object 0x2178 : P376
******************************************************************************/
/**
* \addtogroup 0x2178 0x2178 | P376
* @{
* \brief Object 0x2178 (P376) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2178 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2178[] = "P376\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3760x2178;
/** @}*/



/******************************************************************************
*                    Object 0x2179 : P377
******************************************************************************/
/**
* \addtogroup 0x2179 0x2179 | P377
* @{
* \brief Object 0x2179 (P377) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2179 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2179[] = "P377\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3770x2179;
/** @}*/



/******************************************************************************
*                    Object 0x217C : P380
******************************************************************************/
/**
* \addtogroup 0x217C 0x217C | P380
* @{
* \brief Object 0x217C (P380) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x217C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x217C[] = "P380\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3800x217C;
/** @}*/



/******************************************************************************
*                    Object 0x217D : P381
******************************************************************************/
/**
* \addtogroup 0x217D 0x217D | P381
* @{
* \brief Object 0x217D (P381) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x217D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x217D[] = "P381\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3810x217D;
/** @}*/



/******************************************************************************
*                    Object 0x217E : P382
******************************************************************************/
/**
* \addtogroup 0x217E 0x217E | P382
* @{
* \brief Object 0x217E (P382) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x217E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x217E[] = "P382\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3820x217E;
/** @}*/



/******************************************************************************
*                    Object 0x217F : P383
******************************************************************************/
/**
* \addtogroup 0x217F 0x217F | P383
* @{
* \brief Object 0x217F (P383) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x217F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x217F[] = "P383\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3830x217F;
/** @}*/



/******************************************************************************
*                    Object 0x2180 : P384
******************************************************************************/
/**
* \addtogroup 0x2180 0x2180 | P384
* @{
* \brief Object 0x2180 (P384) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2180 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2180[] = "P384\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3840x2180;
/** @}*/



/******************************************************************************
*                    Object 0x2181 : P385
******************************************************************************/
/**
* \addtogroup 0x2181 0x2181 | P385
* @{
* \brief Object 0x2181 (P385) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2181 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2181[] = "P385\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3850x2181;
/** @}*/



/******************************************************************************
*                    Object 0x2182 : P386
******************************************************************************/
/**
* \addtogroup 0x2182 0x2182 | P386
* @{
* \brief Object 0x2182 (P386) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2182 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2182[] = "P386\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3860x2182;
/** @}*/



/******************************************************************************
*                    Object 0x2183 : P387
******************************************************************************/
/**
* \addtogroup 0x2183 0x2183 | P387
* @{
* \brief Object 0x2183 (P387) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2183 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2183[] = "P387\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3870x2183;
/** @}*/



/******************************************************************************
*                    Object 0x2184 : P388
******************************************************************************/
/**
* \addtogroup 0x2184 0x2184 | P388
* @{
* \brief Object 0x2184 (P388) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2184 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2184[] = "P388\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3880x2184;
/** @}*/



/******************************************************************************
*                    Object 0x2186 : P390
******************************************************************************/
/**
* \addtogroup 0x2186 0x2186 | P390
* @{
* \brief Object 0x2186 (P390) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2186 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2186[] = "P390\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3900x2186;
/** @}*/



/******************************************************************************
*                    Object 0x2187 : P391
******************************************************************************/
/**
* \addtogroup 0x2187 0x2187 | P391
* @{
* \brief Object 0x2187 (P391) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2187 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2187[] = "P391\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3910x2187;
/** @}*/



/******************************************************************************
*                    Object 0x2188 : P392
******************************************************************************/
/**
* \addtogroup 0x2188 0x2188 | P392
* @{
* \brief Object 0x2188 (P392) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2188 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2188[] = "P392\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3920x2188;
/** @}*/



/******************************************************************************
*                    Object 0x2189 : P393
******************************************************************************/
/**
* \addtogroup 0x2189 0x2189 | P393
* @{
* \brief Object 0x2189 (P393) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2189 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2189[] = "P393\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3930x2189;
/** @}*/



/******************************************************************************
*                    Object 0x218A : P394
******************************************************************************/
/**
* \addtogroup 0x218A 0x218A | P394
* @{
* \brief Object 0x218A (P394) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x218A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x218A[] = "P394\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3940x218A;
/** @}*/



/******************************************************************************
*                    Object 0x218B : P395
******************************************************************************/
/**
* \addtogroup 0x218B 0x218B | P395
* @{
* \brief Object 0x218B (P395) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x218B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x218B[] = "P395\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3950x218B;
/** @}*/



/******************************************************************************
*                    Object 0x218C : P396
******************************************************************************/
/**
* \addtogroup 0x218C 0x218C | P396
* @{
* \brief Object 0x218C (P396) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x218C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x218C[] = "P396\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3960x218C;
/** @}*/



/******************************************************************************
*                    Object 0x218D : P397
******************************************************************************/
/**
* \addtogroup 0x218D 0x218D | P397
* @{
* \brief Object 0x218D (P397) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x218D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x218D[] = "P397\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3970x218D;
/** @}*/



/******************************************************************************
*                    Object 0x218E : P398
******************************************************************************/
/**
* \addtogroup 0x218E 0x218E | P398
* @{
* \brief Object 0x218E (P398) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x218E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x218E[] = "P398\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3980x218E;
/** @}*/



/******************************************************************************
*                    Object 0x218F : P399
******************************************************************************/
/**
* \addtogroup 0x218F 0x218F | P399
* @{
* \brief Object 0x218F (P399) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x218F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x218F[] = "P399\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P3990x218F;
/** @}*/



/******************************************************************************
*                    Object 0x2190 : P400
******************************************************************************/
/**
* \addtogroup 0x2190 0x2190 | P400
* @{
* \brief Object 0x2190 (P400) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2190 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2190[] = "P400\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4000x2190;
/** @}*/



/******************************************************************************
*                    Object 0x2191 : P401
******************************************************************************/
/**
* \addtogroup 0x2191 0x2191 | P401
* @{
* \brief Object 0x2191 (P401) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2191 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2191[] = "P401\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4010x2191;
/** @}*/



/******************************************************************************
*                    Object 0x2192 : P402
******************************************************************************/
/**
* \addtogroup 0x2192 0x2192 | P402
* @{
* \brief Object 0x2192 (P402) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2192 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2192[] = "P402\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4020x2192;
/** @}*/



/******************************************************************************
*                    Object 0x2193 : P403
******************************************************************************/
/**
* \addtogroup 0x2193 0x2193 | P403
* @{
* \brief Object 0x2193 (P403) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2193 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2193[] = "P403\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4030x2193;
/** @}*/



/******************************************************************************
*                    Object 0x2194 : P404
******************************************************************************/
/**
* \addtogroup 0x2194 0x2194 | P404
* @{
* \brief Object 0x2194 (P404) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2194 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2194[] = "P404\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4040x2194;
/** @}*/



/******************************************************************************
*                    Object 0x2195 : P405
******************************************************************************/
/**
* \addtogroup 0x2195 0x2195 | P405
* @{
* \brief Object 0x2195 (P405) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2195 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2195[] = "P405\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4050x2195;
/** @}*/



/******************************************************************************
*                    Object 0x2197 : P407
******************************************************************************/
/**
* \addtogroup 0x2197 0x2197 | P407
* @{
* \brief Object 0x2197 (P407) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2197 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2197[] = "P407\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4070x2197;
/** @}*/



/******************************************************************************
*                    Object 0x2198 : P408
******************************************************************************/
/**
* \addtogroup 0x2198 0x2198 | P408
* @{
* \brief Object 0x2198 (P408) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2198 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2198[] = "P408\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4080x2198;
/** @}*/



/******************************************************************************
*                    Object 0x2199 : P409
******************************************************************************/
/**
* \addtogroup 0x2199 0x2199 | P409
* @{
* \brief Object 0x2199 (P409) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2199 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2199[] = "P409\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4090x2199;
/** @}*/



/******************************************************************************
*                    Object 0x219A : P410
******************************************************************************/
/**
* \addtogroup 0x219A 0x219A | P410
* @{
* \brief Object 0x219A (P410) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x219A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x219A[] = "P410\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4100x219A;
/** @}*/



/******************************************************************************
*                    Object 0x219B : P411
******************************************************************************/
/**
* \addtogroup 0x219B 0x219B | P411
* @{
* \brief Object 0x219B (P411) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x219B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x219B[] = "P411\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4110x219B;
/** @}*/



/******************************************************************************
*                    Object 0x219C : P412
******************************************************************************/
/**
* \addtogroup 0x219C 0x219C | P412
* @{
* \brief Object 0x219C (P412) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x219C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x219C[] = "P412\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4120x219C;
/** @}*/



/******************************************************************************
*                    Object 0x219D : P413
******************************************************************************/
/**
* \addtogroup 0x219D 0x219D | P413
* @{
* \brief Object 0x219D (P413) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x219D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x219D[] = "P413\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4130x219D;
/** @}*/



/******************************************************************************
*                    Object 0x219E : P414
******************************************************************************/
/**
* \addtogroup 0x219E 0x219E | P414
* @{
* \brief Object 0x219E (P414) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x219E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x219E[] = "P414\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4140x219E;
/** @}*/



/******************************************************************************
*                    Object 0x219F : P415
******************************************************************************/
/**
* \addtogroup 0x219F 0x219F | P415
* @{
* \brief Object 0x219F (P415) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x219F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x219F[] = "P415\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4150x219F;
/** @}*/



/******************************************************************************
*                    Object 0x21A1 : P417
******************************************************************************/
/**
* \addtogroup 0x21A1 0x21A1 | P417
* @{
* \brief Object 0x21A1 (P417) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A1[] = "P417\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4170x21A1;
/** @}*/



/******************************************************************************
*                    Object 0x21A2 : P418
******************************************************************************/
/**
* \addtogroup 0x21A2 0x21A2 | P418
* @{
* \brief Object 0x21A2 (P418) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A2[] = "P418\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4180x21A2;
/** @}*/



/******************************************************************************
*                    Object 0x21A3 : P419
******************************************************************************/
/**
* \addtogroup 0x21A3 0x21A3 | P419
* @{
* \brief Object 0x21A3 (P419) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A3[] = "P419\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4190x21A3;
/** @}*/



/******************************************************************************
*                    Object 0x21A4 : P420
******************************************************************************/
/**
* \addtogroup 0x21A4 0x21A4 | P420
* @{
* \brief Object 0x21A4 (P420) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A4[] = "P420\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4200x21A4;
/** @}*/



/******************************************************************************
*                    Object 0x21A5 : P421
******************************************************************************/
/**
* \addtogroup 0x21A5 0x21A5 | P421
* @{
* \brief Object 0x21A5 (P421) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A5[] = "P421\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4210x21A5;
/** @}*/



/******************************************************************************
*                    Object 0x21A6 : P422
******************************************************************************/
/**
* \addtogroup 0x21A6 0x21A6 | P422
* @{
* \brief Object 0x21A6 (P422) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A6[] = "P422\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4220x21A6;
/** @}*/



/******************************************************************************
*                    Object 0x21A7 : P423
******************************************************************************/
/**
* \addtogroup 0x21A7 0x21A7 | P423
* @{
* \brief Object 0x21A7 (P423) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A7[] = "P423\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4230x21A7;
/** @}*/



/******************************************************************************
*                    Object 0x21A8 : P424
******************************************************************************/
/**
* \addtogroup 0x21A8 0x21A8 | P424
* @{
* \brief Object 0x21A8 (P424) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A8[] = "P424\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4240x21A8;
/** @}*/



/******************************************************************************
*                    Object 0x21A9 : P425
******************************************************************************/
/**
* \addtogroup 0x21A9 0x21A9 | P425
* @{
* \brief Object 0x21A9 (P425) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21A9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21A9[] = "P425\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4250x21A9;
/** @}*/



/******************************************************************************
*                    Object 0x21AC : P428
******************************************************************************/
/**
* \addtogroup 0x21AC 0x21AC | P428
* @{
* \brief Object 0x21AC (P428) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21AC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21AC[] = "P428\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4280x21AC;
/** @}*/



/******************************************************************************
*                    Object 0x21AD : P429
******************************************************************************/
/**
* \addtogroup 0x21AD 0x21AD | P429
* @{
* \brief Object 0x21AD (P429) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21AD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21AD[] = "P429\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4290x21AD;
/** @}*/



/******************************************************************************
*                    Object 0x21AE : P430
******************************************************************************/
/**
* \addtogroup 0x21AE 0x21AE | P430
* @{
* \brief Object 0x21AE (P430) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21AE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21AE[] = "P430\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4300x21AE;
/** @}*/



/******************************************************************************
*                    Object 0x21AF : P431
******************************************************************************/
/**
* \addtogroup 0x21AF 0x21AF | P431
* @{
* \brief Object 0x21AF (P431) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21AF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21AF[] = "P431\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4310x21AF;
/** @}*/



/******************************************************************************
*                    Object 0x21B0 : P432
******************************************************************************/
/**
* \addtogroup 0x21B0 0x21B0 | P432
* @{
* \brief Object 0x21B0 (P432) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B0[] = "P432\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4320x21B0;
/** @}*/



/******************************************************************************
*                    Object 0x21B1 : P433
******************************************************************************/
/**
* \addtogroup 0x21B1 0x21B1 | P433
* @{
* \brief Object 0x21B1 (P433) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B1[] = "P433\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4330x21B1;
/** @}*/



/******************************************************************************
*                    Object 0x21B2 : P434
******************************************************************************/
/**
* \addtogroup 0x21B2 0x21B2 | P434
* @{
* \brief Object 0x21B2 (P434) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B2[] = "P434\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4340x21B2;
/** @}*/



/******************************************************************************
*                    Object 0x21B3 : P435
******************************************************************************/
/**
* \addtogroup 0x21B3 0x21B3 | P435
* @{
* \brief Object 0x21B3 (P435) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B3[] = "P435\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4350x21B3;
/** @}*/



/******************************************************************************
*                    Object 0x21B4 : P436
******************************************************************************/
/**
* \addtogroup 0x21B4 0x21B4 | P436
* @{
* \brief Object 0x21B4 (P436) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B4[] = "P436\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4360x21B4;
/** @}*/



/******************************************************************************
*                    Object 0x21B5 : P437
******************************************************************************/
/**
* \addtogroup 0x21B5 0x21B5 | P437
* @{
* \brief Object 0x21B5 (P437) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B5[] = "P437\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4370x21B5;
/** @}*/



/******************************************************************************
*                    Object 0x21B6 : P438
******************************************************************************/
/**
* \addtogroup 0x21B6 0x21B6 | P438
* @{
* \brief Object 0x21B6 (P438) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B6[] = "P438\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4380x21B6;
/** @}*/



/******************************************************************************
*                    Object 0x21B8 : P440
******************************************************************************/
/**
* \addtogroup 0x21B8 0x21B8 | P440
* @{
* \brief Object 0x21B8 (P440) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B8[] = "P440\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4400x21B8;
/** @}*/



/******************************************************************************
*                    Object 0x21B9 : P441
******************************************************************************/
/**
* \addtogroup 0x21B9 0x21B9 | P441
* @{
* \brief Object 0x21B9 (P441) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21B9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21B9[] = "P441\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4410x21B9;
/** @}*/



/******************************************************************************
*                    Object 0x21BA : P442
******************************************************************************/
/**
* \addtogroup 0x21BA 0x21BA | P442
* @{
* \brief Object 0x21BA (P442) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21BA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21BA[] = "P442\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4420x21BA;
/** @}*/



/******************************************************************************
*                    Object 0x21BB : P443
******************************************************************************/
/**
* \addtogroup 0x21BB 0x21BB | P443
* @{
* \brief Object 0x21BB (P443) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21BB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21BB[] = "P443\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4430x21BB;
/** @}*/



/******************************************************************************
*                    Object 0x21BC : P444
******************************************************************************/
/**
* \addtogroup 0x21BC 0x21BC | P444
* @{
* \brief Object 0x21BC (P444) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21BC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21BC[] = "P444\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4440x21BC;
/** @}*/



/******************************************************************************
*                    Object 0x21BD : P445
******************************************************************************/
/**
* \addtogroup 0x21BD 0x21BD | P445
* @{
* \brief Object 0x21BD (P445) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21BD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21BD[] = "P445\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4450x21BD;
/** @}*/



/******************************************************************************
*                    Object 0x21BE : P446
******************************************************************************/
/**
* \addtogroup 0x21BE 0x21BE | P446
* @{
* \brief Object 0x21BE (P446) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21BE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21BE[] = "P446\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4460x21BE;
/** @}*/



/******************************************************************************
*                    Object 0x21BF : P447
******************************************************************************/
/**
* \addtogroup 0x21BF 0x21BF | P447
* @{
* \brief Object 0x21BF (P447) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21BF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21BF[] = "P447\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4470x21BF;
/** @}*/



/******************************************************************************
*                    Object 0x21C0 : P448
******************************************************************************/
/**
* \addtogroup 0x21C0 0x21C0 | P448
* @{
* \brief Object 0x21C0 (P448) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21C0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21C0[] = "P448\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4480x21C0;
/** @}*/



/******************************************************************************
*                    Object 0x21C1 : P449
******************************************************************************/
/**
* \addtogroup 0x21C1 0x21C1 | P449
* @{
* \brief Object 0x21C1 (P449) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21C1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21C1[] = "P449\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4490x21C1;
/** @}*/



/******************************************************************************
*                    Object 0x21C2 : P450
******************************************************************************/
/**
* \addtogroup 0x21C2 0x21C2 | P450
* @{
* \brief Object 0x21C2 (P450) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21C2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21C2[] = "P450\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4500x21C2;
/** @}*/



/******************************************************************************
*                    Object 0x21C3 : P451
******************************************************************************/
/**
* \addtogroup 0x21C3 0x21C3 | P451
* @{
* \brief Object 0x21C3 (P451) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21C3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21C3[] = "P451\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4510x21C3;
/** @}*/



/******************************************************************************
*                    Object 0x21C4 : P452
******************************************************************************/
/**
* \addtogroup 0x21C4 0x21C4 | P452
* @{
* \brief Object 0x21C4 (P452) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21C4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21C4[] = "P452\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4520x21C4;
/** @}*/



/******************************************************************************
*                    Object 0x21C5 : P453
******************************************************************************/
/**
* \addtogroup 0x21C5 0x21C5 | P453
* @{
* \brief Object 0x21C5 (P453) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21C5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21C5[] = "P453\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4530x21C5;
/** @}*/



/******************************************************************************
*                    Object 0x21CC : P460
******************************************************************************/
/**
* \addtogroup 0x21CC 0x21CC | P460
* @{
* \brief Object 0x21CC (P460) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21CC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21CC[] = "P460\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4600x21CC;
/** @}*/



/******************************************************************************
*                    Object 0x21CD : P461
******************************************************************************/
/**
* \addtogroup 0x21CD 0x21CD | P461
* @{
* \brief Object 0x21CD (P461) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21CD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21CD[] = "P461\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4610x21CD;
/** @}*/



/******************************************************************************
*                    Object 0x21CE : P462
******************************************************************************/
/**
* \addtogroup 0x21CE 0x21CE | P462
* @{
* \brief Object 0x21CE (P462) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21CE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21CE[] = "P462\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4620x21CE;
/** @}*/



/******************************************************************************
*                    Object 0x21CF : P463
******************************************************************************/
/**
* \addtogroup 0x21CF 0x21CF | P463
* @{
* \brief Object 0x21CF (P463) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21CF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21CF[] = "P463\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4630x21CF;
/** @}*/



/******************************************************************************
*                    Object 0x21D0 : P464
******************************************************************************/
/**
* \addtogroup 0x21D0 0x21D0 | P464
* @{
* \brief Object 0x21D0 (P464) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21D0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21D0[] = "P464\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4640x21D0;
/** @}*/



/******************************************************************************
*                    Object 0x21D2 : P466
******************************************************************************/
/**
* \addtogroup 0x21D2 0x21D2 | P466
* @{
* \brief Object 0x21D2 (P466) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21D2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21D2[] = "P466\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4660x21D2;
/** @}*/



/******************************************************************************
*                    Object 0x21D3 : P467
******************************************************************************/
/**
* \addtogroup 0x21D3 0x21D3 | P467
* @{
* \brief Object 0x21D3 (P467) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21D3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21D3[] = "P467\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4670x21D3;
/** @}*/



/******************************************************************************
*                    Object 0x21D4 : P468
******************************************************************************/
/**
* \addtogroup 0x21D4 0x21D4 | P468
* @{
* \brief Object 0x21D4 (P468) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21D4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21D4[] = "P468\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4680x21D4;
/** @}*/



/******************************************************************************
*                    Object 0x21D6 : P470
******************************************************************************/
/**
* \addtogroup 0x21D6 0x21D6 | P470
* @{
* \brief Object 0x21D6 (P470) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21D6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21D6[] = "P470\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4700x21D6;
/** @}*/



/******************************************************************************
*                    Object 0x21D7 : P471
******************************************************************************/
/**
* \addtogroup 0x21D7 0x21D7 | P471
* @{
* \brief Object 0x21D7 (P471) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21D7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21D7[] = "P471\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4710x21D7;
/** @}*/



/******************************************************************************
*                    Object 0x21D8 : P472
******************************************************************************/
/**
* \addtogroup 0x21D8 0x21D8 | P472
* @{
* \brief Object 0x21D8 (P472) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21D8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21D8[] = "P472\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4720x21D8;
/** @}*/



/******************************************************************************
*                    Object 0x21D9 : P473
******************************************************************************/
/**
* \addtogroup 0x21D9 0x21D9 | P473
* @{
* \brief Object 0x21D9 (P473) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21D9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21D9[] = "P473\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4730x21D9;
/** @}*/



/******************************************************************************
*                    Object 0x21DA : P474
******************************************************************************/
/**
* \addtogroup 0x21DA 0x21DA | P474
* @{
* \brief Object 0x21DA (P474) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21DA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21DA[] = "P474\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4740x21DA;
/** @}*/



/******************************************************************************
*                    Object 0x21DB : P475
******************************************************************************/
/**
* \addtogroup 0x21DB 0x21DB | P475
* @{
* \brief Object 0x21DB (P475) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21DB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21DB[] = "P475\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4750x21DB;
/** @}*/



/******************************************************************************
*                    Object 0x21E0 : P480
******************************************************************************/
/**
* \addtogroup 0x21E0 0x21E0 | P480
* @{
* \brief Object 0x21E0 (P480) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21E0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21E0[] = "P480\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4800x21E0;
/** @}*/



/******************************************************************************
*                    Object 0x21E1 : P481
******************************************************************************/
/**
* \addtogroup 0x21E1 0x21E1 | P481
* @{
* \brief Object 0x21E1 (P481) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21E1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21E1[] = "P481\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4810x21E1;
/** @}*/



/******************************************************************************
*                    Object 0x21E2 : P482
******************************************************************************/
/**
* \addtogroup 0x21E2 0x21E2 | P482
* @{
* \brief Object 0x21E2 (P482) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21E2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21E2[] = "P482\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4820x21E2;
/** @}*/



/******************************************************************************
*                    Object 0x21E3 : P483
******************************************************************************/
/**
* \addtogroup 0x21E3 0x21E3 | P483
* @{
* \brief Object 0x21E3 (P483) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21E3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21E3[] = "P483\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4830x21E3;
/** @}*/



/******************************************************************************
*                    Object 0x21EA : P490
******************************************************************************/
/**
* \addtogroup 0x21EA 0x21EA | P490
* @{
* \brief Object 0x21EA (P490) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21EA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21EA[] = "P490\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4900x21EA;
/** @}*/



/******************************************************************************
*                    Object 0x21EC : P492
******************************************************************************/
/**
* \addtogroup 0x21EC 0x21EC | P492
* @{
* \brief Object 0x21EC (P492) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21EC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21EC[] = "P492\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P4920x21EC;
/** @}*/



/******************************************************************************
*                    Object 0x21F4 : P500
******************************************************************************/
/**
* \addtogroup 0x21F4 0x21F4 | P500
* @{
* \brief Object 0x21F4 (P500) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21F4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21F4[] = "P500\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5000x21F4;
/** @}*/



/******************************************************************************
*                    Object 0x21F8 : P504
******************************************************************************/
/**
* \addtogroup 0x21F8 0x21F8 | P504
* @{
* \brief Object 0x21F8 (P504) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21F8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21F8[] = "P504\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5040x21F8;
/** @}*/



/******************************************************************************
*                    Object 0x21F9 : P505
******************************************************************************/
/**
* \addtogroup 0x21F9 0x21F9 | P505
* @{
* \brief Object 0x21F9 (P505) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21F9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21F9[] = "P505\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5050x21F9;
/** @}*/



/******************************************************************************
*                    Object 0x21FA : P506
******************************************************************************/
/**
* \addtogroup 0x21FA 0x21FA | P506
* @{
* \brief Object 0x21FA (P506) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21FA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21FA[] = "P506\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5060x21FA;
/** @}*/



/******************************************************************************
*                    Object 0x21FB : P507
******************************************************************************/
/**
* \addtogroup 0x21FB 0x21FB | P507
* @{
* \brief Object 0x21FB (P507) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21FB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21FB[] = "P507\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5070x21FB;
/** @}*/



/******************************************************************************
*                    Object 0x21FD : P509
******************************************************************************/
/**
* \addtogroup 0x21FD 0x21FD | P509
* @{
* \brief Object 0x21FD (P509) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21FD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21FD[] = "P509\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5090x21FD;
/** @}*/



/******************************************************************************
*                    Object 0x21FE : P510
******************************************************************************/
/**
* \addtogroup 0x21FE 0x21FE | P510
* @{
* \brief Object 0x21FE (P510) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21FE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21FE[] = "P510\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5100x21FE;
/** @}*/



/******************************************************************************
*                    Object 0x21FF : P511
******************************************************************************/
/**
* \addtogroup 0x21FF 0x21FF | P511
* @{
* \brief Object 0x21FF (P511) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x21FF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x21FF[] = "P511\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5110x21FF;
/** @}*/



/******************************************************************************
*                    Object 0x2200 : P512
******************************************************************************/
/**
* \addtogroup 0x2200 0x2200 | P512
* @{
* \brief Object 0x2200 (P512) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2200 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2200[] = "P512\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5120x2200;
/** @}*/



/******************************************************************************
*                    Object 0x2206 : P518
******************************************************************************/
/**
* \addtogroup 0x2206 0x2206 | P518
* @{
* \brief Object 0x2206 (P518) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2206 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2206[] = "P518\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5180x2206;
/** @}*/



/******************************************************************************
*                    Object 0x2207 : P519
******************************************************************************/
/**
* \addtogroup 0x2207 0x2207 | P519
* @{
* \brief Object 0x2207 (P519) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2207 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2207[] = "P519\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5190x2207;
/** @}*/



/******************************************************************************
*                    Object 0x2208 : P520
******************************************************************************/
/**
* \addtogroup 0x2208 0x2208 | P520
* @{
* \brief Object 0x2208 (P520) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2208 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2208[] = "P520\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5200x2208;
/** @}*/



/******************************************************************************
*                    Object 0x2209 : P521
******************************************************************************/
/**
* \addtogroup 0x2209 0x2209 | P521
* @{
* \brief Object 0x2209 (P521) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2209 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2209[] = "P521\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5210x2209;
/** @}*/



/******************************************************************************
*                    Object 0x220A : P522
******************************************************************************/
/**
* \addtogroup 0x220A 0x220A | P522
* @{
* \brief Object 0x220A (P522) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x220A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x220A[] = "P522\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5220x220A;
/** @}*/



/******************************************************************************
*                    Object 0x220B : P523
******************************************************************************/
/**
* \addtogroup 0x220B 0x220B | P523
* @{
* \brief Object 0x220B (P523) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x220B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x220B[] = "P523\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5230x220B;
/** @}*/



/******************************************************************************
*                    Object 0x220C : P524
******************************************************************************/
/**
* \addtogroup 0x220C 0x220C | P524
* @{
* \brief Object 0x220C (P524) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x220C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x220C[] = "P524\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5240x220C;
/** @}*/



/******************************************************************************
*                    Object 0x220D : P525
******************************************************************************/
/**
* \addtogroup 0x220D 0x220D | P525
* @{
* \brief Object 0x220D (P525) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x220D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x220D[] = "P525\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5250x220D;
/** @}*/



/******************************************************************************
*                    Object 0x220E : P526
******************************************************************************/
/**
* \addtogroup 0x220E 0x220E | P526
* @{
* \brief Object 0x220E (P526) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x220E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x220E[] = "P526\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5260x220E;
/** @}*/



/******************************************************************************
*                    Object 0x2210 : P528
******************************************************************************/
/**
* \addtogroup 0x2210 0x2210 | P528
* @{
* \brief Object 0x2210 (P528) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2210 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2210[] = "P528\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5280x2210;
/** @}*/



/******************************************************************************
*                    Object 0x2216 : P534
******************************************************************************/
/**
* \addtogroup 0x2216 0x2216 | P534
* @{
* \brief Object 0x2216 (P534) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2216 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2216[] = "P534\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5340x2216;
/** @}*/



/******************************************************************************
*                    Object 0x2217 : P535
******************************************************************************/
/**
* \addtogroup 0x2217 0x2217 | P535
* @{
* \brief Object 0x2217 (P535) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2217 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2217[] = "P535\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5350x2217;
/** @}*/



/******************************************************************************
*                    Object 0x2218 : P536
******************************************************************************/
/**
* \addtogroup 0x2218 0x2218 | P536
* @{
* \brief Object 0x2218 (P536) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2218 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2218[] = "P536\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5360x2218;
/** @}*/



/******************************************************************************
*                    Object 0x221C : P540
******************************************************************************/
/**
* \addtogroup 0x221C 0x221C | P540
* @{
* \brief Object 0x221C (P540) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x221C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x221C[] = "P540\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5400x221C;
/** @}*/



/******************************************************************************
*                    Object 0x221D : P541
******************************************************************************/
/**
* \addtogroup 0x221D 0x221D | P541
* @{
* \brief Object 0x221D (P541) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x221D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x221D[] = "P541\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5410x221D;
/** @}*/



/******************************************************************************
*                    Object 0x221E : P542
******************************************************************************/
/**
* \addtogroup 0x221E 0x221E | P542
* @{
* \brief Object 0x221E (P542) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x221E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x221E[] = "P542\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5420x221E;
/** @}*/



/******************************************************************************
*                    Object 0x221F : P543
******************************************************************************/
/**
* \addtogroup 0x221F 0x221F | P543
* @{
* \brief Object 0x221F (P543) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x221F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x221F[] = "P543\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5430x221F;
/** @}*/



/******************************************************************************
*                    Object 0x2220 : P544
******************************************************************************/
/**
* \addtogroup 0x2220 0x2220 | P544
* @{
* \brief Object 0x2220 (P544) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2220 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2220[] = "P544\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5440x2220;
/** @}*/



/******************************************************************************
*                    Object 0x2221 : P545
******************************************************************************/
/**
* \addtogroup 0x2221 0x2221 | P545
* @{
* \brief Object 0x2221 (P545) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2221 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2221[] = "P545\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5450x2221;
/** @}*/



/******************************************************************************
*                    Object 0x2225 : P549
******************************************************************************/
/**
* \addtogroup 0x2225 0x2225 | P549
* @{
* \brief Object 0x2225 (P549) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2225 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2225[] = "P549\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5490x2225;
/** @}*/



/******************************************************************************
*                    Object 0x2226 : P550
******************************************************************************/
/**
* \addtogroup 0x2226 0x2226 | P550
* @{
* \brief Object 0x2226 (P550) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2226 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2226[] = "P550\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5500x2226;
/** @}*/



/******************************************************************************
*                    Object 0x2227 : P551
******************************************************************************/
/**
* \addtogroup 0x2227 0x2227 | P551
* @{
* \brief Object 0x2227 (P551) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2227 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2227[] = "P551\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5510x2227;
/** @}*/



/******************************************************************************
*                    Object 0x2228 : P552
******************************************************************************/
/**
* \addtogroup 0x2228 0x2228 | P552
* @{
* \brief Object 0x2228 (P552) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2228 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2228[] = "P552\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5520x2228;
/** @}*/



/******************************************************************************
*                    Object 0x2229 : P553
******************************************************************************/
/**
* \addtogroup 0x2229 0x2229 | P553
* @{
* \brief Object 0x2229 (P553) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2229 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2229[] = "P553\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5530x2229;
/** @}*/



/******************************************************************************
*                    Object 0x222A : P554
******************************************************************************/
/**
* \addtogroup 0x222A 0x222A | P554
* @{
* \brief Object 0x222A (P554) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x222A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x222A[] = "P554\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5540x222A;
/** @}*/



/******************************************************************************
*                    Object 0x222B : P555
******************************************************************************/
/**
* \addtogroup 0x222B 0x222B | P555
* @{
* \brief Object 0x222B (P555) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x222B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x222B[] = "P555\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5550x222B;
/** @}*/



/******************************************************************************
*                    Object 0x2230 : P560
******************************************************************************/
/**
* \addtogroup 0x2230 0x2230 | P560
* @{
* \brief Object 0x2230 (P560) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2230 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2230[] = "P560\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5600x2230;
/** @}*/



/******************************************************************************
*                    Object 0x2235 : P565
******************************************************************************/
/**
* \addtogroup 0x2235 0x2235 | P565
* @{
* \brief Object 0x2235 (P565) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2235 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2235[] = "P565\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5650x2235;
/** @}*/



/******************************************************************************
*                    Object 0x2236 : P566
******************************************************************************/
/**
* \addtogroup 0x2236 0x2236 | P566
* @{
* \brief Object 0x2236 (P566) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2236 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2236[] = "P566\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5660x2236;
/** @}*/



/******************************************************************************
*                    Object 0x2239 : P569
******************************************************************************/
/**
* \addtogroup 0x2239 0x2239 | P569
* @{
* \brief Object 0x2239 (P569) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2239 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2239[] = "P569\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5690x2239;
/** @}*/



/******************************************************************************
*                    Object 0x223A : P570
******************************************************************************/
/**
* \addtogroup 0x223A 0x223A | P570
* @{
* \brief Object 0x223A (P570) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x223A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x223A[] = "P570\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5700x223A;
/** @}*/



/******************************************************************************
*                    Object 0x223B : P571
******************************************************************************/
/**
* \addtogroup 0x223B 0x223B | P571
* @{
* \brief Object 0x223B (P571) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x223B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x223B[] = "P571\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5710x223B;
/** @}*/



/******************************************************************************
*                    Object 0x223C : P572
******************************************************************************/
/**
* \addtogroup 0x223C 0x223C | P572
* @{
* \brief Object 0x223C (P572) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x223C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x223C[] = "P572\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5720x223C;
/** @}*/



/******************************************************************************
*                    Object 0x223D : P573
******************************************************************************/
/**
* \addtogroup 0x223D 0x223D | P573
* @{
* \brief Object 0x223D (P573) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x223D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x223D[] = "P573\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5730x223D;
/** @}*/



/******************************************************************************
*                    Object 0x223E : P574
******************************************************************************/
/**
* \addtogroup 0x223E 0x223E | P574
* @{
* \brief Object 0x223E (P574) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x223E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x223E[] = "P574\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5740x223E;
/** @}*/



/******************************************************************************
*                    Object 0x223F : P575
******************************************************************************/
/**
* \addtogroup 0x223F 0x223F | P575
* @{
* \brief Object 0x223F (P575) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x223F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x223F[] = "P575\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5750x223F;
/** @}*/



/******************************************************************************
*                    Object 0x2240 : P576
******************************************************************************/
/**
* \addtogroup 0x2240 0x2240 | P576
* @{
* \brief Object 0x2240 (P576) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2240 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2240[] = "P576\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5760x2240;
/** @}*/



/******************************************************************************
*                    Object 0x2241 : P577
******************************************************************************/
/**
* \addtogroup 0x2241 0x2241 | P577
* @{
* \brief Object 0x2241 (P577) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2241 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2241[] = "P577\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5770x2241;
/** @}*/



/******************************************************************************
*                    Object 0x2242 : P578
******************************************************************************/
/**
* \addtogroup 0x2242 0x2242 | P578
* @{
* \brief Object 0x2242 (P578) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2242 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2242[] = "P578\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5780x2242;
/** @}*/



/******************************************************************************
*                    Object 0x2243 : P579
******************************************************************************/
/**
* \addtogroup 0x2243 0x2243 | P579
* @{
* \brief Object 0x2243 (P579) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2243 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2243[] = "P579\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5790x2243;
/** @}*/



/******************************************************************************
*                    Object 0x2244 : P580
******************************************************************************/
/**
* \addtogroup 0x2244 0x2244 | P580
* @{
* \brief Object 0x2244 (P580) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2244 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2244[] = "P580\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5800x2244;
/** @}*/



/******************************************************************************
*                    Object 0x2248 : P584
******************************************************************************/
/**
* \addtogroup 0x2248 0x2248 | P584
* @{
* \brief Object 0x2248 (P584) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2248 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2248[] = "P584\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5840x2248;
/** @}*/



/******************************************************************************
*                    Object 0x2249 : P585
******************************************************************************/
/**
* \addtogroup 0x2249 0x2249 | P585
* @{
* \brief Object 0x2249 (P585) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2249 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2249[] = "P585\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5850x2249;
/** @}*/



/******************************************************************************
*                    Object 0x224A : P586
******************************************************************************/
/**
* \addtogroup 0x224A 0x224A | P586
* @{
* \brief Object 0x224A (P586) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x224A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x224A[] = "P586\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5860x224A;
/** @}*/



/******************************************************************************
*                    Object 0x224B : P587
******************************************************************************/
/**
* \addtogroup 0x224B 0x224B | P587
* @{
* \brief Object 0x224B (P587) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x224B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x224B[] = "P587\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5870x224B;
/** @}*/



/******************************************************************************
*                    Object 0x224C : P588
******************************************************************************/
/**
* \addtogroup 0x224C 0x224C | P588
* @{
* \brief Object 0x224C (P588) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x224C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x224C[] = "P588\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5880x224C;
/** @}*/



/******************************************************************************
*                    Object 0x224D : P589
******************************************************************************/
/**
* \addtogroup 0x224D 0x224D | P589
* @{
* \brief Object 0x224D (P589) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x224D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x224D[] = "P589\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5890x224D;
/** @}*/



/******************************************************************************
*                    Object 0x224E : P590
******************************************************************************/
/**
* \addtogroup 0x224E 0x224E | P590
* @{
* \brief Object 0x224E (P590) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x224E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x224E[] = "P590\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5900x224E;
/** @}*/



/******************************************************************************
*                    Object 0x224F : P591
******************************************************************************/
/**
* \addtogroup 0x224F 0x224F | P591
* @{
* \brief Object 0x224F (P591) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x224F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x224F[] = "P591\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5910x224F;
/** @}*/



/******************************************************************************
*                    Object 0x2250 : P592
******************************************************************************/
/**
* \addtogroup 0x2250 0x2250 | P592
* @{
* \brief Object 0x2250 (P592) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2250 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2250[] = "P592\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5920x2250;
/** @}*/



/******************************************************************************
*                    Object 0x2251 : P593
******************************************************************************/
/**
* \addtogroup 0x2251 0x2251 | P593
* @{
* \brief Object 0x2251 (P593) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2251 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2251[] = "P593\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5930x2251;
/** @}*/



/******************************************************************************
*                    Object 0x2254 : P596
******************************************************************************/
/**
* \addtogroup 0x2254 0x2254 | P596
* @{
* \brief Object 0x2254 (P596) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2254 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2254[] = "P596\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5960x2254;
/** @}*/



/******************************************************************************
*                    Object 0x2255 : P597
******************************************************************************/
/**
* \addtogroup 0x2255 0x2255 | P597
* @{
* \brief Object 0x2255 (P597) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2255 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2255[] = "P597\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5970x2255;
/** @}*/



/******************************************************************************
*                    Object 0x2256 : P598
******************************************************************************/
/**
* \addtogroup 0x2256 0x2256 | P598
* @{
* \brief Object 0x2256 (P598) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2256 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2256[] = "P598\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P5980x2256;
/** @}*/



/******************************************************************************
*                    Object 0x2258 : P600
******************************************************************************/
/**
* \addtogroup 0x2258 0x2258 | P600
* @{
* \brief Object 0x2258 (P600) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2258 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2258[] = "P600\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6000x2258;
/** @}*/



/******************************************************************************
*                    Object 0x2259 : P601
******************************************************************************/
/**
* \addtogroup 0x2259 0x2259 | P601
* @{
* \brief Object 0x2259 (P601) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2259 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2259[] = "P601\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6010x2259;
/** @}*/



/******************************************************************************
*                    Object 0x225A : P602
******************************************************************************/
/**
* \addtogroup 0x225A 0x225A | P602
* @{
* \brief Object 0x225A (P602) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x225A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x225A[] = "P602\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6020x225A;
/** @}*/



/******************************************************************************
*                    Object 0x225B : P603
******************************************************************************/
/**
* \addtogroup 0x225B 0x225B | P603
* @{
* \brief Object 0x225B (P603) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x225B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x225B[] = "P603\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6030x225B;
/** @}*/



/******************************************************************************
*                    Object 0x225C : P604
******************************************************************************/
/**
* \addtogroup 0x225C 0x225C | P604
* @{
* \brief Object 0x225C (P604) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x225C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x225C[] = "P604\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6040x225C;
/** @}*/



/******************************************************************************
*                    Object 0x225D : P605
******************************************************************************/
/**
* \addtogroup 0x225D 0x225D | P605
* @{
* \brief Object 0x225D (P605) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x225D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x225D[] = "P605\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6050x225D;
/** @}*/



/******************************************************************************
*                    Object 0x225E : P606
******************************************************************************/
/**
* \addtogroup 0x225E 0x225E | P606
* @{
* \brief Object 0x225E (P606) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x225E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x225E[] = "P606\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6060x225E;
/** @}*/



/******************************************************************************
*                    Object 0x225F : P607
******************************************************************************/
/**
* \addtogroup 0x225F 0x225F | P607
* @{
* \brief Object 0x225F (P607) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x225F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x225F[] = "P607\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6070x225F;
/** @}*/



/******************************************************************************
*                    Object 0x2260 : P608
******************************************************************************/
/**
* \addtogroup 0x2260 0x2260 | P608
* @{
* \brief Object 0x2260 (P608) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2260 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2260[] = "P608\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6080x2260;
/** @}*/



/******************************************************************************
*                    Object 0x2261 : P609
******************************************************************************/
/**
* \addtogroup 0x2261 0x2261 | P609
* @{
* \brief Object 0x2261 (P609) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2261 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2261[] = "P609\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6090x2261;
/** @}*/



/******************************************************************************
*                    Object 0x2262 : P610
******************************************************************************/
/**
* \addtogroup 0x2262 0x2262 | P610
* @{
* \brief Object 0x2262 (P610) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2262 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2262[] = "P610\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6100x2262;
/** @}*/



/******************************************************************************
*                    Object 0x2263 : P611
******************************************************************************/
/**
* \addtogroup 0x2263 0x2263 | P611
* @{
* \brief Object 0x2263 (P611) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2263 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2263[] = "P611\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6110x2263;
/** @}*/



/******************************************************************************
*                    Object 0x2264 : P612
******************************************************************************/
/**
* \addtogroup 0x2264 0x2264 | P612
* @{
* \brief Object 0x2264 (P612) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2264 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2264[] = "P612\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6120x2264;
/** @}*/



/******************************************************************************
*                    Object 0x2265 : P613
******************************************************************************/
/**
* \addtogroup 0x2265 0x2265 | P613
* @{
* \brief Object 0x2265 (P613) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2265 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2265[] = "P613\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6130x2265;
/** @}*/



/******************************************************************************
*                    Object 0x2266 : P614
******************************************************************************/
/**
* \addtogroup 0x2266 0x2266 | P614
* @{
* \brief Object 0x2266 (P614) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2266 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2266[] = "P614\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6140x2266;
/** @}*/



/******************************************************************************
*                    Object 0x2267 : P615
******************************************************************************/
/**
* \addtogroup 0x2267 0x2267 | P615
* @{
* \brief Object 0x2267 (P615) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2267 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2267[] = "P615\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6150x2267;
/** @}*/



/******************************************************************************
*                    Object 0x2268 : P616
******************************************************************************/
/**
* \addtogroup 0x2268 0x2268 | P616
* @{
* \brief Object 0x2268 (P616) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2268 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2268[] = "P616\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6160x2268;
/** @}*/



/******************************************************************************
*                    Object 0x226E : P622
******************************************************************************/
/**
* \addtogroup 0x226E 0x226E | P622
* @{
* \brief Object 0x226E (P622) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x226E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x226E[] = "P622\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6220x226E;
/** @}*/



/******************************************************************************
*                    Object 0x226F : P623
******************************************************************************/
/**
* \addtogroup 0x226F 0x226F | P623
* @{
* \brief Object 0x226F (P623) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x226F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x226F[] = "P623\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6230x226F;
/** @}*/



/******************************************************************************
*                    Object 0x2280 : P640
******************************************************************************/
/**
* \addtogroup 0x2280 0x2280 | P640
* @{
* \brief Object 0x2280 (P640) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2280 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2280[] = "P640\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6400x2280;
/** @}*/



/******************************************************************************
*                    Object 0x2281 : P641
******************************************************************************/
/**
* \addtogroup 0x2281 0x2281 | P641
* @{
* \brief Object 0x2281 (P641) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2281 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2281[] = "P641\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6410x2281;
/** @}*/



/******************************************************************************
*                    Object 0x2291 : P657
******************************************************************************/
/**
* \addtogroup 0x2291 0x2291 | P657
* @{
* \brief Object 0x2291 (P657) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2291 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2291[] = "P657\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6570x2291;
/** @}*/



/******************************************************************************
*                    Object 0x2292 : P658
******************************************************************************/
/**
* \addtogroup 0x2292 0x2292 | P658
* @{
* \brief Object 0x2292 (P658) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2292 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2292[] = "P658\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6580x2292;
/** @}*/



/******************************************************************************
*                    Object 0x2293 : P659
******************************************************************************/
/**
* \addtogroup 0x2293 0x2293 | P659
* @{
* \brief Object 0x2293 (P659) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2293 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2293[] = "P659\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6590x2293;
/** @}*/



/******************************************************************************
*                    Object 0x2294 : P660
******************************************************************************/
/**
* \addtogroup 0x2294 0x2294 | P660
* @{
* \brief Object 0x2294 (P660) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2294 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2294[] = "P660\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6600x2294;
/** @}*/



/******************************************************************************
*                    Object 0x2295 : P661
******************************************************************************/
/**
* \addtogroup 0x2295 0x2295 | P661
* @{
* \brief Object 0x2295 (P661) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2295 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2295[] = "P661\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6610x2295;
/** @}*/



/******************************************************************************
*                    Object 0x2296 : P662
******************************************************************************/
/**
* \addtogroup 0x2296 0x2296 | P662
* @{
* \brief Object 0x2296 (P662) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2296 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2296[] = "P662\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6620x2296;
/** @}*/



/******************************************************************************
*                    Object 0x2297 : P663
******************************************************************************/
/**
* \addtogroup 0x2297 0x2297 | P663
* @{
* \brief Object 0x2297 (P663) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2297 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2297[] = "P663\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6630x2297;
/** @}*/



/******************************************************************************
*                    Object 0x2298 : P664
******************************************************************************/
/**
* \addtogroup 0x2298 0x2298 | P664
* @{
* \brief Object 0x2298 (P664) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2298 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2298[] = "P664\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6640x2298;
/** @}*/



/******************************************************************************
*                    Object 0x2299 : P665
******************************************************************************/
/**
* \addtogroup 0x2299 0x2299 | P665
* @{
* \brief Object 0x2299 (P665) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2299 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2299[] = "P665\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P6650x2299;
/** @}*/



/******************************************************************************
*                    Object 0x22C6 : P710
******************************************************************************/
/**
* \addtogroup 0x22C6 0x22C6 | P710
* @{
* \brief Object 0x22C6 (P710) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x22C6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x22C6[] = "P710\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P7100x22C6;
/** @}*/



/******************************************************************************
*                    Object 0x22D1 : P721
******************************************************************************/
/**
* \addtogroup 0x22D1 0x22D1 | P721
* @{
* \brief Object 0x22D1 (P721) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x22D1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x22D1[] = "P721\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P7210x22D1;
/** @}*/



/******************************************************************************
*                    Object 0x22D2 : P722
******************************************************************************/
/**
* \addtogroup 0x22D2 0x22D2 | P722
* @{
* \brief Object 0x22D2 (P722) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x22D2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x22D2[] = "P722\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P7220x22D2;
/** @}*/



/******************************************************************************
*                    Object 0x22D3 : P723
******************************************************************************/
/**
* \addtogroup 0x22D3 0x22D3 | P723
* @{
* \brief Object 0x22D3 (P723) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x22D3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x22D3[] = "P723\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P7230x22D3;
/** @}*/



/******************************************************************************
*                    Object 0x22D4 : P724
******************************************************************************/
/**
* \addtogroup 0x22D4 0x22D4 | P724
* @{
* \brief Object 0x22D4 (P724) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x22D4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x22D4[] = "P724\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P7240x22D4;
/** @}*/



/******************************************************************************
*                    Object 0x22DC : P732
******************************************************************************/
/**
* \addtogroup 0x22DC 0x22DC | P732
* @{
* \brief Object 0x22DC (P732) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x22DC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x22DC[] = "P732\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P7320x22DC;
/** @}*/



/******************************************************************************
*                    Object 0x2384 : P900
******************************************************************************/
/**
* \addtogroup 0x2384 0x2384 | P900
* @{
* \brief Object 0x2384 (P900) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2384 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2384[] = "P900\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9000x2384;
/** @}*/



/******************************************************************************
*                    Object 0x2385 : P901
******************************************************************************/
/**
* \addtogroup 0x2385 0x2385 | P901
* @{
* \brief Object 0x2385 (P901) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2385 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2385[] = "P901\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9010x2385;
/** @}*/



/******************************************************************************
*                    Object 0x2386 : P902
******************************************************************************/
/**
* \addtogroup 0x2386 0x2386 | P902
* @{
* \brief Object 0x2386 (P902) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2386 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2386[] = "P902\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9020x2386;
/** @}*/



/******************************************************************************
*                    Object 0x2387 : P903
******************************************************************************/
/**
* \addtogroup 0x2387 0x2387 | P903
* @{
* \brief Object 0x2387 (P903) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2387 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2387[] = "P903\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9030x2387;
/** @}*/



/******************************************************************************
*                    Object 0x2388 : P904
******************************************************************************/
/**
* \addtogroup 0x2388 0x2388 | P904
* @{
* \brief Object 0x2388 (P904) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2388 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2388[] = "P904\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9040x2388;
/** @}*/



/******************************************************************************
*                    Object 0x2389 : P905
******************************************************************************/
/**
* \addtogroup 0x2389 0x2389 | P905
* @{
* \brief Object 0x2389 (P905) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2389 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2389[] = "P905\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9050x2389;
/** @}*/



/******************************************************************************
*                    Object 0x238A : P906
******************************************************************************/
/**
* \addtogroup 0x238A 0x238A | P906
* @{
* \brief Object 0x238A (P906) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x238A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x238A[] = "P906\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9060x238A;
/** @}*/



/******************************************************************************
*                    Object 0x238B : P907
******************************************************************************/
/**
* \addtogroup 0x238B 0x238B | P907
* @{
* \brief Object 0x238B (P907) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x238B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x238B[] = "P907\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9070x238B;
/** @}*/



/******************************************************************************
*                    Object 0x238E : P910
******************************************************************************/
/**
* \addtogroup 0x238E 0x238E | P910
* @{
* \brief Object 0x238E (P910) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x238E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x238E[] = "P910\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9100x238E;
/** @}*/



/******************************************************************************
*                    Object 0x238F : P911
******************************************************************************/
/**
* \addtogroup 0x238F 0x238F | P911
* @{
* \brief Object 0x238F (P911) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x238F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x238F[] = "P911\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9110x238F;
/** @}*/



/******************************************************************************
*                    Object 0x2391 : P913
******************************************************************************/
/**
* \addtogroup 0x2391 0x2391 | P913
* @{
* \brief Object 0x2391 (P913) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2391 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2391[] = "P913\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9130x2391;
/** @}*/



/******************************************************************************
*                    Object 0x2392 : P914
******************************************************************************/
/**
* \addtogroup 0x2392 0x2392 | P914
* @{
* \brief Object 0x2392 (P914) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2392 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2392[] = "P914\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9140x2392;
/** @}*/



/******************************************************************************
*                    Object 0x2393 : P915
******************************************************************************/
/**
* \addtogroup 0x2393 0x2393 | P915
* @{
* \brief Object 0x2393 (P915) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2393 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2393[] = "P915\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9150x2393;
/** @}*/



/******************************************************************************
*                    Object 0x2394 : P916
******************************************************************************/
/**
* \addtogroup 0x2394 0x2394 | P916
* @{
* \brief Object 0x2394 (P916) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2394 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2394[] = "P916\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9160x2394;
/** @}*/



/******************************************************************************
*                    Object 0x2395 : P917
******************************************************************************/
/**
* \addtogroup 0x2395 0x2395 | P917
* @{
* \brief Object 0x2395 (P917) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2395 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2395[] = "P917\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9170x2395;
/** @}*/



/******************************************************************************
*                    Object 0x2396 : P918
******************************************************************************/
/**
* \addtogroup 0x2396 0x2396 | P918
* @{
* \brief Object 0x2396 (P918) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2396 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2396[] = "P918\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9180x2396;
/** @}*/



/******************************************************************************
*                    Object 0x2397 : P919
******************************************************************************/
/**
* \addtogroup 0x2397 0x2397 | P919
* @{
* \brief Object 0x2397 (P919) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2397 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2397[] = "P919\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9190x2397;
/** @}*/



/******************************************************************************
*                    Object 0x2398 : P920
******************************************************************************/
/**
* \addtogroup 0x2398 0x2398 | P920
* @{
* \brief Object 0x2398 (P920) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2398 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2398[] = "P920\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9200x2398;
/** @}*/



/******************************************************************************
*                    Object 0x2399 : P921
******************************************************************************/
/**
* \addtogroup 0x2399 0x2399 | P921
* @{
* \brief Object 0x2399 (P921) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2399 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2399[] = "P921\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9210x2399;
/** @}*/



/******************************************************************************
*                    Object 0x239A : P922
******************************************************************************/
/**
* \addtogroup 0x239A 0x239A | P922
* @{
* \brief Object 0x239A (P922) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x239A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x239A[] = "P922\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9220x239A;
/** @}*/



/******************************************************************************
*                    Object 0x239B : P923
******************************************************************************/
/**
* \addtogroup 0x239B 0x239B | P923
* @{
* \brief Object 0x239B (P923) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x239B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x239B[] = "P923\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9230x239B;
/** @}*/



/******************************************************************************
*                    Object 0x239C : P924
******************************************************************************/
/**
* \addtogroup 0x239C 0x239C | P924
* @{
* \brief Object 0x239C (P924) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x239C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x239C[] = "P924\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9240x239C;
/** @}*/



/******************************************************************************
*                    Object 0x239D : P925
******************************************************************************/
/**
* \addtogroup 0x239D 0x239D | P925
* @{
* \brief Object 0x239D (P925) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x239D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x239D[] = "P925\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9250x239D;
/** @}*/



/******************************************************************************
*                    Object 0x239E : P926
******************************************************************************/
/**
* \addtogroup 0x239E 0x239E | P926
* @{
* \brief Object 0x239E (P926) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x239E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x239E[] = "P926\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9260x239E;
/** @}*/



/******************************************************************************
*                    Object 0x239F : P927
******************************************************************************/
/**
* \addtogroup 0x239F 0x239F | P927
* @{
* \brief Object 0x239F (P927) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x239F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x239F[] = "P927\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9270x239F;
/** @}*/



/******************************************************************************
*                    Object 0x23A0 : P928
******************************************************************************/
/**
* \addtogroup 0x23A0 0x23A0 | P928
* @{
* \brief Object 0x23A0 (P928) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23A0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23A0[] = "P928\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9280x23A0;
/** @}*/



/******************************************************************************
*                    Object 0x23A1 : P929
******************************************************************************/
/**
* \addtogroup 0x23A1 0x23A1 | P929
* @{
* \brief Object 0x23A1 (P929) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23A1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23A1[] = "P929\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9290x23A1;
/** @}*/



/******************************************************************************
*                    Object 0x23A2 : P930
******************************************************************************/
/**
* \addtogroup 0x23A2 0x23A2 | P930
* @{
* \brief Object 0x23A2 (P930) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23A2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23A2[] = "P930\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9300x23A2;
/** @}*/



/******************************************************************************
*                    Object 0x23B8 : P952
******************************************************************************/
/**
* \addtogroup 0x23B8 0x23B8 | P952
* @{
* \brief Object 0x23B8 (P952) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23B8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23B8[] = "P952\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9520x23B8;
/** @}*/



/******************************************************************************
*                    Object 0x23B9 : P953
******************************************************************************/
/**
* \addtogroup 0x23B9 0x23B9 | P953
* @{
* \brief Object 0x23B9 (P953) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23B9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23B9[] = "P953\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9530x23B9;
/** @}*/



/******************************************************************************
*                    Object 0x23BA : P954
******************************************************************************/
/**
* \addtogroup 0x23BA 0x23BA | P954
* @{
* \brief Object 0x23BA (P954) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23BA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23BA[] = "P954\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9540x23BA;
/** @}*/



/******************************************************************************
*                    Object 0x23BB : P955
******************************************************************************/
/**
* \addtogroup 0x23BB 0x23BB | P955
* @{
* \brief Object 0x23BB (P955) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23BB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23BB[] = "P955\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9550x23BB;
/** @}*/



/******************************************************************************
*                    Object 0x23BC : P956
******************************************************************************/
/**
* \addtogroup 0x23BC 0x23BC | P956
* @{
* \brief Object 0x23BC (P956) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23BC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23BC[] = "P956\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9560x23BC;
/** @}*/



/******************************************************************************
*                    Object 0x23BD : P957
******************************************************************************/
/**
* \addtogroup 0x23BD 0x23BD | P957
* @{
* \brief Object 0x23BD (P957) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23BD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23BD[] = "P957\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9570x23BD;
/** @}*/



/******************************************************************************
*                    Object 0x23BE : P958
******************************************************************************/
/**
* \addtogroup 0x23BE 0x23BE | P958
* @{
* \brief Object 0x23BE (P958) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23BE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23BE[] = "P958\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9580x23BE;
/** @}*/



/******************************************************************************
*                    Object 0x23BF : P959
******************************************************************************/
/**
* \addtogroup 0x23BF 0x23BF | P959
* @{
* \brief Object 0x23BF (P959) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23BF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23BF[] = "P959\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9590x23BF;
/** @}*/



/******************************************************************************
*                    Object 0x23C0 : P960
******************************************************************************/
/**
* \addtogroup 0x23C0 0x23C0 | P960
* @{
* \brief Object 0x23C0 (P960) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23C0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23C0[] = "P960\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9600x23C0;
/** @}*/



/******************************************************************************
*                    Object 0x23C1 : P961
******************************************************************************/
/**
* \addtogroup 0x23C1 0x23C1 | P961
* @{
* \brief Object 0x23C1 (P961) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23C1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23C1[] = "P961\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9610x23C1;
/** @}*/



/******************************************************************************
*                    Object 0x23C2 : P962
******************************************************************************/
/**
* \addtogroup 0x23C2 0x23C2 | P962
* @{
* \brief Object 0x23C2 (P962) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23C2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23C2[] = "P962\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9620x23C2;
/** @}*/



/******************************************************************************
*                    Object 0x23C3 : P963
******************************************************************************/
/**
* \addtogroup 0x23C3 0x23C3 | P963
* @{
* \brief Object 0x23C3 (P963) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23C3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23C3[] = "P963\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9630x23C3;
/** @}*/



/******************************************************************************
*                    Object 0x23C4 : P964
******************************************************************************/
/**
* \addtogroup 0x23C4 0x23C4 | P964
* @{
* \brief Object 0x23C4 (P964) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23C4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23C4[] = "P964\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9640x23C4;
/** @}*/



/******************************************************************************
*                    Object 0x23C5 : P965
******************************************************************************/
/**
* \addtogroup 0x23C5 0x23C5 | P965
* @{
* \brief Object 0x23C5 (P965) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23C5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23C5[] = "P965\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9650x23C5;
/** @}*/



/******************************************************************************
*                    Object 0x23C6 : P966
******************************************************************************/
/**
* \addtogroup 0x23C6 0x23C6 | P966
* @{
* \brief Object 0x23C6 (P966) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23C6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23C6[] = "P966\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9660x23C6;
/** @}*/



/******************************************************************************
*                    Object 0x23C9 : P969
******************************************************************************/
/**
* \addtogroup 0x23C9 0x23C9 | P969
* @{
* \brief Object 0x23C9 (P969) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23C9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23C9[] = "P969\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9690x23C9;
/** @}*/



/******************************************************************************
*                    Object 0x23CA : P970
******************************************************************************/
/**
* \addtogroup 0x23CA 0x23CA | P970
* @{
* \brief Object 0x23CA (P970) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23CA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23CA[] = "P970\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9700x23CA;
/** @}*/



/******************************************************************************
*                    Object 0x23CB : P971
******************************************************************************/
/**
* \addtogroup 0x23CB 0x23CB | P971
* @{
* \brief Object 0x23CB (P971) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23CB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23CB[] = "P971\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9710x23CB;
/** @}*/



/******************************************************************************
*                    Object 0x23CC : P972
******************************************************************************/
/**
* \addtogroup 0x23CC 0x23CC | P972
* @{
* \brief Object 0x23CC (P972) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23CC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23CC[] = "P972\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9720x23CC;
/** @}*/



/******************************************************************************
*                    Object 0x23CD : P973
******************************************************************************/
/**
* \addtogroup 0x23CD 0x23CD | P973
* @{
* \brief Object 0x23CD (P973) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23CD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23CD[] = "P973\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9730x23CD;
/** @}*/



/******************************************************************************
*                    Object 0x23CE : P974
******************************************************************************/
/**
* \addtogroup 0x23CE 0x23CE | P974
* @{
* \brief Object 0x23CE (P974) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23CE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23CE[] = "P974\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9740x23CE;
/** @}*/



/******************************************************************************
*                    Object 0x23CF : P975
******************************************************************************/
/**
* \addtogroup 0x23CF 0x23CF | P975
* @{
* \brief Object 0x23CF (P975) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23CF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23CF[] = "P975\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9750x23CF;
/** @}*/



/******************************************************************************
*                    Object 0x23D0 : P976
******************************************************************************/
/**
* \addtogroup 0x23D0 0x23D0 | P976
* @{
* \brief Object 0x23D0 (P976) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23D0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23D0[] = "P976\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9760x23D0;
/** @}*/



/******************************************************************************
*                    Object 0x23D1 : P977
******************************************************************************/
/**
* \addtogroup 0x23D1 0x23D1 | P977
* @{
* \brief Object 0x23D1 (P977) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23D1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23D1[] = "P977\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9770x23D1;
/** @}*/



/******************************************************************************
*                    Object 0x23E7 : P999
******************************************************************************/
/**
* \addtogroup 0x23E7 0x23E7 | P999
* @{
* \brief Object 0x23E7 (P999) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23E7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23E7[] = "P999\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P9990x23E7;
/** @}*/



/******************************************************************************
*                    Object 0x23E8 : P1000
******************************************************************************/
/**
* \addtogroup 0x23E8 0x23E8 | P1000
* @{
* \brief Object 0x23E8 (P1000) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23E8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23E8[] = "P1000\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10000x23E8;
/** @}*/



/******************************************************************************
*                    Object 0x23E9 : P1001
******************************************************************************/
/**
* \addtogroup 0x23E9 0x23E9 | P1001
* @{
* \brief Object 0x23E9 (P1001) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23E9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23E9[] = "P1001\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10010x23E9;
/** @}*/



/******************************************************************************
*                    Object 0x23EA : P1002
******************************************************************************/
/**
* \addtogroup 0x23EA 0x23EA | P1002
* @{
* \brief Object 0x23EA (P1002) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23EA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23EA[] = "P1002\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10020x23EA;
/** @}*/



/******************************************************************************
*                    Object 0x23EB : P1003
******************************************************************************/
/**
* \addtogroup 0x23EB 0x23EB | P1003
* @{
* \brief Object 0x23EB (P1003) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23EB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23EB[] = "P1003\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10030x23EB;
/** @}*/



/******************************************************************************
*                    Object 0x23EC : P1004
******************************************************************************/
/**
* \addtogroup 0x23EC 0x23EC | P1004
* @{
* \brief Object 0x23EC (P1004) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23EC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23EC[] = "P1004\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10040x23EC;
/** @}*/



/******************************************************************************
*                    Object 0x23ED : P1005
******************************************************************************/
/**
* \addtogroup 0x23ED 0x23ED | P1005
* @{
* \brief Object 0x23ED (P1005) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23ED = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23ED[] = "P1005\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10050x23ED;
/** @}*/



/******************************************************************************
*                    Object 0x23EE : P1006
******************************************************************************/
/**
* \addtogroup 0x23EE 0x23EE | P1006
* @{
* \brief Object 0x23EE (P1006) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23EE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23EE[] = "P1006\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10060x23EE;
/** @}*/



/******************************************************************************
*                    Object 0x23EF : P1007
******************************************************************************/
/**
* \addtogroup 0x23EF 0x23EF | P1007
* @{
* \brief Object 0x23EF (P1007) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23EF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23EF[] = "P1007\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10070x23EF;
/** @}*/



/******************************************************************************
*                    Object 0x23F0 : P1008
******************************************************************************/
/**
* \addtogroup 0x23F0 0x23F0 | P1008
* @{
* \brief Object 0x23F0 (P1008) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F0[] = "P1008\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10080x23F0;
/** @}*/



/******************************************************************************
*                    Object 0x23F1 : P1009
******************************************************************************/
/**
* \addtogroup 0x23F1 0x23F1 | P1009
* @{
* \brief Object 0x23F1 (P1009) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F1[] = "P1009\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10090x23F1;
/** @}*/



/******************************************************************************
*                    Object 0x23F2 : P1010
******************************************************************************/
/**
* \addtogroup 0x23F2 0x23F2 | P1010
* @{
* \brief Object 0x23F2 (P1010) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F2[] = "P1010\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10100x23F2;
/** @}*/



/******************************************************************************
*                    Object 0x23F3 : P1011
******************************************************************************/
/**
* \addtogroup 0x23F3 0x23F3 | P1011
* @{
* \brief Object 0x23F3 (P1011) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F3[] = "P1011\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10110x23F3;
/** @}*/



/******************************************************************************
*                    Object 0x23F4 : P1012
******************************************************************************/
/**
* \addtogroup 0x23F4 0x23F4 | P1012
* @{
* \brief Object 0x23F4 (P1012) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F4[] = "P1012\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10120x23F4;
/** @}*/



/******************************************************************************
*                    Object 0x23F5 : P1013
******************************************************************************/
/**
* \addtogroup 0x23F5 0x23F5 | P1013
* @{
* \brief Object 0x23F5 (P1013) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F5[] = "P1013\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10130x23F5;
/** @}*/



/******************************************************************************
*                    Object 0x23F6 : P1014
******************************************************************************/
/**
* \addtogroup 0x23F6 0x23F6 | P1014
* @{
* \brief Object 0x23F6 (P1014) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F6[] = "P1014\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10140x23F6;
/** @}*/



/******************************************************************************
*                    Object 0x23F7 : P1015
******************************************************************************/
/**
* \addtogroup 0x23F7 0x23F7 | P1015
* @{
* \brief Object 0x23F7 (P1015) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F7[] = "P1015\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10150x23F7;
/** @}*/



/******************************************************************************
*                    Object 0x23F8 : P1016
******************************************************************************/
/**
* \addtogroup 0x23F8 0x23F8 | P1016
* @{
* \brief Object 0x23F8 (P1016) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F8[] = "P1016\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10160x23F8;
/** @}*/



/******************************************************************************
*                    Object 0x23F9 : P1017
******************************************************************************/
/**
* \addtogroup 0x23F9 0x23F9 | P1017
* @{
* \brief Object 0x23F9 (P1017) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23F9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23F9[] = "P1017\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10170x23F9;
/** @}*/



/******************************************************************************
*                    Object 0x23FA : P1018
******************************************************************************/
/**
* \addtogroup 0x23FA 0x23FA | P1018
* @{
* \brief Object 0x23FA (P1018) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23FA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23FA[] = "P1018\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10180x23FA;
/** @}*/



/******************************************************************************
*                    Object 0x23FB : P1019
******************************************************************************/
/**
* \addtogroup 0x23FB 0x23FB | P1019
* @{
* \brief Object 0x23FB (P1019) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23FB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23FB[] = "P1019\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10190x23FB;
/** @}*/



/******************************************************************************
*                    Object 0x23FC : P1020
******************************************************************************/
/**
* \addtogroup 0x23FC 0x23FC | P1020
* @{
* \brief Object 0x23FC (P1020) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23FC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23FC[] = "P1020\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10200x23FC;
/** @}*/



/******************************************************************************
*                    Object 0x23FD : P1021
******************************************************************************/
/**
* \addtogroup 0x23FD 0x23FD | P1021
* @{
* \brief Object 0x23FD (P1021) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23FD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23FD[] = "P1021\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10210x23FD;
/** @}*/



/******************************************************************************
*                    Object 0x23FE : P1022
******************************************************************************/
/**
* \addtogroup 0x23FE 0x23FE | P1022
* @{
* \brief Object 0x23FE (P1022) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23FE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23FE[] = "P1022\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10220x23FE;
/** @}*/



/******************************************************************************
*                    Object 0x23FF : P1023
******************************************************************************/
/**
* \addtogroup 0x23FF 0x23FF | P1023
* @{
* \brief Object 0x23FF (P1023) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x23FF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x23FF[] = "P1023\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10230x23FF;
/** @}*/



/******************************************************************************
*                    Object 0x2401 : P1025
******************************************************************************/
/**
* \addtogroup 0x2401 0x2401 | P1025
* @{
* \brief Object 0x2401 (P1025) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2401 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2401[] = "P1025\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10250x2401;
/** @}*/



/******************************************************************************
*                    Object 0x2402 : P1026
******************************************************************************/
/**
* \addtogroup 0x2402 0x2402 | P1026
* @{
* \brief Object 0x2402 (P1026) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2402 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2402[] = "P1026\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10260x2402;
/** @}*/



/******************************************************************************
*                    Object 0x2403 : P1027
******************************************************************************/
/**
* \addtogroup 0x2403 0x2403 | P1027
* @{
* \brief Object 0x2403 (P1027) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2403 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2403[] = "P1027\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10270x2403;
/** @}*/



/******************************************************************************
*                    Object 0x2405 : P1029
******************************************************************************/
/**
* \addtogroup 0x2405 0x2405 | P1029
* @{
* \brief Object 0x2405 (P1029) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2405 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2405[] = "P1029\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10290x2405;
/** @}*/



/******************************************************************************
*                    Object 0x2406 : P1030
******************************************************************************/
/**
* \addtogroup 0x2406 0x2406 | P1030
* @{
* \brief Object 0x2406 (P1030) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2406 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2406[] = "P1030\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10300x2406;
/** @}*/



/******************************************************************************
*                    Object 0x2407 : P1031
******************************************************************************/
/**
* \addtogroup 0x2407 0x2407 | P1031
* @{
* \brief Object 0x2407 (P1031) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2407 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2407[] = "P1031\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10310x2407;
/** @}*/



/******************************************************************************
*                    Object 0x2408 : P1032
******************************************************************************/
/**
* \addtogroup 0x2408 0x2408 | P1032
* @{
* \brief Object 0x2408 (P1032) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2408 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2408[] = "P1032\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10320x2408;
/** @}*/



/******************************************************************************
*                    Object 0x2409 : P1033
******************************************************************************/
/**
* \addtogroup 0x2409 0x2409 | P1033
* @{
* \brief Object 0x2409 (P1033) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2409 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2409[] = "P1033\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10330x2409;
/** @}*/



/******************************************************************************
*                    Object 0x240A : P1034
******************************************************************************/
/**
* \addtogroup 0x240A 0x240A | P1034
* @{
* \brief Object 0x240A (P1034) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x240A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x240A[] = "P1034\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10340x240A;
/** @}*/



/******************************************************************************
*                    Object 0x240B : P1035
******************************************************************************/
/**
* \addtogroup 0x240B 0x240B | P1035
* @{
* \brief Object 0x240B (P1035) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x240B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x240B[] = "P1035\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10350x240B;
/** @}*/



/******************************************************************************
*                    Object 0x240C : P1036
******************************************************************************/
/**
* \addtogroup 0x240C 0x240C | P1036
* @{
* \brief Object 0x240C (P1036) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x240C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x240C[] = "P1036\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10360x240C;
/** @}*/



/******************************************************************************
*                    Object 0x240E : P1038
******************************************************************************/
/**
* \addtogroup 0x240E 0x240E | P1038
* @{
* \brief Object 0x240E (P1038) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x240E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x240E[] = "P1038\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10380x240E;
/** @}*/



/******************************************************************************
*                    Object 0x2410 : P1040
******************************************************************************/
/**
* \addtogroup 0x2410 0x2410 | P1040
* @{
* \brief Object 0x2410 (P1040) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2410 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2410[] = "P1040\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10400x2410;
/** @}*/



/******************************************************************************
*                    Object 0x2411 : P1041
******************************************************************************/
/**
* \addtogroup 0x2411 0x2411 | P1041
* @{
* \brief Object 0x2411 (P1041) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2411 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2411[] = "P1041\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10410x2411;
/** @}*/



/******************************************************************************
*                    Object 0x2412 : P1042
******************************************************************************/
/**
* \addtogroup 0x2412 0x2412 | P1042
* @{
* \brief Object 0x2412 (P1042) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2412 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2412[] = "P1042\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10420x2412;
/** @}*/



/******************************************************************************
*                    Object 0x2413 : P1043
******************************************************************************/
/**
* \addtogroup 0x2413 0x2413 | P1043
* @{
* \brief Object 0x2413 (P1043) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2413 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2413[] = "P1043\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10430x2413;
/** @}*/



/******************************************************************************
*                    Object 0x2414 : P1044
******************************************************************************/
/**
* \addtogroup 0x2414 0x2414 | P1044
* @{
* \brief Object 0x2414 (P1044) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2414 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2414[] = "P1044\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10440x2414;
/** @}*/



/******************************************************************************
*                    Object 0x2417 : P1047
******************************************************************************/
/**
* \addtogroup 0x2417 0x2417 | P1047
* @{
* \brief Object 0x2417 (P1047) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2417 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2417[] = "P1047\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10470x2417;
/** @}*/



/******************************************************************************
*                    Object 0x2418 : P1048
******************************************************************************/
/**
* \addtogroup 0x2418 0x2418 | P1048
* @{
* \brief Object 0x2418 (P1048) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2418 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2418[] = "P1048\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10480x2418;
/** @}*/



/******************************************************************************
*                    Object 0x2419 : P1049
******************************************************************************/
/**
* \addtogroup 0x2419 0x2419 | P1049
* @{
* \brief Object 0x2419 (P1049) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2419 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2419[] = "P1049\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10490x2419;
/** @}*/



/******************************************************************************
*                    Object 0x241A : P1050
******************************************************************************/
/**
* \addtogroup 0x241A 0x241A | P1050
* @{
* \brief Object 0x241A (P1050) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x241A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x241A[] = "P1050\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10500x241A;
/** @}*/



/******************************************************************************
*                    Object 0x241B : P1051
******************************************************************************/
/**
* \addtogroup 0x241B 0x241B | P1051
* @{
* \brief Object 0x241B (P1051) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x241B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x241B[] = "P1051\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10510x241B;
/** @}*/



/******************************************************************************
*                    Object 0x241C : P1052
******************************************************************************/
/**
* \addtogroup 0x241C 0x241C | P1052
* @{
* \brief Object 0x241C (P1052) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x241C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x241C[] = "P1052\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10520x241C;
/** @}*/



/******************************************************************************
*                    Object 0x241D : P1053
******************************************************************************/
/**
* \addtogroup 0x241D 0x241D | P1053
* @{
* \brief Object 0x241D (P1053) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x241D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x241D[] = "P1053\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10530x241D;
/** @}*/



/******************************************************************************
*                    Object 0x241E : P1054
******************************************************************************/
/**
* \addtogroup 0x241E 0x241E | P1054
* @{
* \brief Object 0x241E (P1054) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x241E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x241E[] = "P1054\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10540x241E;
/** @}*/



/******************************************************************************
*                    Object 0x241F : P1055
******************************************************************************/
/**
* \addtogroup 0x241F 0x241F | P1055
* @{
* \brief Object 0x241F (P1055) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x241F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x241F[] = "P1055\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10550x241F;
/** @}*/



/******************************************************************************
*                    Object 0x2424 : P1060
******************************************************************************/
/**
* \addtogroup 0x2424 0x2424 | P1060
* @{
* \brief Object 0x2424 (P1060) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2424 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2424[] = "P1060\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10600x2424;
/** @}*/



/******************************************************************************
*                    Object 0x2425 : P1061
******************************************************************************/
/**
* \addtogroup 0x2425 0x2425 | P1061
* @{
* \brief Object 0x2425 (P1061) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2425 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2425[] = "P1061\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10610x2425;
/** @}*/



/******************************************************************************
*                    Object 0x2426 : P1062
******************************************************************************/
/**
* \addtogroup 0x2426 0x2426 | P1062
* @{
* \brief Object 0x2426 (P1062) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2426 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2426[] = "P1062\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10620x2426;
/** @}*/



/******************************************************************************
*                    Object 0x2427 : P1063
******************************************************************************/
/**
* \addtogroup 0x2427 0x2427 | P1063
* @{
* \brief Object 0x2427 (P1063) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2427 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2427[] = "P1063\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10630x2427;
/** @}*/



/******************************************************************************
*                    Object 0x2428 : P1064
******************************************************************************/
/**
* \addtogroup 0x2428 0x2428 | P1064
* @{
* \brief Object 0x2428 (P1064) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2428 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2428[] = "P1064\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10640x2428;
/** @}*/



/******************************************************************************
*                    Object 0x2429 : P1065
******************************************************************************/
/**
* \addtogroup 0x2429 0x2429 | P1065
* @{
* \brief Object 0x2429 (P1065) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2429 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2429[] = "P1065\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10650x2429;
/** @}*/



/******************************************************************************
*                    Object 0x242A : P1066
******************************************************************************/
/**
* \addtogroup 0x242A 0x242A | P1066
* @{
* \brief Object 0x242A (P1066) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x242A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x242A[] = "P1066\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10660x242A;
/** @}*/



/******************************************************************************
*                    Object 0x242B : P1067
******************************************************************************/
/**
* \addtogroup 0x242B 0x242B | P1067
* @{
* \brief Object 0x242B (P1067) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x242B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x242B[] = "P1067\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10670x242B;
/** @}*/



/******************************************************************************
*                    Object 0x242E : P1070
******************************************************************************/
/**
* \addtogroup 0x242E 0x242E | P1070
* @{
* \brief Object 0x242E (P1070) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x242E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x242E[] = "P1070\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10700x242E;
/** @}*/



/******************************************************************************
*                    Object 0x2431 : P1073
******************************************************************************/
/**
* \addtogroup 0x2431 0x2431 | P1073
* @{
* \brief Object 0x2431 (P1073) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2431 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2431[] = "P1073\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10730x2431;
/** @}*/



/******************************************************************************
*                    Object 0x2432 : P1074
******************************************************************************/
/**
* \addtogroup 0x2432 0x2432 | P1074
* @{
* \brief Object 0x2432 (P1074) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2432 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2432[] = "P1074\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10740x2432;
/** @}*/



/******************************************************************************
*                    Object 0x2433 : P1075
******************************************************************************/
/**
* \addtogroup 0x2433 0x2433 | P1075
* @{
* \brief Object 0x2433 (P1075) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2433 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2433[] = "P1075\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10750x2433;
/** @}*/



/******************************************************************************
*                    Object 0x2434 : P1076
******************************************************************************/
/**
* \addtogroup 0x2434 0x2434 | P1076
* @{
* \brief Object 0x2434 (P1076) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2434 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2434[] = "P1076\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10760x2434;
/** @}*/



/******************************************************************************
*                    Object 0x2435 : P1077
******************************************************************************/
/**
* \addtogroup 0x2435 0x2435 | P1077
* @{
* \brief Object 0x2435 (P1077) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2435 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2435[] = "P1077\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10770x2435;
/** @}*/



/******************************************************************************
*                    Object 0x2436 : P1078
******************************************************************************/
/**
* \addtogroup 0x2436 0x2436 | P1078
* @{
* \brief Object 0x2436 (P1078) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2436 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2436[] = "P1078\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10780x2436;
/** @}*/



/******************************************************************************
*                    Object 0x2437 : P1079
******************************************************************************/
/**
* \addtogroup 0x2437 0x2437 | P1079
* @{
* \brief Object 0x2437 (P1079) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2437 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2437[] = "P1079\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10790x2437;
/** @}*/



/******************************************************************************
*                    Object 0x2438 : P1080
******************************************************************************/
/**
* \addtogroup 0x2438 0x2438 | P1080
* @{
* \brief Object 0x2438 (P1080) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2438 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2438[] = "P1080\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P10800x2438;
/** @}*/



/******************************************************************************
*                    Object 0x2452 : P1106
******************************************************************************/
/**
* \addtogroup 0x2452 0x2452 | P1106
* @{
* \brief Object 0x2452 (P1106) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2452 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2452[] = "P1106\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11060x2452;
/** @}*/



/******************************************************************************
*                    Object 0x2454 : P1108
******************************************************************************/
/**
* \addtogroup 0x2454 0x2454 | P1108
* @{
* \brief Object 0x2454 (P1108) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2454 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2454[] = "P1108\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11080x2454;
/** @}*/



/******************************************************************************
*                    Object 0x2455 : P1109
******************************************************************************/
/**
* \addtogroup 0x2455 0x2455 | P1109
* @{
* \brief Object 0x2455 (P1109) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2455 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2455[] = "P1109\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11090x2455;
/** @}*/



/******************************************************************************
*                    Object 0x2456 : P1110
******************************************************************************/
/**
* \addtogroup 0x2456 0x2456 | P1110
* @{
* \brief Object 0x2456 (P1110) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2456 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2456[] = "P1110\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11100x2456;
/** @}*/



/******************************************************************************
*                    Object 0x2457 : P1111
******************************************************************************/
/**
* \addtogroup 0x2457 0x2457 | P1111
* @{
* \brief Object 0x2457 (P1111) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2457 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2457[] = "P1111\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11110x2457;
/** @}*/



/******************************************************************************
*                    Object 0x2458 : P1112
******************************************************************************/
/**
* \addtogroup 0x2458 0x2458 | P1112
* @{
* \brief Object 0x2458 (P1112) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2458 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2458[] = "P1112\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11120x2458;
/** @}*/



/******************************************************************************
*                    Object 0x2460 : P1120
******************************************************************************/
/**
* \addtogroup 0x2460 0x2460 | P1120
* @{
* \brief Object 0x2460 (P1120) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2460 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2460[] = "P1120\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11200x2460;
/** @}*/



/******************************************************************************
*                    Object 0x2461 : P1121
******************************************************************************/
/**
* \addtogroup 0x2461 0x2461 | P1121
* @{
* \brief Object 0x2461 (P1121) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2461 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2461[] = "P1121\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11210x2461;
/** @}*/



/******************************************************************************
*                    Object 0x2462 : P1122
******************************************************************************/
/**
* \addtogroup 0x2462 0x2462 | P1122
* @{
* \brief Object 0x2462 (P1122) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2462 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2462[] = "P1122\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11220x2462;
/** @}*/



/******************************************************************************
*                    Object 0x2465 : P1125
******************************************************************************/
/**
* \addtogroup 0x2465 0x2465 | P1125
* @{
* \brief Object 0x2465 (P1125) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2465 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2465[] = "P1125\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11250x2465;
/** @}*/



/******************************************************************************
*                    Object 0x2466 : P1126
******************************************************************************/
/**
* \addtogroup 0x2466 0x2466 | P1126
* @{
* \brief Object 0x2466 (P1126) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2466 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2466[] = "P1126\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11260x2466;
/** @}*/



/******************************************************************************
*                    Object 0x2467 : P1127
******************************************************************************/
/**
* \addtogroup 0x2467 0x2467 | P1127
* @{
* \brief Object 0x2467 (P1127) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2467 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2467[] = "P1127\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11270x2467;
/** @}*/



/******************************************************************************
*                    Object 0x2468 : P1128
******************************************************************************/
/**
* \addtogroup 0x2468 0x2468 | P1128
* @{
* \brief Object 0x2468 (P1128) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2468 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2468[] = "P1128\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11280x2468;
/** @}*/



/******************************************************************************
*                    Object 0x2469 : P1129
******************************************************************************/
/**
* \addtogroup 0x2469 0x2469 | P1129
* @{
* \brief Object 0x2469 (P1129) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2469 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2469[] = "P1129\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11290x2469;
/** @}*/



/******************************************************************************
*                    Object 0x246A : P1130
******************************************************************************/
/**
* \addtogroup 0x246A 0x246A | P1130
* @{
* \brief Object 0x246A (P1130) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x246A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x246A[] = "P1130\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11300x246A;
/** @}*/



/******************************************************************************
*                    Object 0x246B : P1131
******************************************************************************/
/**
* \addtogroup 0x246B 0x246B | P1131
* @{
* \brief Object 0x246B (P1131) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x246B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x246B[] = "P1131\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11310x246B;
/** @}*/



/******************************************************************************
*                    Object 0x2480 : P1152
******************************************************************************/
/**
* \addtogroup 0x2480 0x2480 | P1152
* @{
* \brief Object 0x2480 (P1152) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2480 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2480[] = "P1152\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11520x2480;
/** @}*/



/******************************************************************************
*                    Object 0x2481 : P1153
******************************************************************************/
/**
* \addtogroup 0x2481 0x2481 | P1153
* @{
* \brief Object 0x2481 (P1153) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2481 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2481[] = "P1153\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11530x2481;
/** @}*/



/******************************************************************************
*                    Object 0x2482 : P1154
******************************************************************************/
/**
* \addtogroup 0x2482 0x2482 | P1154
* @{
* \brief Object 0x2482 (P1154) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2482 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2482[] = "P1154\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11540x2482;
/** @}*/



/******************************************************************************
*                    Object 0x2483 : P1155
******************************************************************************/
/**
* \addtogroup 0x2483 0x2483 | P1155
* @{
* \brief Object 0x2483 (P1155) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2483 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2483[] = "P1155\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11550x2483;
/** @}*/



/******************************************************************************
*                    Object 0x2486 : P1158
******************************************************************************/
/**
* \addtogroup 0x2486 0x2486 | P1158
* @{
* \brief Object 0x2486 (P1158) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2486 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2486[] = "P1158\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11580x2486;
/** @}*/



/******************************************************************************
*                    Object 0x2487 : P1159
******************************************************************************/
/**
* \addtogroup 0x2487 0x2487 | P1159
* @{
* \brief Object 0x2487 (P1159) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2487 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2487[] = "P1159\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11590x2487;
/** @}*/



/******************************************************************************
*                    Object 0x2488 : P1160
******************************************************************************/
/**
* \addtogroup 0x2488 0x2488 | P1160
* @{
* \brief Object 0x2488 (P1160) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2488 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2488[] = "P1160\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11600x2488;
/** @}*/



/******************************************************************************
*                    Object 0x2489 : P1161
******************************************************************************/
/**
* \addtogroup 0x2489 0x2489 | P1161
* @{
* \brief Object 0x2489 (P1161) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x2489 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x2489[] = "P1161\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11610x2489;
/** @}*/



/******************************************************************************
*                    Object 0x248A : P1162
******************************************************************************/
/**
* \addtogroup 0x248A 0x248A | P1162
* @{
* \brief Object 0x248A (P1162) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x248A = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x248A[] = "P1162\000\377";


/**
* \brief Object variable
*/
PROTO UINT32 P11620x248A;
/** @}*/



/******************************************************************************
*                    Object 0x248B : P1163
******************************************************************************/
/**
* \addtogroup 0x248B 0x248B | P1163
* @{
* \brief Object 0x248B (P1163) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x248B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x248B[] = "P1163\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11630x248B;
/** @}*/



/******************************************************************************
*                    Object 0x248C : P1164
******************************************************************************/
/**
* \addtogroup 0x248C 0x248C | P1164
* @{
* \brief Object 0x248C (P1164) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x248C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x248C[] = "P1164\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11640x248C;
/** @}*/



/******************************************************************************
*                    Object 0x248D : P1165
******************************************************************************/
/**
* \addtogroup 0x248D 0x248D | P1165
* @{
* \brief Object 0x248D (P1165) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x248D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x248D[] = "P1165\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11650x248D;
/** @}*/



/******************************************************************************
*                    Object 0x248E : P1166
******************************************************************************/
/**
* \addtogroup 0x248E 0x248E | P1166
* @{
* \brief Object 0x248E (P1166) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x248E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x248E[] = "P1166\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11660x248E;
/** @}*/



/******************************************************************************
*                    Object 0x248F : P1167
******************************************************************************/
/**
* \addtogroup 0x248F 0x248F | P1167
* @{
* \brief Object 0x248F (P1167) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x248F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x248F[] = "P1167\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P11670x248F;
/** @}*/



/******************************************************************************
*                    Object 0x24B0 : P1200
******************************************************************************/
/**
* \addtogroup 0x24B0 0x24B0 | P1200
* @{
* \brief Object 0x24B0 (P1200) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24B0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24B0[] = "P1200\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12000x24B0;
/** @}*/



/******************************************************************************
*                    Object 0x24B1 : P1201
******************************************************************************/
/**
* \addtogroup 0x24B1 0x24B1 | P1201
* @{
* \brief Object 0x24B1 (P1201) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24B1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24B1[] = "P1201\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12010x24B1;
/** @}*/



/******************************************************************************
*                    Object 0x24B2 : P1202
******************************************************************************/
/**
* \addtogroup 0x24B2 0x24B2 | P1202
* @{
* \brief Object 0x24B2 (P1202) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24B2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24B2[] = "P1202\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12020x24B2;
/** @}*/



/******************************************************************************
*                    Object 0x24B3 : P1203
******************************************************************************/
/**
* \addtogroup 0x24B3 0x24B3 | P1203
* @{
* \brief Object 0x24B3 (P1203) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24B3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24B3[] = "P1203\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12030x24B3;
/** @}*/



/******************************************************************************
*                    Object 0x24B4 : P1204
******************************************************************************/
/**
* \addtogroup 0x24B4 0x24B4 | P1204
* @{
* \brief Object 0x24B4 (P1204) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24B4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24B4[] = "P1204\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12040x24B4;
/** @}*/



/******************************************************************************
*                    Object 0x24B5 : P1205
******************************************************************************/
/**
* \addtogroup 0x24B5 0x24B5 | P1205
* @{
* \brief Object 0x24B5 (P1205) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24B5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24B5[] = "P1205\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12050x24B5;
/** @}*/



/******************************************************************************
*                    Object 0x24B6 : P1206
******************************************************************************/
/**
* \addtogroup 0x24B6 0x24B6 | P1206
* @{
* \brief Object 0x24B6 (P1206) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24B6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24B6[] = "P1206\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12060x24B6;
/** @}*/



/******************************************************************************
*                    Object 0x24B7 : P1207
******************************************************************************/
/**
* \addtogroup 0x24B7 0x24B7 | P1207
* @{
* \brief Object 0x24B7 (P1207) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24B7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24B7[] = "P1207\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12070x24B7;
/** @}*/



/******************************************************************************
*                    Object 0x24BA : P1210
******************************************************************************/
/**
* \addtogroup 0x24BA 0x24BA | P1210
* @{
* \brief Object 0x24BA (P1210) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24BA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24BA[] = "P1210\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12100x24BA;
/** @}*/



/******************************************************************************
*                    Object 0x24BB : P1211
******************************************************************************/
/**
* \addtogroup 0x24BB 0x24BB | P1211
* @{
* \brief Object 0x24BB (P1211) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24BB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24BB[] = "P1211\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12110x24BB;
/** @}*/



/******************************************************************************
*                    Object 0x24BC : P1212
******************************************************************************/
/**
* \addtogroup 0x24BC 0x24BC | P1212
* @{
* \brief Object 0x24BC (P1212) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24BC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24BC[] = "P1212\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12120x24BC;
/** @}*/



/******************************************************************************
*                    Object 0x24BD : P1213
******************************************************************************/
/**
* \addtogroup 0x24BD 0x24BD | P1213
* @{
* \brief Object 0x24BD (P1213) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24BD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24BD[] = "P1213\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12130x24BD;
/** @}*/



/******************************************************************************
*                    Object 0x24BE : P1214
******************************************************************************/
/**
* \addtogroup 0x24BE 0x24BE | P1214
* @{
* \brief Object 0x24BE (P1214) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24BE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24BE[] = "P1214\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12140x24BE;
/** @}*/



/******************************************************************************
*                    Object 0x24BF : P1215
******************************************************************************/
/**
* \addtogroup 0x24BF 0x24BF | P1215
* @{
* \brief Object 0x24BF (P1215) definition
*/

/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x24BF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x24BF[] = "P1215\000\377";


/**
* \brief Object variable
*/
PROTO INT32 P12150x24BF;
/** @}*/







extern TOBJECT    OBJMEM GDCV005ObjDic[] = {
/* Object 0x2000 */
{NULL , NULL ,  0x2000 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2000 , aName0x2000 , &P00x2000 , NULL , NULL , 0x0000 },
/* Object 0x2001 */
{NULL , NULL ,  0x2001 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2001 , aName0x2001 , &P10x2001 , NULL , NULL , 0x0000 },
/* Object 0x2002 */
{NULL , NULL ,  0x2002 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2002 , aName0x2002 , &P20x2002 , NULL , NULL , 0x0000 },
/* Object 0x2003 */
{NULL , NULL ,  0x2003 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2003 , aName0x2003 , &P30x2003 , NULL , NULL , 0x0000 },
/* Object 0x2004 */
{NULL , NULL ,  0x2004 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2004 , aName0x2004 , &P40x2004 , NULL , NULL , 0x0000 },
/* Object 0x2005 */
{NULL , NULL ,  0x2005 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2005 , aName0x2005 , &P50x2005 , NULL , NULL , 0x0000 },
/* Object 0x2006 */
{NULL , NULL ,  0x2006 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2006 , aName0x2006 , &P60x2006 , NULL , NULL , 0x0000 },
/* Object 0x2007 */
{NULL , NULL ,  0x2007 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2007 , aName0x2007 , &P70x2007 , NULL , NULL , 0x0000 },
/* Object 0x2008 */
{NULL , NULL ,  0x2008 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2008 , aName0x2008 , &P80x2008 , NULL , NULL , 0x0000 },
/* Object 0x2009 */
{NULL , NULL ,  0x2009 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2009 , aName0x2009 , &P90x2009 , NULL , NULL , 0x0000 },
/* Object 0x200A */
{NULL , NULL ,  0x200A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x200A , aName0x200A , &P100x200A , NULL , NULL , 0x0000 },
/* Object 0x200B */
{NULL , NULL ,  0x200B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x200B , aName0x200B , &P110x200B , NULL , NULL , 0x0000 },
/* Object 0x200C */
{NULL , NULL ,  0x200C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x200C , aName0x200C , &P120x200C , NULL , NULL , 0x0000 },
/* Object 0x200D */
{NULL , NULL ,  0x200D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x200D , aName0x200D , &P130x200D , NULL , NULL , 0x0000 },
/* Object 0x200E */
{NULL , NULL ,  0x200E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x200E , aName0x200E , &P140x200E , NULL , NULL , 0x0000 },
/* Object 0x200F */
{NULL , NULL ,  0x200F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x200F , aName0x200F , &P150x200F , NULL , NULL , 0x0000 },
/* Object 0x2010 */
{NULL , NULL ,  0x2010 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2010 , aName0x2010 , &P160x2010 , NULL , NULL , 0x0000 },
/* Object 0x2011 */
{NULL , NULL ,  0x2011 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2011 , aName0x2011 , &P170x2011 , NULL , NULL , 0x0000 },
/* Object 0x2012 */
{NULL , NULL ,  0x2012 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2012 , aName0x2012 , &P180x2012 , NULL , NULL , 0x0000 },
/* Object 0x2013 */
{NULL , NULL ,  0x2013 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2013 , aName0x2013 , &P190x2013 , NULL , NULL , 0x0000 },
/* Object 0x2014 */
{NULL , NULL ,  0x2014 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2014 , aName0x2014 , &P200x2014 , NULL , NULL , 0x0000 },
/* Object 0x2015 */
{NULL , NULL ,  0x2015 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2015 , aName0x2015 , &P210x2015 , NULL , NULL , 0x0000 },
/* Object 0x2016 */
{NULL , NULL ,  0x2016 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2016 , aName0x2016 , &P220x2016 , NULL , NULL , 0x0000 },
/* Object 0x2017 */
{NULL , NULL ,  0x2017 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2017 , aName0x2017 , &P230x2017 , NULL , NULL , 0x0000 },
/* Object 0x2018 */
{NULL , NULL ,  0x2018 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2018 , aName0x2018 , &P240x2018 , NULL , NULL , 0x0000 },
/* Object 0x2019 */
{NULL , NULL ,  0x2019 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2019 , aName0x2019 , &P250x2019 , NULL , NULL , 0x0000 },
/* Object 0x201A */
{NULL , NULL ,  0x201A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x201A , aName0x201A , &P260x201A , NULL , NULL , 0x0000 },
/* Object 0x201B */
{NULL , NULL ,  0x201B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x201B , aName0x201B , &P270x201B , NULL , NULL , 0x0000 },
/* Object 0x201C */
{NULL , NULL ,  0x201C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x201C , aName0x201C , &P280x201C , NULL , NULL , 0x0000 },
/* Object 0x201D */
{NULL , NULL ,  0x201D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x201D , aName0x201D , &P290x201D , NULL , NULL , 0x0000 },
/* Object 0x201E */
{NULL , NULL ,  0x201E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x201E , aName0x201E , &P300x201E , NULL , NULL , 0x0000 },
/* Object 0x201F */
{NULL , NULL ,  0x201F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x201F , aName0x201F , &P310x201F , NULL , NULL , 0x0000 },
/* Object 0x2020 */
{NULL , NULL ,  0x2020 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2020 , aName0x2020 , &P320x2020 , NULL , NULL , 0x0000 },
/* Object 0x2021 */
{NULL , NULL ,  0x2021 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2021 , aName0x2021 , &P330x2021 , NULL , NULL , 0x0000 },
/* Object 0x2022 */
{NULL , NULL ,  0x2022 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2022 , aName0x2022 , &P340x2022 , NULL , NULL , 0x0000 },
/* Object 0x2023 */
{NULL , NULL ,  0x2023 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2023 , aName0x2023 , &P350x2023 , NULL , NULL , 0x0000 },
/* Object 0x2024 */
{NULL , NULL ,  0x2024 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2024 , aName0x2024 , &P360x2024 , NULL , NULL , 0x0000 },
/* Object 0x2026 */
{NULL , NULL ,  0x2026 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2026 , aName0x2026 , &P380x2026 , NULL , NULL , 0x0000 },
/* Object 0x2027 */
{NULL , NULL ,  0x2027 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2027 , aName0x2027 , &P390x2027 , NULL , NULL , 0x0000 },
/* Object 0x2028 */
{NULL , NULL ,  0x2028 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2028 , aName0x2028 , &P400x2028 , NULL , NULL , 0x0000 },
/* Object 0x2029 */
{NULL , NULL ,  0x2029 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2029 , aName0x2029 , &P410x2029 , NULL , NULL , 0x0000 },
/* Object 0x202A */
{NULL , NULL ,  0x202A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x202A , aName0x202A , &P420x202A , NULL , NULL , 0x0000 },
/* Object 0x202B */
{NULL , NULL ,  0x202B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x202B , aName0x202B , &P430x202B , NULL , NULL , 0x0000 },
/* Object 0x202C */
{NULL , NULL ,  0x202C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x202C , aName0x202C , &P440x202C , NULL , NULL , 0x0000 },
/* Object 0x202D */
{NULL , NULL ,  0x202D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x202D , aName0x202D , &P450x202D , NULL , NULL , 0x0000 },
/* Object 0x202E */
{NULL , NULL ,  0x202E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x202E , aName0x202E , &P460x202E , NULL , NULL , 0x0000 },
/* Object 0x202F */
{NULL , NULL ,  0x202F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x202F , aName0x202F , &P470x202F , NULL , NULL , 0x0000 },
/* Object 0x2030 */
{NULL , NULL ,  0x2030 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2030 , aName0x2030 , &P480x2030 , NULL , NULL , 0x0000 },
/* Object 0x2031 */
{NULL , NULL ,  0x2031 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2031 , aName0x2031 , &P490x2031 , NULL , NULL , 0x0000 },
/* Object 0x2032 */
{NULL , NULL ,  0x2032 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2032 , aName0x2032 , &P500x2032 , NULL , NULL , 0x0000 },
/* Object 0x2033 */
{NULL , NULL ,  0x2033 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2033 , aName0x2033 , &P510x2033 , NULL , NULL , 0x0000 },
/* Object 0x2034 */
{NULL , NULL ,  0x2034 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2034 , aName0x2034 , &P520x2034 , NULL , NULL , 0x0000 },
/* Object 0x2035 */
{NULL , NULL ,  0x2035 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2035 , aName0x2035 , &P530x2035 , NULL , NULL , 0x0000 },
/* Object 0x2036 */
{NULL , NULL ,  0x2036 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2036 , aName0x2036 , &P540x2036 , NULL , NULL , 0x0000 },
/* Object 0x2037 */
{NULL , NULL ,  0x2037 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2037 , aName0x2037 , &P550x2037 , NULL , NULL , 0x0000 },
/* Object 0x2038 */
{NULL , NULL ,  0x2038 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2038 , aName0x2038 , &P560x2038 , NULL , NULL , 0x0000 },
/* Object 0x2039 */
{NULL , NULL ,  0x2039 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2039 , aName0x2039 , &P570x2039 , NULL , NULL , 0x0000 },
/* Object 0x203A */
{NULL , NULL ,  0x203A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x203A , aName0x203A , &P580x203A , NULL , NULL , 0x0000 },
/* Object 0x203B */
{NULL , NULL ,  0x203B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x203B , aName0x203B , &P590x203B , NULL , NULL , 0x0000 },
/* Object 0x203D */
{NULL , NULL ,  0x203D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x203D , aName0x203D , &P610x203D , NULL , NULL , 0x0000 },
/* Object 0x2046 */
{NULL , NULL ,  0x2046 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2046 , aName0x2046 , &P700x2046 , NULL , NULL , 0x0000 },
/* Object 0x2050 */
{NULL , NULL ,  0x2050 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2050 , aName0x2050 , &P800x2050 , NULL , NULL , 0x0000 },
/* Object 0x2051 */
{NULL , NULL ,  0x2051 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2051 , aName0x2051 , &P810x2051 , NULL , NULL , 0x0000 },
/* Object 0x2053 */
{NULL , NULL ,  0x2053 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2053 , aName0x2053 , &P830x2053 , NULL , NULL , 0x0000 },
/* Object 0x2054 */
{NULL , NULL ,  0x2054 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2054 , aName0x2054 , &P840x2054 , NULL , NULL , 0x0000 },
/* Object 0x2059 */
{NULL , NULL ,  0x2059 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2059 , aName0x2059 , &P890x2059 , NULL , NULL , 0x0000 },
/* Object 0x205A */
{NULL , NULL ,  0x205A , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x205A , aName0x205A , &P900x205A , NULL , NULL , 0x0000 },
/* Object 0x205B */
{NULL , NULL ,  0x205B , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x205B , aName0x205B , &P910x205B , NULL , NULL , 0x0000 },
/* Object 0x205C */
{NULL , NULL ,  0x205C , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x205C , aName0x205C , &P920x205C , NULL , NULL , 0x0000 },
/* Object 0x205D */
{NULL , NULL ,  0x205D , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x205D , aName0x205D , &P930x205D , NULL , NULL , 0x0000 },
/* Object 0x205E */
{NULL , NULL ,  0x205E , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x205E , aName0x205E , &P940x205E , NULL , NULL , 0x0000 },
/* Object 0x205F */
{NULL , NULL ,  0x205F , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x205F , aName0x205F , &P950x205F , NULL , NULL , 0x0000 },
/* Object 0x2061 */
{NULL , NULL ,  0x2061 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2061 , aName0x2061 , &P970x2061 , NULL , NULL , 0x0000 },
/* Object 0x2062 */
{NULL , NULL ,  0x2062 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2062 , aName0x2062 , &P980x2062 , NULL , NULL , 0x0000 },
/* Object 0x2063 */
{NULL , NULL ,  0x2063 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2063 , aName0x2063 , &P990x2063 , NULL , NULL , 0x0000 },
/* Object 0x2064 */
{NULL , NULL ,  0x2064 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2064 , aName0x2064 , &P1000x2064 , NULL , NULL , 0x0000 },
/* Object 0x2065 */
{NULL , NULL ,  0x2065 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2065 , aName0x2065 , &P1010x2065 , NULL , NULL , 0x0000 },
/* Object 0x2066 */
{NULL , NULL ,  0x2066 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2066 , aName0x2066 , &P1020x2066 , NULL , NULL , 0x0000 },
/* Object 0x2067 */
{NULL , NULL ,  0x2067 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2067 , aName0x2067 , &P1030x2067 , NULL , NULL , 0x0000 },
/* Object 0x2068 */
{NULL , NULL ,  0x2068 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2068 , aName0x2068 , &P1040x2068 , NULL , NULL , 0x0000 },
/* Object 0x2069 */
{NULL , NULL ,  0x2069 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2069 , aName0x2069 , &P1050x2069 , NULL , NULL , 0x0000 },
/* Object 0x206A */
{NULL , NULL ,  0x206A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x206A , aName0x206A , &P1060x206A , NULL , NULL , 0x0000 },
/* Object 0x206C */
{NULL , NULL ,  0x206C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x206C , aName0x206C , &P1080x206C , NULL , NULL , 0x0000 },
/* Object 0x206D */
{NULL , NULL ,  0x206D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x206D , aName0x206D , &P1090x206D , NULL , NULL , 0x0000 },
/* Object 0x206E */
{NULL , NULL ,  0x206E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x206E , aName0x206E , &P1100x206E , NULL , NULL , 0x0000 },
/* Object 0x206F */
{NULL , NULL ,  0x206F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x206F , aName0x206F , &P1110x206F , NULL , NULL , 0x0000 },
/* Object 0x2070 */
{NULL , NULL ,  0x2070 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2070 , aName0x2070 , &P1120x2070 , NULL , NULL , 0x0000 },
/* Object 0x2083 */
{NULL , NULL ,  0x2083 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2083 , aName0x2083 , &P1310x2083 , NULL , NULL , 0x0000 },
/* Object 0x2084 */
{NULL , NULL ,  0x2084 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2084 , aName0x2084 , &P1320x2084 , NULL , NULL , 0x0000 },
/* Object 0x208C */
{NULL , NULL ,  0x208C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x208C , aName0x208C , &P1400x208C , NULL , NULL , 0x0000 },
/* Object 0x2091 */
{NULL , NULL ,  0x2091 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2091 , aName0x2091 , &P1450x2091 , NULL , NULL , 0x0000 },
/* Object 0x2092 */
{NULL , NULL ,  0x2092 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2092 , aName0x2092 , &P1460x2092 , NULL , NULL , 0x0000 },
/* Object 0x2093 */
{NULL , NULL ,  0x2093 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2093 , aName0x2093 , &P1470x2093 , NULL , NULL , 0x0000 },
/* Object 0x2094 */
{NULL , NULL ,  0x2094 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2094 , aName0x2094 , &P1480x2094 , NULL , NULL , 0x0000 },
/* Object 0x2095 */
{NULL , NULL ,  0x2095 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2095 , aName0x2095 , &P1490x2095 , NULL , NULL , 0x0000 },
/* Object 0x2096 */
{NULL , NULL ,  0x2096 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2096 , aName0x2096 , &P1500x2096 , NULL , NULL , 0x0000 },
/* Object 0x2097 */
{NULL , NULL ,  0x2097 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2097 , aName0x2097 , &P1510x2097 , NULL , NULL , 0x0000 },
/* Object 0x2098 */
{NULL , NULL ,  0x2098 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2098 , aName0x2098 , &P1520x2098 , NULL , NULL , 0x0000 },
/* Object 0x2099 */
{NULL , NULL ,  0x2099 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2099 , aName0x2099 , &P1530x2099 , NULL , NULL , 0x0000 },
/* Object 0x209A */
{NULL , NULL ,  0x209A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x209A , aName0x209A , &P1540x209A , NULL , NULL , 0x0000 },
/* Object 0x209B */
{NULL , NULL ,  0x209B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x209B , aName0x209B , &P1550x209B , NULL , NULL , 0x0000 },
/* Object 0x209C */
{NULL , NULL ,  0x209C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x209C , aName0x209C , &P1560x209C , NULL , NULL , 0x0000 },
/* Object 0x209D */
{NULL , NULL ,  0x209D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x209D , aName0x209D , &P1570x209D , NULL , NULL , 0x0000 },
/* Object 0x209E */
{NULL , NULL ,  0x209E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x209E , aName0x209E , &P1580x209E , NULL , NULL , 0x0000 },
/* Object 0x209F */
{NULL , NULL ,  0x209F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x209F , aName0x209F , &P1590x209F , NULL , NULL , 0x0000 },
/* Object 0x20A0 */
{NULL , NULL ,  0x20A0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20A0 , aName0x20A0 , &P1600x20A0 , NULL , NULL , 0x0000 },
/* Object 0x20A5 */
{NULL , NULL ,  0x20A5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20A5 , aName0x20A5 , &P1650x20A5 , NULL , NULL , 0x0000 },
/* Object 0x20A6 */
{NULL , NULL ,  0x20A6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20A6 , aName0x20A6 , &P1660x20A6 , NULL , NULL , 0x0000 },
/* Object 0x20A7 */
{NULL , NULL ,  0x20A7 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20A7 , aName0x20A7 , &P1670x20A7 , NULL , NULL , 0x0000 },
/* Object 0x20A9 */
{NULL , NULL ,  0x20A9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20A9 , aName0x20A9 , &P1690x20A9 , NULL , NULL , 0x0000 },
/* Object 0x20AB */
{NULL , NULL ,  0x20AB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20AB , aName0x20AB , &P1710x20AB , NULL , NULL , 0x0000 },
/* Object 0x20AC */
{NULL , NULL ,  0x20AC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20AC , aName0x20AC , &P1720x20AC , NULL , NULL , 0x0000 },
/* Object 0x20AD */
{NULL , NULL ,  0x20AD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20AD , aName0x20AD , &P1730x20AD , NULL , NULL , 0x0000 },
/* Object 0x20AE */
{NULL , NULL ,  0x20AE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20AE , aName0x20AE , &P1740x20AE , NULL , NULL , 0x0000 },
/* Object 0x20AF */
{NULL , NULL ,  0x20AF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20AF , aName0x20AF , &P1750x20AF , NULL , NULL , 0x0000 },
/* Object 0x20B0 */
{NULL , NULL ,  0x20B0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20B0 , aName0x20B0 , &P1760x20B0 , NULL , NULL , 0x0000 },
/* Object 0x20B4 */
{NULL , NULL ,  0x20B4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20B4 , aName0x20B4 , &P1800x20B4 , NULL , NULL , 0x0000 },
/* Object 0x20B5 */
{NULL , NULL ,  0x20B5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20B5 , aName0x20B5 , &P1810x20B5 , NULL , NULL , 0x0000 },
/* Object 0x20B6 */
{NULL , NULL ,  0x20B6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20B6 , aName0x20B6 , &P1820x20B6 , NULL , NULL , 0x0000 },
/* Object 0x20B7 */
{NULL , NULL ,  0x20B7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20B7 , aName0x20B7 , &P1830x20B7 , NULL , NULL , 0x0000 },
/* Object 0x20B8 */
{NULL , NULL ,  0x20B8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20B8 , aName0x20B8 , &P1840x20B8 , NULL , NULL , 0x0000 },
/* Object 0x20B9 */
{NULL , NULL ,  0x20B9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20B9 , aName0x20B9 , &P1850x20B9 , NULL , NULL , 0x0000 },
/* Object 0x20BA */
{NULL , NULL ,  0x20BA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20BA , aName0x20BA , &P1860x20BA , NULL , NULL , 0x0000 },
/* Object 0x20BB */
{NULL , NULL ,  0x20BB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20BB , aName0x20BB , &P1870x20BB , NULL , NULL , 0x0000 },
/* Object 0x20BE */
{NULL , NULL ,  0x20BE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20BE , aName0x20BE , &P1900x20BE , NULL , NULL , 0x0000 },
/* Object 0x20BF */
{NULL , NULL ,  0x20BF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20BF , aName0x20BF , &P1910x20BF , NULL , NULL , 0x0000 },
/* Object 0x20C0 */
{NULL , NULL ,  0x20C0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20C0 , aName0x20C0 , &P1920x20C0 , NULL , NULL , 0x0000 },
/* Object 0x20C1 */
{NULL , NULL ,  0x20C1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20C1 , aName0x20C1 , &P1930x20C1 , NULL , NULL , 0x0000 },
/* Object 0x20C2 */
{NULL , NULL ,  0x20C2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20C2 , aName0x20C2 , &P1940x20C2 , NULL , NULL , 0x0000 },
/* Object 0x20C8 */
{NULL , NULL ,  0x20C8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20C8 , aName0x20C8 , &P2000x20C8 , NULL , NULL , 0x0000 },
/* Object 0x20C9 */
{NULL , NULL ,  0x20C9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20C9 , aName0x20C9 , &P2010x20C9 , NULL , NULL , 0x0000 },
/* Object 0x20CA */
{NULL , NULL ,  0x20CA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20CA , aName0x20CA , &P2020x20CA , NULL , NULL , 0x0000 },
/* Object 0x20CB */
{NULL , NULL ,  0x20CB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20CB , aName0x20CB , &P2030x20CB , NULL , NULL , 0x0000 },
/* Object 0x20CC */
{NULL , NULL ,  0x20CC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20CC , aName0x20CC , &P2040x20CC , NULL , NULL , 0x0000 },
/* Object 0x20CD */
{NULL , NULL ,  0x20CD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20CD , aName0x20CD , &P2050x20CD , NULL , NULL , 0x0000 },
/* Object 0x20CE */
{NULL , NULL ,  0x20CE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20CE , aName0x20CE , &P2060x20CE , NULL , NULL , 0x0000 },
/* Object 0x20CF */
{NULL , NULL ,  0x20CF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20CF , aName0x20CF , &P2070x20CF , NULL , NULL , 0x0000 },
/* Object 0x20D0 */
{NULL , NULL ,  0x20D0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20D0 , aName0x20D0 , &P2080x20D0 , NULL , NULL , 0x0000 },
/* Object 0x20D1 */
{NULL , NULL ,  0x20D1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20D1 , aName0x20D1 , &P2090x20D1 , NULL , NULL , 0x0000 },
/* Object 0x20D2 */
{NULL , NULL ,  0x20D2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20D2 , aName0x20D2 , &P2100x20D2 , NULL , NULL , 0x0000 },
/* Object 0x20D5 */
{NULL , NULL ,  0x20D5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20D5 , aName0x20D5 , &P2130x20D5 , NULL , NULL , 0x0000 },
/* Object 0x20D7 */
{NULL , NULL ,  0x20D7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20D7 , aName0x20D7 , &P2150x20D7 , NULL , NULL , 0x0000 },
/* Object 0x20D8 */
{NULL , NULL ,  0x20D8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20D8 , aName0x20D8 , &P2160x20D8 , NULL , NULL , 0x0000 },
/* Object 0x20D9 */
{NULL , NULL ,  0x20D9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20D9 , aName0x20D9 , &P2170x20D9 , NULL , NULL , 0x0000 },
/* Object 0x20DA */
{NULL , NULL ,  0x20DA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20DA , aName0x20DA , &P2180x20DA , NULL , NULL , 0x0000 },
/* Object 0x20DB */
{NULL , NULL ,  0x20DB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20DB , aName0x20DB , &P2190x20DB , NULL , NULL , 0x0000 },
/* Object 0x20DC */
{NULL , NULL ,  0x20DC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20DC , aName0x20DC , &P2200x20DC , NULL , NULL , 0x0000 },
/* Object 0x20DD */
{NULL , NULL ,  0x20DD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20DD , aName0x20DD , &P2210x20DD , NULL , NULL , 0x0000 },
/* Object 0x20DE */
{NULL , NULL ,  0x20DE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20DE , aName0x20DE , &P2220x20DE , NULL , NULL , 0x0000 },
/* Object 0x20DF */
{NULL , NULL ,  0x20DF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20DF , aName0x20DF , &P2230x20DF , NULL , NULL , 0x0000 },
/* Object 0x20E2 */
{NULL , NULL ,  0x20E2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20E2 , aName0x20E2 , &P2260x20E2 , NULL , NULL , 0x0000 },
/* Object 0x20E3 */
{NULL , NULL ,  0x20E3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20E3 , aName0x20E3 , &P2270x20E3 , NULL , NULL , 0x0000 },
/* Object 0x20E4 */
{NULL , NULL ,  0x20E4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20E4 , aName0x20E4 , &P2280x20E4 , NULL , NULL , 0x0000 },
/* Object 0x20E5 */
{NULL , NULL ,  0x20E5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20E5 , aName0x20E5 , &P2290x20E5 , NULL , NULL , 0x0000 },
/* Object 0x20E6 */
{NULL , NULL ,  0x20E6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20E6 , aName0x20E6 , &P2300x20E6 , NULL , NULL , 0x0000 },
/* Object 0x20E8 */
{NULL , NULL ,  0x20E8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20E8 , aName0x20E8 , &P2320x20E8 , NULL , NULL , 0x0000 },
/* Object 0x20E9 */
{NULL , NULL ,  0x20E9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20E9 , aName0x20E9 , &P2330x20E9 , NULL , NULL , 0x0000 },
/* Object 0x20EA */
{NULL , NULL ,  0x20EA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20EA , aName0x20EA , &P2340x20EA , NULL , NULL , 0x0000 },
/* Object 0x20EB */
{NULL , NULL ,  0x20EB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20EB , aName0x20EB , &P2350x20EB , NULL , NULL , 0x0000 },
/* Object 0x20EC */
{NULL , NULL ,  0x20EC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20EC , aName0x20EC , &P2360x20EC , NULL , NULL , 0x0000 },
/* Object 0x20ED */
{NULL , NULL ,  0x20ED , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20ED , aName0x20ED , &P2370x20ED , NULL , NULL , 0x0000 },
/* Object 0x20EE */
{NULL , NULL ,  0x20EE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20EE , aName0x20EE , &P2380x20EE , NULL , NULL , 0x0000 },
/* Object 0x20EF */
{NULL , NULL ,  0x20EF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20EF , aName0x20EF , &P2390x20EF , NULL , NULL , 0x0000 },
/* Object 0x20F0 */
{NULL , NULL ,  0x20F0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F0 , aName0x20F0 , &P2400x20F0 , NULL , NULL , 0x0000 },
/* Object 0x20F1 */
{NULL , NULL ,  0x20F1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F1 , aName0x20F1 , &P2410x20F1 , NULL , NULL , 0x0000 },
/* Object 0x20F2 */
{NULL , NULL ,  0x20F2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F2 , aName0x20F2 , &P2420x20F2 , NULL , NULL , 0x0000 },
/* Object 0x20F3 */
{NULL , NULL ,  0x20F3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F3 , aName0x20F3 , &P2430x20F3 , NULL , NULL , 0x0000 },
/* Object 0x20F4 */
{NULL , NULL ,  0x20F4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F4 , aName0x20F4 , &P2440x20F4 , NULL , NULL , 0x0000 },
/* Object 0x20F6 */
{NULL , NULL ,  0x20F6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F6 , aName0x20F6 , &P2460x20F6 , NULL , NULL , 0x0000 },
/* Object 0x20F7 */
{NULL , NULL ,  0x20F7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F7 , aName0x20F7 , &P2470x20F7 , NULL , NULL , 0x0000 },
/* Object 0x20F8 */
{NULL , NULL ,  0x20F8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F8 , aName0x20F8 , &P2480x20F8 , NULL , NULL , 0x0000 },
/* Object 0x20F9 */
{NULL , NULL ,  0x20F9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20F9 , aName0x20F9 , &P2490x20F9 , NULL , NULL , 0x0000 },
/* Object 0x20FA */
{NULL , NULL ,  0x20FA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20FA , aName0x20FA , &P2500x20FA , NULL , NULL , 0x0000 },
/* Object 0x20FB */
{NULL , NULL ,  0x20FB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20FB , aName0x20FB , &P2510x20FB , NULL , NULL , 0x0000 },
/* Object 0x20FC */
{NULL , NULL ,  0x20FC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20FC , aName0x20FC , &P2520x20FC , NULL , NULL , 0x0000 },
/* Object 0x20FD */
{NULL , NULL ,  0x20FD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20FD , aName0x20FD , &P2530x20FD , NULL , NULL , 0x0000 },
/* Object 0x20FE */
{NULL , NULL ,  0x20FE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20FE , aName0x20FE , &P2540x20FE , NULL , NULL , 0x0000 },
/* Object 0x20FF */
{NULL , NULL ,  0x20FF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x20FF , aName0x20FF , &P2550x20FF , NULL , NULL , 0x0000 },
/* Object 0x2102 */
{NULL , NULL ,  0x2102 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2102 , aName0x2102 , &P2580x2102 , NULL , NULL , 0x0000 },
/* Object 0x2103 */
{NULL , NULL ,  0x2103 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2103 , aName0x2103 , &P2590x2103 , NULL , NULL , 0x0000 },
/* Object 0x2104 */
{NULL , NULL ,  0x2104 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2104 , aName0x2104 , &P2600x2104 , NULL , NULL , 0x0000 },
/* Object 0x2105 */
{NULL , NULL ,  0x2105 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2105 , aName0x2105 , &P2610x2105 , NULL , NULL , 0x0000 },
/* Object 0x2106 */
{NULL , NULL ,  0x2106 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2106 , aName0x2106 , &P2620x2106 , NULL , NULL , 0x0000 },
/* Object 0x2107 */
{NULL , NULL ,  0x2107 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2107 , aName0x2107 , &P2630x2107 , NULL , NULL , 0x0000 },
/* Object 0x2108 */
{NULL , NULL ,  0x2108 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2108 , aName0x2108 , &P2640x2108 , NULL , NULL , 0x0000 },
/* Object 0x2109 */
{NULL , NULL ,  0x2109 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2109 , aName0x2109 , &P2650x2109 , NULL , NULL , 0x0000 },
/* Object 0x210E */
{NULL , NULL ,  0x210E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x210E , aName0x210E , &P2700x210E , NULL , NULL , 0x0000 },
/* Object 0x2112 */
{NULL , NULL ,  0x2112 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2112 , aName0x2112 , &P2740x2112 , NULL , NULL , 0x0000 },
/* Object 0x2113 */
{NULL , NULL ,  0x2113 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2113 , aName0x2113 , &P2750x2113 , NULL , NULL , 0x0000 },
/* Object 0x2114 */
{NULL , NULL ,  0x2114 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2114 , aName0x2114 , &P2760x2114 , NULL , NULL , 0x0000 },
/* Object 0x2115 */
{NULL , NULL ,  0x2115 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2115 , aName0x2115 , &P2770x2115 , NULL , NULL , 0x0000 },
/* Object 0x2116 */
{NULL , NULL ,  0x2116 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2116 , aName0x2116 , &P2780x2116 , NULL , NULL , 0x0000 },
/* Object 0x2117 */
{NULL , NULL ,  0x2117 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2117 , aName0x2117 , &P2790x2117 , NULL , NULL , 0x0000 },
/* Object 0x2122 */
{NULL , NULL ,  0x2122 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2122 , aName0x2122 , &P2900x2122 , NULL , NULL , 0x0000 },
/* Object 0x2123 */
{NULL , NULL ,  0x2123 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2123 , aName0x2123 , &P2910x2123 , NULL , NULL , 0x0000 },
/* Object 0x2124 */
{NULL , NULL ,  0x2124 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2124 , aName0x2124 , &P2920x2124 , NULL , NULL , 0x0000 },
/* Object 0x2125 */
{NULL , NULL ,  0x2125 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2125 , aName0x2125 , &P2930x2125 , NULL , NULL , 0x0000 },
/* Object 0x2126 */
{NULL , NULL ,  0x2126 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2126 , aName0x2126 , &P2940x2126 , NULL , NULL , 0x0000 },
/* Object 0x2129 */
{NULL , NULL ,  0x2129 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2129 , aName0x2129 , &P2970x2129 , NULL , NULL , 0x0000 },
/* Object 0x212A */
{NULL , NULL ,  0x212A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x212A , aName0x212A , &P2980x212A , NULL , NULL , 0x0000 },
/* Object 0x212B */
{NULL , NULL ,  0x212B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x212B , aName0x212B , &P2990x212B , NULL , NULL , 0x0000 },
/* Object 0x212C */
{NULL , NULL ,  0x212C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x212C , aName0x212C , &P3000x212C , NULL , NULL , 0x0000 },
/* Object 0x212D */
{NULL , NULL ,  0x212D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x212D , aName0x212D , &P3010x212D , NULL , NULL , 0x0000 },
/* Object 0x212E */
{NULL , NULL ,  0x212E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x212E , aName0x212E , &P3020x212E , NULL , NULL , 0x0000 },
/* Object 0x212F */
{NULL , NULL ,  0x212F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x212F , aName0x212F , &P3030x212F , NULL , NULL , 0x0000 },
/* Object 0x2130 */
{NULL , NULL ,  0x2130 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2130 , aName0x2130 , &P3040x2130 , NULL , NULL , 0x0000 },
/* Object 0x2131 */
{NULL , NULL ,  0x2131 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2131 , aName0x2131 , &P3050x2131 , NULL , NULL , 0x0000 },
/* Object 0x2132 */
{NULL , NULL ,  0x2132 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2132 , aName0x2132 , &P3060x2132 , NULL , NULL , 0x0000 },
/* Object 0x2133 */
{NULL , NULL ,  0x2133 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2133 , aName0x2133 , &P3070x2133 , NULL , NULL , 0x0000 },
/* Object 0x2134 */
{NULL , NULL ,  0x2134 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2134 , aName0x2134 , &P3080x2134 , NULL , NULL , 0x0000 },
/* Object 0x2135 */
{NULL , NULL ,  0x2135 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2135 , aName0x2135 , &P3090x2135 , NULL , NULL , 0x0000 },
/* Object 0x2136 */
{NULL , NULL ,  0x2136 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2136 , aName0x2136 , &P3100x2136 , NULL , NULL , 0x0000 },
/* Object 0x2137 */
{NULL , NULL ,  0x2137 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2137 , aName0x2137 , &P3110x2137 , NULL , NULL , 0x0000 },
/* Object 0x2139 */
{NULL , NULL ,  0x2139 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2139 , aName0x2139 , &P3130x2139 , NULL , NULL , 0x0000 },
/* Object 0x213A */
{NULL , NULL ,  0x213A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x213A , aName0x213A , &P3140x213A , NULL , NULL , 0x0000 },
/* Object 0x213B */
{NULL , NULL ,  0x213B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x213B , aName0x213B , &P3150x213B , NULL , NULL , 0x0000 },
/* Object 0x213C */
{NULL , NULL ,  0x213C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x213C , aName0x213C , &P3160x213C , NULL , NULL , 0x0000 },
/* Object 0x213D */
{NULL , NULL ,  0x213D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x213D , aName0x213D , &P3170x213D , NULL , NULL , 0x0000 },
/* Object 0x213E */
{NULL , NULL ,  0x213E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x213E , aName0x213E , &P3180x213E , NULL , NULL , 0x0000 },
/* Object 0x213F */
{NULL , NULL ,  0x213F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x213F , aName0x213F , &P3190x213F , NULL , NULL , 0x0000 },
/* Object 0x215A */
{NULL , NULL ,  0x215A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x215A , aName0x215A , &P3460x215A , NULL , NULL , 0x0000 },
/* Object 0x215B */
{NULL , NULL ,  0x215B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x215B , aName0x215B , &P3470x215B , NULL , NULL , 0x0000 },
/* Object 0x215C */
{NULL , NULL ,  0x215C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x215C , aName0x215C , &P3480x215C , NULL , NULL , 0x0000 },
/* Object 0x215E */
{NULL , NULL ,  0x215E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x215E , aName0x215E , &P3500x215E , NULL , NULL , 0x0000 },
/* Object 0x215F */
{NULL , NULL ,  0x215F , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x215F , aName0x215F , &P3510x215F , NULL , NULL , 0x0000 },
/* Object 0x2160 */
{NULL , NULL ,  0x2160 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2160 , aName0x2160 , &P3520x2160 , NULL , NULL , 0x0000 },
/* Object 0x2161 */
{NULL , NULL ,  0x2161 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2161 , aName0x2161 , &P3530x2161 , NULL , NULL , 0x0000 },
/* Object 0x2162 */
{NULL , NULL ,  0x2162 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2162 , aName0x2162 , &P3540x2162 , NULL , NULL , 0x0000 },
/* Object 0x2163 */
{NULL , NULL ,  0x2163 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2163 , aName0x2163 , &P3550x2163 , NULL , NULL , 0x0000 },
/* Object 0x2164 */
{NULL , NULL ,  0x2164 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2164 , aName0x2164 , &P3560x2164 , NULL , NULL , 0x0000 },
/* Object 0x2165 */
{NULL , NULL ,  0x2165 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2165 , aName0x2165 , &P3570x2165 , NULL , NULL , 0x0000 },
/* Object 0x2166 */
{NULL , NULL ,  0x2166 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2166 , aName0x2166 , &P3580x2166 , NULL , NULL , 0x0000 },
/* Object 0x2167 */
{NULL , NULL ,  0x2167 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2167 , aName0x2167 , &P3590x2167 , NULL , NULL , 0x0000 },
/* Object 0x2168 */
{NULL , NULL ,  0x2168 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2168 , aName0x2168 , &P3600x2168 , NULL , NULL , 0x0000 },
/* Object 0x216C */
{NULL , NULL ,  0x216C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x216C , aName0x216C , &P3640x216C , NULL , NULL , 0x0000 },
/* Object 0x216D */
{NULL , NULL ,  0x216D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x216D , aName0x216D , &P3650x216D , NULL , NULL , 0x0000 },
/* Object 0x2176 */
{NULL , NULL ,  0x2176 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2176 , aName0x2176 , &P3740x2176 , NULL , NULL , 0x0000 },
/* Object 0x2177 */
{NULL , NULL ,  0x2177 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2177 , aName0x2177 , &P3750x2177 , NULL , NULL , 0x0000 },
/* Object 0x2178 */
{NULL , NULL ,  0x2178 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2178 , aName0x2178 , &P3760x2178 , NULL , NULL , 0x0000 },
/* Object 0x2179 */
{NULL , NULL ,  0x2179 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2179 , aName0x2179 , &P3770x2179 , NULL , NULL , 0x0000 },
/* Object 0x217C */
{NULL , NULL ,  0x217C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x217C , aName0x217C , &P3800x217C , NULL , NULL , 0x0000 },
/* Object 0x217D */
{NULL , NULL ,  0x217D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x217D , aName0x217D , &P3810x217D , NULL , NULL , 0x0000 },
/* Object 0x217E */
{NULL , NULL ,  0x217E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x217E , aName0x217E , &P3820x217E , NULL , NULL , 0x0000 },
/* Object 0x217F */
{NULL , NULL ,  0x217F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x217F , aName0x217F , &P3830x217F , NULL , NULL , 0x0000 },
/* Object 0x2180 */
{NULL , NULL ,  0x2180 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2180 , aName0x2180 , &P3840x2180 , NULL , NULL , 0x0000 },
/* Object 0x2181 */
{NULL , NULL ,  0x2181 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2181 , aName0x2181 , &P3850x2181 , NULL , NULL , 0x0000 },
/* Object 0x2182 */
{NULL , NULL ,  0x2182 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2182 , aName0x2182 , &P3860x2182 , NULL , NULL , 0x0000 },
/* Object 0x2183 */
{NULL , NULL ,  0x2183 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2183 , aName0x2183 , &P3870x2183 , NULL , NULL , 0x0000 },
/* Object 0x2184 */
{NULL , NULL ,  0x2184 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2184 , aName0x2184 , &P3880x2184 , NULL , NULL , 0x0000 },
/* Object 0x2186 */
{NULL , NULL ,  0x2186 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2186 , aName0x2186 , &P3900x2186 , NULL , NULL , 0x0000 },
/* Object 0x2187 */
{NULL , NULL ,  0x2187 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2187 , aName0x2187 , &P3910x2187 , NULL , NULL , 0x0000 },
/* Object 0x2188 */
{NULL , NULL ,  0x2188 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2188 , aName0x2188 , &P3920x2188 , NULL , NULL , 0x0000 },
/* Object 0x2189 */
{NULL , NULL ,  0x2189 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2189 , aName0x2189 , &P3930x2189 , NULL , NULL , 0x0000 },
/* Object 0x218A */
{NULL , NULL ,  0x218A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x218A , aName0x218A , &P3940x218A , NULL , NULL , 0x0000 },
/* Object 0x218B */
{NULL , NULL ,  0x218B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x218B , aName0x218B , &P3950x218B , NULL , NULL , 0x0000 },
/* Object 0x218C */
{NULL , NULL ,  0x218C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x218C , aName0x218C , &P3960x218C , NULL , NULL , 0x0000 },
/* Object 0x218D */
{NULL , NULL ,  0x218D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x218D , aName0x218D , &P3970x218D , NULL , NULL , 0x0000 },
/* Object 0x218E */
{NULL , NULL ,  0x218E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x218E , aName0x218E , &P3980x218E , NULL , NULL , 0x0000 },
/* Object 0x218F */
{NULL , NULL ,  0x218F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x218F , aName0x218F , &P3990x218F , NULL , NULL , 0x0000 },
/* Object 0x2190 */
{NULL , NULL ,  0x2190 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2190 , aName0x2190 , &P4000x2190 , NULL , NULL , 0x0000 },
/* Object 0x2191 */
{NULL , NULL ,  0x2191 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2191 , aName0x2191 , &P4010x2191 , NULL , NULL , 0x0000 },
/* Object 0x2192 */
{NULL , NULL ,  0x2192 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2192 , aName0x2192 , &P4020x2192 , NULL , NULL , 0x0000 },
/* Object 0x2193 */
{NULL , NULL ,  0x2193 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2193 , aName0x2193 , &P4030x2193 , NULL , NULL , 0x0000 },
/* Object 0x2194 */
{NULL , NULL ,  0x2194 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2194 , aName0x2194 , &P4040x2194 , NULL , NULL , 0x0000 },
/* Object 0x2195 */
{NULL , NULL ,  0x2195 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2195 , aName0x2195 , &P4050x2195 , NULL , NULL , 0x0000 },
/* Object 0x2197 */
{NULL , NULL ,  0x2197 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2197 , aName0x2197 , &P4070x2197 , NULL , NULL , 0x0000 },
/* Object 0x2198 */
{NULL , NULL ,  0x2198 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2198 , aName0x2198 , &P4080x2198 , NULL , NULL , 0x0000 },
/* Object 0x2199 */
{NULL , NULL ,  0x2199 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2199 , aName0x2199 , &P4090x2199 , NULL , NULL , 0x0000 },
/* Object 0x219A */
{NULL , NULL ,  0x219A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x219A , aName0x219A , &P4100x219A , NULL , NULL , 0x0000 },
/* Object 0x219B */
{NULL , NULL ,  0x219B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x219B , aName0x219B , &P4110x219B , NULL , NULL , 0x0000 },
/* Object 0x219C */
{NULL , NULL ,  0x219C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x219C , aName0x219C , &P4120x219C , NULL , NULL , 0x0000 },
/* Object 0x219D */
{NULL , NULL ,  0x219D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x219D , aName0x219D , &P4130x219D , NULL , NULL , 0x0000 },
/* Object 0x219E */
{NULL , NULL ,  0x219E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x219E , aName0x219E , &P4140x219E , NULL , NULL , 0x0000 },
/* Object 0x219F */
{NULL , NULL ,  0x219F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x219F , aName0x219F , &P4150x219F , NULL , NULL , 0x0000 },
/* Object 0x21A1 */
{NULL , NULL ,  0x21A1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A1 , aName0x21A1 , &P4170x21A1 , NULL , NULL , 0x0000 },
/* Object 0x21A2 */
{NULL , NULL ,  0x21A2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A2 , aName0x21A2 , &P4180x21A2 , NULL , NULL , 0x0000 },
/* Object 0x21A3 */
{NULL , NULL ,  0x21A3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A3 , aName0x21A3 , &P4190x21A3 , NULL , NULL , 0x0000 },
/* Object 0x21A4 */
{NULL , NULL ,  0x21A4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A4 , aName0x21A4 , &P4200x21A4 , NULL , NULL , 0x0000 },
/* Object 0x21A5 */
{NULL , NULL ,  0x21A5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A5 , aName0x21A5 , &P4210x21A5 , NULL , NULL , 0x0000 },
/* Object 0x21A6 */
{NULL , NULL ,  0x21A6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A6 , aName0x21A6 , &P4220x21A6 , NULL , NULL , 0x0000 },
/* Object 0x21A7 */
{NULL , NULL ,  0x21A7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A7 , aName0x21A7 , &P4230x21A7 , NULL , NULL , 0x0000 },
/* Object 0x21A8 */
{NULL , NULL ,  0x21A8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A8 , aName0x21A8 , &P4240x21A8 , NULL , NULL , 0x0000 },
/* Object 0x21A9 */
{NULL , NULL ,  0x21A9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21A9 , aName0x21A9 , &P4250x21A9 , NULL , NULL , 0x0000 },
/* Object 0x21AC */
{NULL , NULL ,  0x21AC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21AC , aName0x21AC , &P4280x21AC , NULL , NULL , 0x0000 },
/* Object 0x21AD */
{NULL , NULL ,  0x21AD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21AD , aName0x21AD , &P4290x21AD , NULL , NULL , 0x0000 },
/* Object 0x21AE */
{NULL , NULL ,  0x21AE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21AE , aName0x21AE , &P4300x21AE , NULL , NULL , 0x0000 },
/* Object 0x21AF */
{NULL , NULL ,  0x21AF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21AF , aName0x21AF , &P4310x21AF , NULL , NULL , 0x0000 },
/* Object 0x21B0 */
{NULL , NULL ,  0x21B0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B0 , aName0x21B0 , &P4320x21B0 , NULL , NULL , 0x0000 },
/* Object 0x21B1 */
{NULL , NULL ,  0x21B1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B1 , aName0x21B1 , &P4330x21B1 , NULL , NULL , 0x0000 },
/* Object 0x21B2 */
{NULL , NULL ,  0x21B2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B2 , aName0x21B2 , &P4340x21B2 , NULL , NULL , 0x0000 },
/* Object 0x21B3 */
{NULL , NULL ,  0x21B3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B3 , aName0x21B3 , &P4350x21B3 , NULL , NULL , 0x0000 },
/* Object 0x21B4 */
{NULL , NULL ,  0x21B4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B4 , aName0x21B4 , &P4360x21B4 , NULL , NULL , 0x0000 },
/* Object 0x21B5 */
{NULL , NULL ,  0x21B5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B5 , aName0x21B5 , &P4370x21B5 , NULL , NULL , 0x0000 },
/* Object 0x21B6 */
{NULL , NULL ,  0x21B6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B6 , aName0x21B6 , &P4380x21B6 , NULL , NULL , 0x0000 },
/* Object 0x21B8 */
{NULL , NULL ,  0x21B8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B8 , aName0x21B8 , &P4400x21B8 , NULL , NULL , 0x0000 },
/* Object 0x21B9 */
{NULL , NULL ,  0x21B9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21B9 , aName0x21B9 , &P4410x21B9 , NULL , NULL , 0x0000 },
/* Object 0x21BA */
{NULL , NULL ,  0x21BA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21BA , aName0x21BA , &P4420x21BA , NULL , NULL , 0x0000 },
/* Object 0x21BB */
{NULL , NULL ,  0x21BB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21BB , aName0x21BB , &P4430x21BB , NULL , NULL , 0x0000 },
/* Object 0x21BC */
{NULL , NULL ,  0x21BC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21BC , aName0x21BC , &P4440x21BC , NULL , NULL , 0x0000 },
/* Object 0x21BD */
{NULL , NULL ,  0x21BD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21BD , aName0x21BD , &P4450x21BD , NULL , NULL , 0x0000 },
/* Object 0x21BE */
{NULL , NULL ,  0x21BE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21BE , aName0x21BE , &P4460x21BE , NULL , NULL , 0x0000 },
/* Object 0x21BF */
{NULL , NULL ,  0x21BF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21BF , aName0x21BF , &P4470x21BF , NULL , NULL , 0x0000 },
/* Object 0x21C0 */
{NULL , NULL ,  0x21C0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21C0 , aName0x21C0 , &P4480x21C0 , NULL , NULL , 0x0000 },
/* Object 0x21C1 */
{NULL , NULL ,  0x21C1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21C1 , aName0x21C1 , &P4490x21C1 , NULL , NULL , 0x0000 },
/* Object 0x21C2 */
{NULL , NULL ,  0x21C2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21C2 , aName0x21C2 , &P4500x21C2 , NULL , NULL , 0x0000 },
/* Object 0x21C3 */
{NULL , NULL ,  0x21C3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21C3 , aName0x21C3 , &P4510x21C3 , NULL , NULL , 0x0000 },
/* Object 0x21C4 */
{NULL , NULL ,  0x21C4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21C4 , aName0x21C4 , &P4520x21C4 , NULL , NULL , 0x0000 },
/* Object 0x21C5 */
{NULL , NULL ,  0x21C5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21C5 , aName0x21C5 , &P4530x21C5 , NULL , NULL , 0x0000 },
/* Object 0x21CC */
{NULL , NULL ,  0x21CC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21CC , aName0x21CC , &P4600x21CC , NULL , NULL , 0x0000 },
/* Object 0x21CD */
{NULL , NULL ,  0x21CD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21CD , aName0x21CD , &P4610x21CD , NULL , NULL , 0x0000 },
/* Object 0x21CE */
{NULL , NULL ,  0x21CE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21CE , aName0x21CE , &P4620x21CE , NULL , NULL , 0x0000 },
/* Object 0x21CF */
{NULL , NULL ,  0x21CF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21CF , aName0x21CF , &P4630x21CF , NULL , NULL , 0x0000 },
/* Object 0x21D0 */
{NULL , NULL ,  0x21D0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21D0 , aName0x21D0 , &P4640x21D0 , NULL , NULL , 0x0000 },
/* Object 0x21D2 */
{NULL , NULL ,  0x21D2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21D2 , aName0x21D2 , &P4660x21D2 , NULL , NULL , 0x0000 },
/* Object 0x21D3 */
{NULL , NULL ,  0x21D3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21D3 , aName0x21D3 , &P4670x21D3 , NULL , NULL , 0x0000 },
/* Object 0x21D4 */
{NULL , NULL ,  0x21D4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21D4 , aName0x21D4 , &P4680x21D4 , NULL , NULL , 0x0000 },
/* Object 0x21D6 */
{NULL , NULL ,  0x21D6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21D6 , aName0x21D6 , &P4700x21D6 , NULL , NULL , 0x0000 },
/* Object 0x21D7 */
{NULL , NULL ,  0x21D7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21D7 , aName0x21D7 , &P4710x21D7 , NULL , NULL , 0x0000 },
/* Object 0x21D8 */
{NULL , NULL ,  0x21D8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21D8 , aName0x21D8 , &P4720x21D8 , NULL , NULL , 0x0000 },
/* Object 0x21D9 */
{NULL , NULL ,  0x21D9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21D9 , aName0x21D9 , &P4730x21D9 , NULL , NULL , 0x0000 },
/* Object 0x21DA */
{NULL , NULL ,  0x21DA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21DA , aName0x21DA , &P4740x21DA , NULL , NULL , 0x0000 },
/* Object 0x21DB */
{NULL , NULL ,  0x21DB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21DB , aName0x21DB , &P4750x21DB , NULL , NULL , 0x0000 },
/* Object 0x21E0 */
{NULL , NULL ,  0x21E0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21E0 , aName0x21E0 , &P4800x21E0 , NULL , NULL , 0x0000 },
/* Object 0x21E1 */
{NULL , NULL ,  0x21E1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21E1 , aName0x21E1 , &P4810x21E1 , NULL , NULL , 0x0000 },
/* Object 0x21E2 */
{NULL , NULL ,  0x21E2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21E2 , aName0x21E2 , &P4820x21E2 , NULL , NULL , 0x0000 },
/* Object 0x21E3 */
{NULL , NULL ,  0x21E3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21E3 , aName0x21E3 , &P4830x21E3 , NULL , NULL , 0x0000 },
/* Object 0x21EA */
{NULL , NULL ,  0x21EA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21EA , aName0x21EA , &P4900x21EA , NULL , NULL , 0x0000 },
/* Object 0x21EC */
{NULL , NULL ,  0x21EC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21EC , aName0x21EC , &P4920x21EC , NULL , NULL , 0x0000 },
/* Object 0x21F4 */
{NULL , NULL ,  0x21F4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21F4 , aName0x21F4 , &P5000x21F4 , NULL , NULL , 0x0000 },
/* Object 0x21F8 */
{NULL , NULL ,  0x21F8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21F8 , aName0x21F8 , &P5040x21F8 , NULL , NULL , 0x0000 },
/* Object 0x21F9 */
{NULL , NULL ,  0x21F9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21F9 , aName0x21F9 , &P5050x21F9 , NULL , NULL , 0x0000 },
/* Object 0x21FA */
{NULL , NULL ,  0x21FA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21FA , aName0x21FA , &P5060x21FA , NULL , NULL , 0x0000 },
/* Object 0x21FB */
{NULL , NULL ,  0x21FB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21FB , aName0x21FB , &P5070x21FB , NULL , NULL , 0x0000 },
/* Object 0x21FD */
{NULL , NULL ,  0x21FD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21FD , aName0x21FD , &P5090x21FD , NULL , NULL , 0x0000 },
/* Object 0x21FE */
{NULL , NULL ,  0x21FE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21FE , aName0x21FE , &P5100x21FE , NULL , NULL , 0x0000 },
/* Object 0x21FF */
{NULL , NULL ,  0x21FF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x21FF , aName0x21FF , &P5110x21FF , NULL , NULL , 0x0000 },
/* Object 0x2200 */
{NULL , NULL ,  0x2200 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2200 , aName0x2200 , &P5120x2200 , NULL , NULL , 0x0000 },
/* Object 0x2206 */
{NULL , NULL ,  0x2206 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2206 , aName0x2206 , &P5180x2206 , NULL , NULL , 0x0000 },
/* Object 0x2207 */
{NULL , NULL ,  0x2207 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2207 , aName0x2207 , &P5190x2207 , NULL , NULL , 0x0000 },
/* Object 0x2208 */
{NULL , NULL ,  0x2208 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2208 , aName0x2208 , &P5200x2208 , NULL , NULL , 0x0000 },
/* Object 0x2209 */
{NULL , NULL ,  0x2209 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2209 , aName0x2209 , &P5210x2209 , NULL , NULL , 0x0000 },
/* Object 0x220A */
{NULL , NULL ,  0x220A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x220A , aName0x220A , &P5220x220A , NULL , NULL , 0x0000 },
/* Object 0x220B */
{NULL , NULL ,  0x220B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x220B , aName0x220B , &P5230x220B , NULL , NULL , 0x0000 },
/* Object 0x220C */
{NULL , NULL ,  0x220C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x220C , aName0x220C , &P5240x220C , NULL , NULL , 0x0000 },
/* Object 0x220D */
{NULL , NULL ,  0x220D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x220D , aName0x220D , &P5250x220D , NULL , NULL , 0x0000 },
/* Object 0x220E */
{NULL , NULL ,  0x220E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x220E , aName0x220E , &P5260x220E , NULL , NULL , 0x0000 },
/* Object 0x2210 */
{NULL , NULL ,  0x2210 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2210 , aName0x2210 , &P5280x2210 , NULL , NULL , 0x0000 },
/* Object 0x2216 */
{NULL , NULL ,  0x2216 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2216 , aName0x2216 , &P5340x2216 , NULL , NULL , 0x0000 },
/* Object 0x2217 */
{NULL , NULL ,  0x2217 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2217 , aName0x2217 , &P5350x2217 , NULL , NULL , 0x0000 },
/* Object 0x2218 */
{NULL , NULL ,  0x2218 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2218 , aName0x2218 , &P5360x2218 , NULL , NULL , 0x0000 },
/* Object 0x221C */
{NULL , NULL ,  0x221C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x221C , aName0x221C , &P5400x221C , NULL , NULL , 0x0000 },
/* Object 0x221D */
{NULL , NULL ,  0x221D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x221D , aName0x221D , &P5410x221D , NULL , NULL , 0x0000 },
/* Object 0x221E */
{NULL , NULL ,  0x221E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x221E , aName0x221E , &P5420x221E , NULL , NULL , 0x0000 },
/* Object 0x221F */
{NULL , NULL ,  0x221F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x221F , aName0x221F , &P5430x221F , NULL , NULL , 0x0000 },
/* Object 0x2220 */
{NULL , NULL ,  0x2220 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2220 , aName0x2220 , &P5440x2220 , NULL , NULL , 0x0000 },
/* Object 0x2221 */
{NULL , NULL ,  0x2221 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2221 , aName0x2221 , &P5450x2221 , NULL , NULL , 0x0000 },
/* Object 0x2225 */
{NULL , NULL ,  0x2225 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2225 , aName0x2225 , &P5490x2225 , NULL , NULL , 0x0000 },
/* Object 0x2226 */
{NULL , NULL ,  0x2226 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2226 , aName0x2226 , &P5500x2226 , NULL , NULL , 0x0000 },
/* Object 0x2227 */
{NULL , NULL ,  0x2227 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2227 , aName0x2227 , &P5510x2227 , NULL , NULL , 0x0000 },
/* Object 0x2228 */
{NULL , NULL ,  0x2228 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2228 , aName0x2228 , &P5520x2228 , NULL , NULL , 0x0000 },
/* Object 0x2229 */
{NULL , NULL ,  0x2229 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2229 , aName0x2229 , &P5530x2229 , NULL , NULL , 0x0000 },
/* Object 0x222A */
{NULL , NULL ,  0x222A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x222A , aName0x222A , &P5540x222A , NULL , NULL , 0x0000 },
/* Object 0x222B */
{NULL , NULL ,  0x222B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x222B , aName0x222B , &P5550x222B , NULL , NULL , 0x0000 },
/* Object 0x2230 */
{NULL , NULL ,  0x2230 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2230 , aName0x2230 , &P5600x2230 , NULL , NULL , 0x0000 },
/* Object 0x2235 */
{NULL , NULL ,  0x2235 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2235 , aName0x2235 , &P5650x2235 , NULL , NULL , 0x0000 },
/* Object 0x2236 */
{NULL , NULL ,  0x2236 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2236 , aName0x2236 , &P5660x2236 , NULL , NULL , 0x0000 },
/* Object 0x2239 */
{NULL , NULL ,  0x2239 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2239 , aName0x2239 , &P5690x2239 , NULL , NULL , 0x0000 },
/* Object 0x223A */
{NULL , NULL ,  0x223A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x223A , aName0x223A , &P5700x223A , NULL , NULL , 0x0000 },
/* Object 0x223B */
{NULL , NULL ,  0x223B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x223B , aName0x223B , &P5710x223B , NULL , NULL , 0x0000 },
/* Object 0x223C */
{NULL , NULL ,  0x223C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x223C , aName0x223C , &P5720x223C , NULL , NULL , 0x0000 },
/* Object 0x223D */
{NULL , NULL ,  0x223D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x223D , aName0x223D , &P5730x223D , NULL , NULL , 0x0000 },
/* Object 0x223E */
{NULL , NULL ,  0x223E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x223E , aName0x223E , &P5740x223E , NULL , NULL , 0x0000 },
/* Object 0x223F */
{NULL , NULL ,  0x223F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x223F , aName0x223F , &P5750x223F , NULL , NULL , 0x0000 },
/* Object 0x2240 */
{NULL , NULL ,  0x2240 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2240 , aName0x2240 , &P5760x2240 , NULL , NULL , 0x0000 },
/* Object 0x2241 */
{NULL , NULL ,  0x2241 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2241 , aName0x2241 , &P5770x2241 , NULL , NULL , 0x0000 },
/* Object 0x2242 */
{NULL , NULL ,  0x2242 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2242 , aName0x2242 , &P5780x2242 , NULL , NULL , 0x0000 },
/* Object 0x2243 */
{NULL , NULL ,  0x2243 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2243 , aName0x2243 , &P5790x2243 , NULL , NULL , 0x0000 },
/* Object 0x2244 */
{NULL , NULL ,  0x2244 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2244 , aName0x2244 , &P5800x2244 , NULL , NULL , 0x0000 },
/* Object 0x2248 */
{NULL , NULL ,  0x2248 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2248 , aName0x2248 , &P5840x2248 , NULL , NULL , 0x0000 },
/* Object 0x2249 */
{NULL , NULL ,  0x2249 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2249 , aName0x2249 , &P5850x2249 , NULL , NULL , 0x0000 },
/* Object 0x224A */
{NULL , NULL ,  0x224A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x224A , aName0x224A , &P5860x224A , NULL , NULL , 0x0000 },
/* Object 0x224B */
{NULL , NULL ,  0x224B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x224B , aName0x224B , &P5870x224B , NULL , NULL , 0x0000 },
/* Object 0x224C */
{NULL , NULL ,  0x224C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x224C , aName0x224C , &P5880x224C , NULL , NULL , 0x0000 },
/* Object 0x224D */
{NULL , NULL ,  0x224D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x224D , aName0x224D , &P5890x224D , NULL , NULL , 0x0000 },
/* Object 0x224E */
{NULL , NULL ,  0x224E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x224E , aName0x224E , &P5900x224E , NULL , NULL , 0x0000 },
/* Object 0x224F */
{NULL , NULL ,  0x224F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x224F , aName0x224F , &P5910x224F , NULL , NULL , 0x0000 },
/* Object 0x2250 */
{NULL , NULL ,  0x2250 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2250 , aName0x2250 , &P5920x2250 , NULL , NULL , 0x0000 },
/* Object 0x2251 */
{NULL , NULL ,  0x2251 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2251 , aName0x2251 , &P5930x2251 , NULL , NULL , 0x0000 },
/* Object 0x2254 */
{NULL , NULL ,  0x2254 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2254 , aName0x2254 , &P5960x2254 , NULL , NULL , 0x0000 },
/* Object 0x2255 */
{NULL , NULL ,  0x2255 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2255 , aName0x2255 , &P5970x2255 , NULL , NULL , 0x0000 },
/* Object 0x2256 */
{NULL , NULL ,  0x2256 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2256 , aName0x2256 , &P5980x2256 , NULL , NULL , 0x0000 },
/* Object 0x2258 */
{NULL , NULL ,  0x2258 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2258 , aName0x2258 , &P6000x2258 , NULL , NULL , 0x0000 },
/* Object 0x2259 */
{NULL , NULL ,  0x2259 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2259 , aName0x2259 , &P6010x2259 , NULL , NULL , 0x0000 },
/* Object 0x225A */
{NULL , NULL ,  0x225A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x225A , aName0x225A , &P6020x225A , NULL , NULL , 0x0000 },
/* Object 0x225B */
{NULL , NULL ,  0x225B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x225B , aName0x225B , &P6030x225B , NULL , NULL , 0x0000 },
/* Object 0x225C */
{NULL , NULL ,  0x225C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x225C , aName0x225C , &P6040x225C , NULL , NULL , 0x0000 },
/* Object 0x225D */
{NULL , NULL ,  0x225D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x225D , aName0x225D , &P6050x225D , NULL , NULL , 0x0000 },
/* Object 0x225E */
{NULL , NULL ,  0x225E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x225E , aName0x225E , &P6060x225E , NULL , NULL , 0x0000 },
/* Object 0x225F */
{NULL , NULL ,  0x225F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x225F , aName0x225F , &P6070x225F , NULL , NULL , 0x0000 },
/* Object 0x2260 */
{NULL , NULL ,  0x2260 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2260 , aName0x2260 , &P6080x2260 , NULL , NULL , 0x0000 },
/* Object 0x2261 */
{NULL , NULL ,  0x2261 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2261 , aName0x2261 , &P6090x2261 , NULL , NULL , 0x0000 },
/* Object 0x2262 */
{NULL , NULL ,  0x2262 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2262 , aName0x2262 , &P6100x2262 , NULL , NULL , 0x0000 },
/* Object 0x2263 */
{NULL , NULL ,  0x2263 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2263 , aName0x2263 , &P6110x2263 , NULL , NULL , 0x0000 },
/* Object 0x2264 */
{NULL , NULL ,  0x2264 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2264 , aName0x2264 , &P6120x2264 , NULL , NULL , 0x0000 },
/* Object 0x2265 */
{NULL , NULL ,  0x2265 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2265 , aName0x2265 , &P6130x2265 , NULL , NULL , 0x0000 },
/* Object 0x2266 */
{NULL , NULL ,  0x2266 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2266 , aName0x2266 , &P6140x2266 , NULL , NULL , 0x0000 },
/* Object 0x2267 */
{NULL , NULL ,  0x2267 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2267 , aName0x2267 , &P6150x2267 , NULL , NULL , 0x0000 },
/* Object 0x2268 */
{NULL , NULL ,  0x2268 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2268 , aName0x2268 , &P6160x2268 , NULL , NULL , 0x0000 },
/* Object 0x226E */
{NULL , NULL ,  0x226E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x226E , aName0x226E , &P6220x226E , NULL , NULL , 0x0000 },
/* Object 0x226F */
{NULL , NULL ,  0x226F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x226F , aName0x226F , &P6230x226F , NULL , NULL , 0x0000 },
/* Object 0x2280 */
{NULL , NULL ,  0x2280 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2280 , aName0x2280 , &P6400x2280 , NULL , NULL , 0x0000 },
/* Object 0x2281 */
{NULL , NULL ,  0x2281 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2281 , aName0x2281 , &P6410x2281 , NULL , NULL , 0x0000 },
/* Object 0x2291 */
{NULL , NULL ,  0x2291 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2291 , aName0x2291 , &P6570x2291 , NULL , NULL , 0x0000 },
/* Object 0x2292 */
{NULL , NULL ,  0x2292 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2292 , aName0x2292 , &P6580x2292 , NULL , NULL , 0x0000 },
/* Object 0x2293 */
{NULL , NULL ,  0x2293 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2293 , aName0x2293 , &P6590x2293 , NULL , NULL , 0x0000 },
/* Object 0x2294 */
{NULL , NULL ,  0x2294 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2294 , aName0x2294 , &P6600x2294 , NULL , NULL , 0x0000 },
/* Object 0x2295 */
{NULL , NULL ,  0x2295 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2295 , aName0x2295 , &P6610x2295 , NULL , NULL , 0x0000 },
/* Object 0x2296 */
{NULL , NULL ,  0x2296 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2296 , aName0x2296 , &P6620x2296 , NULL , NULL , 0x0000 },
/* Object 0x2297 */
{NULL , NULL ,  0x2297 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2297 , aName0x2297 , &P6630x2297 , NULL , NULL , 0x0000 },
/* Object 0x2298 */
{NULL , NULL ,  0x2298 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2298 , aName0x2298 , &P6640x2298 , NULL , NULL , 0x0000 },
/* Object 0x2299 */
{NULL , NULL ,  0x2299 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2299 , aName0x2299 , &P6650x2299 , NULL , NULL , 0x0000 },
/* Object 0x22C6 */
{NULL , NULL ,  0x22C6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x22C6 , aName0x22C6 , &P7100x22C6 , NULL , NULL , 0x0000 },
/* Object 0x22D1 */
{NULL , NULL ,  0x22D1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x22D1 , aName0x22D1 , &P7210x22D1 , NULL , NULL , 0x0000 },
/* Object 0x22D2 */
{NULL , NULL ,  0x22D2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x22D2 , aName0x22D2 , &P7220x22D2 , NULL , NULL , 0x0000 },
/* Object 0x22D3 */
{NULL , NULL ,  0x22D3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x22D3 , aName0x22D3 , &P7230x22D3 , NULL , NULL , 0x0000 },
/* Object 0x22D4 */
{NULL , NULL ,  0x22D4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x22D4 , aName0x22D4 , &P7240x22D4 , NULL , NULL , 0x0000 },
/* Object 0x22DC */
{NULL , NULL ,  0x22DC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x22DC , aName0x22DC , &P7320x22DC , NULL , NULL , 0x0000 },
/* Object 0x2384 */
{NULL , NULL ,  0x2384 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2384 , aName0x2384 , &P9000x2384 , NULL , NULL , 0x0000 },
/* Object 0x2385 */
{NULL , NULL ,  0x2385 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2385 , aName0x2385 , &P9010x2385 , NULL , NULL , 0x0000 },
/* Object 0x2386 */
{NULL , NULL ,  0x2386 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2386 , aName0x2386 , &P9020x2386 , NULL , NULL , 0x0000 },
/* Object 0x2387 */
{NULL , NULL ,  0x2387 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2387 , aName0x2387 , &P9030x2387 , NULL , NULL , 0x0000 },
/* Object 0x2388 */
{NULL , NULL ,  0x2388 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2388 , aName0x2388 , &P9040x2388 , NULL , NULL , 0x0000 },
/* Object 0x2389 */
{NULL , NULL ,  0x2389 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2389 , aName0x2389 , &P9050x2389 , NULL , NULL , 0x0000 },
/* Object 0x238A */
{NULL , NULL ,  0x238A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x238A , aName0x238A , &P9060x238A , NULL , NULL , 0x0000 },
/* Object 0x238B */
{NULL , NULL ,  0x238B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x238B , aName0x238B , &P9070x238B , NULL , NULL , 0x0000 },
/* Object 0x238E */
{NULL , NULL ,  0x238E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x238E , aName0x238E , &P9100x238E , NULL , NULL , 0x0000 },
/* Object 0x238F */
{NULL , NULL ,  0x238F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x238F , aName0x238F , &P9110x238F , NULL , NULL , 0x0000 },
/* Object 0x2391 */
{NULL , NULL ,  0x2391 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2391 , aName0x2391 , &P9130x2391 , NULL , NULL , 0x0000 },
/* Object 0x2392 */
{NULL , NULL ,  0x2392 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2392 , aName0x2392 , &P9140x2392 , NULL , NULL , 0x0000 },
/* Object 0x2393 */
{NULL , NULL ,  0x2393 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2393 , aName0x2393 , &P9150x2393 , NULL , NULL , 0x0000 },
/* Object 0x2394 */
{NULL , NULL ,  0x2394 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2394 , aName0x2394 , &P9160x2394 , NULL , NULL , 0x0000 },
/* Object 0x2395 */
{NULL , NULL ,  0x2395 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2395 , aName0x2395 , &P9170x2395 , NULL , NULL , 0x0000 },
/* Object 0x2396 */
{NULL , NULL ,  0x2396 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2396 , aName0x2396 , &P9180x2396 , NULL , NULL , 0x0000 },
/* Object 0x2397 */
{NULL , NULL ,  0x2397 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2397 , aName0x2397 , &P9190x2397 , NULL , NULL , 0x0000 },
/* Object 0x2398 */
{NULL , NULL ,  0x2398 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2398 , aName0x2398 , &P9200x2398 , NULL , NULL , 0x0000 },
/* Object 0x2399 */
{NULL , NULL ,  0x2399 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2399 , aName0x2399 , &P9210x2399 , NULL , NULL , 0x0000 },
/* Object 0x239A */
{NULL , NULL ,  0x239A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x239A , aName0x239A , &P9220x239A , NULL , NULL , 0x0000 },
/* Object 0x239B */
{NULL , NULL ,  0x239B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x239B , aName0x239B , &P9230x239B , NULL , NULL , 0x0000 },
/* Object 0x239C */
{NULL , NULL ,  0x239C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x239C , aName0x239C , &P9240x239C , NULL , NULL , 0x0000 },
/* Object 0x239D */
{NULL , NULL ,  0x239D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x239D , aName0x239D , &P9250x239D , NULL , NULL , 0x0000 },
/* Object 0x239E */
{NULL , NULL ,  0x239E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x239E , aName0x239E , &P9260x239E , NULL , NULL , 0x0000 },
/* Object 0x239F */
{NULL , NULL ,  0x239F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x239F , aName0x239F , &P9270x239F , NULL , NULL , 0x0000 },
/* Object 0x23A0 */
{NULL , NULL ,  0x23A0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23A0 , aName0x23A0 , &P9280x23A0 , NULL , NULL , 0x0000 },
/* Object 0x23A1 */
{NULL , NULL ,  0x23A1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23A1 , aName0x23A1 , &P9290x23A1 , NULL , NULL , 0x0000 },
/* Object 0x23A2 */
{NULL , NULL ,  0x23A2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23A2 , aName0x23A2 , &P9300x23A2 , NULL , NULL , 0x0000 },
/* Object 0x23B8 */
{NULL , NULL ,  0x23B8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23B8 , aName0x23B8 , &P9520x23B8 , NULL , NULL , 0x0000 },
/* Object 0x23B9 */
{NULL , NULL ,  0x23B9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23B9 , aName0x23B9 , &P9530x23B9 , NULL , NULL , 0x0000 },
/* Object 0x23BA */
{NULL , NULL ,  0x23BA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23BA , aName0x23BA , &P9540x23BA , NULL , NULL , 0x0000 },
/* Object 0x23BB */
{NULL , NULL ,  0x23BB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23BB , aName0x23BB , &P9550x23BB , NULL , NULL , 0x0000 },
/* Object 0x23BC */
{NULL , NULL ,  0x23BC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23BC , aName0x23BC , &P9560x23BC , NULL , NULL , 0x0000 },
/* Object 0x23BD */
{NULL , NULL ,  0x23BD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23BD , aName0x23BD , &P9570x23BD , NULL , NULL , 0x0000 },
/* Object 0x23BE */
{NULL , NULL ,  0x23BE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23BE , aName0x23BE , &P9580x23BE , NULL , NULL , 0x0000 },
/* Object 0x23BF */
{NULL , NULL ,  0x23BF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23BF , aName0x23BF , &P9590x23BF , NULL , NULL , 0x0000 },
/* Object 0x23C0 */
{NULL , NULL ,  0x23C0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23C0 , aName0x23C0 , &P9600x23C0 , NULL , NULL , 0x0000 },
/* Object 0x23C1 */
{NULL , NULL ,  0x23C1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23C1 , aName0x23C1 , &P9610x23C1 , NULL , NULL , 0x0000 },
/* Object 0x23C2 */
{NULL , NULL ,  0x23C2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23C2 , aName0x23C2 , &P9620x23C2 , NULL , NULL , 0x0000 },
/* Object 0x23C3 */
{NULL , NULL ,  0x23C3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23C3 , aName0x23C3 , &P9630x23C3 , NULL , NULL , 0x0000 },
/* Object 0x23C4 */
{NULL , NULL ,  0x23C4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23C4 , aName0x23C4 , &P9640x23C4 , NULL , NULL , 0x0000 },
/* Object 0x23C5 */
{NULL , NULL ,  0x23C5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23C5 , aName0x23C5 , &P9650x23C5 , NULL , NULL , 0x0000 },
/* Object 0x23C6 */
{NULL , NULL ,  0x23C6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23C6 , aName0x23C6 , &P9660x23C6 , NULL , NULL , 0x0000 },
/* Object 0x23C9 */
{NULL , NULL ,  0x23C9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23C9 , aName0x23C9 , &P9690x23C9 , NULL , NULL , 0x0000 },
/* Object 0x23CA */
{NULL , NULL ,  0x23CA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23CA , aName0x23CA , &P9700x23CA , NULL , NULL , 0x0000 },
/* Object 0x23CB */
{NULL , NULL ,  0x23CB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23CB , aName0x23CB , &P9710x23CB , NULL , NULL , 0x0000 },
/* Object 0x23CC */
{NULL , NULL ,  0x23CC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23CC , aName0x23CC , &P9720x23CC , NULL , NULL , 0x0000 },
/* Object 0x23CD */
{NULL , NULL ,  0x23CD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23CD , aName0x23CD , &P9730x23CD , NULL , NULL , 0x0000 },
/* Object 0x23CE */
{NULL , NULL ,  0x23CE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23CE , aName0x23CE , &P9740x23CE , NULL , NULL , 0x0000 },
/* Object 0x23CF */
{NULL , NULL ,  0x23CF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23CF , aName0x23CF , &P9750x23CF , NULL , NULL , 0x0000 },
/* Object 0x23D0 */
{NULL , NULL ,  0x23D0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23D0 , aName0x23D0 , &P9760x23D0 , NULL , NULL , 0x0000 },
/* Object 0x23D1 */
{NULL , NULL ,  0x23D1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23D1 , aName0x23D1 , &P9770x23D1 , NULL , NULL , 0x0000 },
/* Object 0x23E7 */
{NULL , NULL ,  0x23E7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23E7 , aName0x23E7 , &P9990x23E7 , NULL , NULL , 0x0000 },
/* Object 0x23E8 */
{NULL , NULL ,  0x23E8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23E8 , aName0x23E8 , &P10000x23E8 , NULL , NULL , 0x0000 },
/* Object 0x23E9 */
{NULL , NULL ,  0x23E9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23E9 , aName0x23E9 , &P10010x23E9 , NULL , NULL , 0x0000 },
/* Object 0x23EA */
{NULL , NULL ,  0x23EA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23EA , aName0x23EA , &P10020x23EA , NULL , NULL , 0x0000 },
/* Object 0x23EB */
{NULL , NULL ,  0x23EB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23EB , aName0x23EB , &P10030x23EB , NULL , NULL , 0x0000 },
/* Object 0x23EC */
{NULL , NULL ,  0x23EC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23EC , aName0x23EC , &P10040x23EC , NULL , NULL , 0x0000 },
/* Object 0x23ED */
{NULL , NULL ,  0x23ED , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23ED , aName0x23ED , &P10050x23ED , NULL , NULL , 0x0000 },
/* Object 0x23EE */
{NULL , NULL ,  0x23EE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23EE , aName0x23EE , &P10060x23EE , NULL , NULL , 0x0000 },
/* Object 0x23EF */
{NULL , NULL ,  0x23EF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23EF , aName0x23EF , &P10070x23EF , NULL , NULL , 0x0000 },
/* Object 0x23F0 */
{NULL , NULL ,  0x23F0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F0 , aName0x23F0 , &P10080x23F0 , NULL , NULL , 0x0000 },
/* Object 0x23F1 */
{NULL , NULL ,  0x23F1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F1 , aName0x23F1 , &P10090x23F1 , NULL , NULL , 0x0000 },
/* Object 0x23F2 */
{NULL , NULL ,  0x23F2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F2 , aName0x23F2 , &P10100x23F2 , NULL , NULL , 0x0000 },
/* Object 0x23F3 */
{NULL , NULL ,  0x23F3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F3 , aName0x23F3 , &P10110x23F3 , NULL , NULL , 0x0000 },
/* Object 0x23F4 */
{NULL , NULL ,  0x23F4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F4 , aName0x23F4 , &P10120x23F4 , NULL , NULL , 0x0000 },
/* Object 0x23F5 */
{NULL , NULL ,  0x23F5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F5 , aName0x23F5 , &P10130x23F5 , NULL , NULL , 0x0000 },
/* Object 0x23F6 */
{NULL , NULL ,  0x23F6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F6 , aName0x23F6 , &P10140x23F6 , NULL , NULL , 0x0000 },
/* Object 0x23F7 */
{NULL , NULL ,  0x23F7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F7 , aName0x23F7 , &P10150x23F7 , NULL , NULL , 0x0000 },
/* Object 0x23F8 */
{NULL , NULL ,  0x23F8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F8 , aName0x23F8 , &P10160x23F8 , NULL , NULL , 0x0000 },
/* Object 0x23F9 */
{NULL , NULL ,  0x23F9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23F9 , aName0x23F9 , &P10170x23F9 , NULL , NULL , 0x0000 },
/* Object 0x23FA */
{NULL , NULL ,  0x23FA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23FA , aName0x23FA , &P10180x23FA , NULL , NULL , 0x0000 },
/* Object 0x23FB */
{NULL , NULL ,  0x23FB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23FB , aName0x23FB , &P10190x23FB , NULL , NULL , 0x0000 },
/* Object 0x23FC */
{NULL , NULL ,  0x23FC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23FC , aName0x23FC , &P10200x23FC , NULL , NULL , 0x0000 },
/* Object 0x23FD */
{NULL , NULL ,  0x23FD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23FD , aName0x23FD , &P10210x23FD , NULL , NULL , 0x0000 },
/* Object 0x23FE */
{NULL , NULL ,  0x23FE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23FE , aName0x23FE , &P10220x23FE , NULL , NULL , 0x0000 },
/* Object 0x23FF */
{NULL , NULL ,  0x23FF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x23FF , aName0x23FF , &P10230x23FF , NULL , NULL , 0x0000 },
/* Object 0x2401 */
{NULL , NULL ,  0x2401 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2401 , aName0x2401 , &P10250x2401 , NULL , NULL , 0x0000 },
/* Object 0x2402 */
{NULL , NULL ,  0x2402 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2402 , aName0x2402 , &P10260x2402 , NULL , NULL , 0x0000 },
/* Object 0x2403 */
{NULL , NULL ,  0x2403 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2403 , aName0x2403 , &P10270x2403 , NULL , NULL , 0x0000 },
/* Object 0x2405 */
{NULL , NULL ,  0x2405 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2405 , aName0x2405 , &P10290x2405 , NULL , NULL , 0x0000 },
/* Object 0x2406 */
{NULL , NULL ,  0x2406 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2406 , aName0x2406 , &P10300x2406 , NULL , NULL , 0x0000 },
/* Object 0x2407 */
{NULL , NULL ,  0x2407 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2407 , aName0x2407 , &P10310x2407 , NULL , NULL , 0x0000 },
/* Object 0x2408 */
{NULL , NULL ,  0x2408 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2408 , aName0x2408 , &P10320x2408 , NULL , NULL , 0x0000 },
/* Object 0x2409 */
{NULL , NULL ,  0x2409 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2409 , aName0x2409 , &P10330x2409 , NULL , NULL , 0x0000 },
/* Object 0x240A */
{NULL , NULL ,  0x240A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x240A , aName0x240A , &P10340x240A , NULL , NULL , 0x0000 },
/* Object 0x240B */
{NULL , NULL ,  0x240B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x240B , aName0x240B , &P10350x240B , NULL , NULL , 0x0000 },
/* Object 0x240C */
{NULL , NULL ,  0x240C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x240C , aName0x240C , &P10360x240C , NULL , NULL , 0x0000 },
/* Object 0x240E */
{NULL , NULL ,  0x240E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x240E , aName0x240E , &P10380x240E , NULL , NULL , 0x0000 },
/* Object 0x2410 */
{NULL , NULL ,  0x2410 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2410 , aName0x2410 , &P10400x2410 , NULL , NULL , 0x0000 },
/* Object 0x2411 */
{NULL , NULL ,  0x2411 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2411 , aName0x2411 , &P10410x2411 , NULL , NULL , 0x0000 },
/* Object 0x2412 */
{NULL , NULL ,  0x2412 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2412 , aName0x2412 , &P10420x2412 , NULL , NULL , 0x0000 },
/* Object 0x2413 */
{NULL , NULL ,  0x2413 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2413 , aName0x2413 , &P10430x2413 , NULL , NULL , 0x0000 },
/* Object 0x2414 */
{NULL , NULL ,  0x2414 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2414 , aName0x2414 , &P10440x2414 , NULL , NULL , 0x0000 },
/* Object 0x2417 */
{NULL , NULL ,  0x2417 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2417 , aName0x2417 , &P10470x2417 , NULL , NULL , 0x0000 },
/* Object 0x2418 */
{NULL , NULL ,  0x2418 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2418 , aName0x2418 , &P10480x2418 , NULL , NULL , 0x0000 },
/* Object 0x2419 */
{NULL , NULL ,  0x2419 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2419 , aName0x2419 , &P10490x2419 , NULL , NULL , 0x0000 },
/* Object 0x241A */
{NULL , NULL ,  0x241A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x241A , aName0x241A , &P10500x241A , NULL , NULL , 0x0000 },
/* Object 0x241B */
{NULL , NULL ,  0x241B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x241B , aName0x241B , &P10510x241B , NULL , NULL , 0x0000 },
/* Object 0x241C */
{NULL , NULL ,  0x241C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x241C , aName0x241C , &P10520x241C , NULL , NULL , 0x0000 },
/* Object 0x241D */
{NULL , NULL ,  0x241D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x241D , aName0x241D , &P10530x241D , NULL , NULL , 0x0000 },
/* Object 0x241E */
{NULL , NULL ,  0x241E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x241E , aName0x241E , &P10540x241E , NULL , NULL , 0x0000 },
/* Object 0x241F */
{NULL , NULL ,  0x241F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x241F , aName0x241F , &P10550x241F , NULL , NULL , 0x0000 },
/* Object 0x2424 */
{NULL , NULL ,  0x2424 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2424 , aName0x2424 , &P10600x2424 , NULL , NULL , 0x0000 },
/* Object 0x2425 */
{NULL , NULL ,  0x2425 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2425 , aName0x2425 , &P10610x2425 , NULL , NULL , 0x0000 },
/* Object 0x2426 */
{NULL , NULL ,  0x2426 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2426 , aName0x2426 , &P10620x2426 , NULL , NULL , 0x0000 },
/* Object 0x2427 */
{NULL , NULL ,  0x2427 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2427 , aName0x2427 , &P10630x2427 , NULL , NULL , 0x0000 },
/* Object 0x2428 */
{NULL , NULL ,  0x2428 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2428 , aName0x2428 , &P10640x2428 , NULL , NULL , 0x0000 },
/* Object 0x2429 */
{NULL , NULL ,  0x2429 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2429 , aName0x2429 , &P10650x2429 , NULL , NULL , 0x0000 },
/* Object 0x242A */
{NULL , NULL ,  0x242A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x242A , aName0x242A , &P10660x242A , NULL , NULL , 0x0000 },
/* Object 0x242B */
{NULL , NULL ,  0x242B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x242B , aName0x242B , &P10670x242B , NULL , NULL , 0x0000 },
/* Object 0x242E */
{NULL , NULL ,  0x242E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x242E , aName0x242E , &P10700x242E , NULL , NULL , 0x0000 },
/* Object 0x2431 */
{NULL , NULL ,  0x2431 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2431 , aName0x2431 , &P10730x2431 , NULL , NULL , 0x0000 },
/* Object 0x2432 */
{NULL , NULL ,  0x2432 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2432 , aName0x2432 , &P10740x2432 , NULL , NULL , 0x0000 },
/* Object 0x2433 */
{NULL , NULL ,  0x2433 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2433 , aName0x2433 , &P10750x2433 , NULL , NULL , 0x0000 },
/* Object 0x2434 */
{NULL , NULL ,  0x2434 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2434 , aName0x2434 , &P10760x2434 , NULL , NULL , 0x0000 },
/* Object 0x2435 */
{NULL , NULL ,  0x2435 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2435 , aName0x2435 , &P10770x2435 , NULL , NULL , 0x0000 },
/* Object 0x2436 */
{NULL , NULL ,  0x2436 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2436 , aName0x2436 , &P10780x2436 , NULL , NULL , 0x0000 },
/* Object 0x2437 */
{NULL , NULL ,  0x2437 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2437 , aName0x2437 , &P10790x2437 , NULL , NULL , 0x0000 },
/* Object 0x2438 */
{NULL , NULL ,  0x2438 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2438 , aName0x2438 , &P10800x2438 , NULL , NULL , 0x0000 },
/* Object 0x2452 */
{NULL , NULL ,  0x2452 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2452 , aName0x2452 , &P11060x2452 , NULL , NULL , 0x0000 },
/* Object 0x2454 */
{NULL , NULL ,  0x2454 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2454 , aName0x2454 , &P11080x2454 , NULL , NULL , 0x0000 },
/* Object 0x2455 */
{NULL , NULL ,  0x2455 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2455 , aName0x2455 , &P11090x2455 , NULL , NULL , 0x0000 },
/* Object 0x2456 */
{NULL , NULL ,  0x2456 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2456 , aName0x2456 , &P11100x2456 , NULL , NULL , 0x0000 },
/* Object 0x2457 */
{NULL , NULL ,  0x2457 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2457 , aName0x2457 , &P11110x2457 , NULL , NULL , 0x0000 },
/* Object 0x2458 */
{NULL , NULL ,  0x2458 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2458 , aName0x2458 , &P11120x2458 , NULL , NULL , 0x0000 },
/* Object 0x2460 */
{NULL , NULL ,  0x2460 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2460 , aName0x2460 , &P11200x2460 , NULL , NULL , 0x0000 },
/* Object 0x2461 */
{NULL , NULL ,  0x2461 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2461 , aName0x2461 , &P11210x2461 , NULL , NULL , 0x0000 },
/* Object 0x2462 */
{NULL , NULL ,  0x2462 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2462 , aName0x2462 , &P11220x2462 , NULL , NULL , 0x0000 },
/* Object 0x2465 */
{NULL , NULL ,  0x2465 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2465 , aName0x2465 , &P11250x2465 , NULL , NULL , 0x0000 },
/* Object 0x2466 */
{NULL , NULL ,  0x2466 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2466 , aName0x2466 , &P11260x2466 , NULL , NULL , 0x0000 },
/* Object 0x2467 */
{NULL , NULL ,  0x2467 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2467 , aName0x2467 , &P11270x2467 , NULL , NULL , 0x0000 },
/* Object 0x2468 */
{NULL , NULL ,  0x2468 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2468 , aName0x2468 , &P11280x2468 , NULL , NULL , 0x0000 },
/* Object 0x2469 */
{NULL , NULL ,  0x2469 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2469 , aName0x2469 , &P11290x2469 , NULL , NULL , 0x0000 },
/* Object 0x246A */
{NULL , NULL ,  0x246A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x246A , aName0x246A , &P11300x246A , NULL , NULL , 0x0000 },
/* Object 0x246B */
{NULL , NULL ,  0x246B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x246B , aName0x246B , &P11310x246B , NULL , NULL , 0x0000 },
/* Object 0x2480 */
{NULL , NULL ,  0x2480 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2480 , aName0x2480 , &P11520x2480 , NULL , NULL , 0x0000 },
/* Object 0x2481 */
{NULL , NULL ,  0x2481 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2481 , aName0x2481 , &P11530x2481 , NULL , NULL , 0x0000 },
/* Object 0x2482 */
{NULL , NULL ,  0x2482 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2482 , aName0x2482 , &P11540x2482 , NULL , NULL , 0x0000 },
/* Object 0x2483 */
{NULL , NULL ,  0x2483 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2483 , aName0x2483 , &P11550x2483 , NULL , NULL , 0x0000 },
/* Object 0x2486 */
{NULL , NULL ,  0x2486 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2486 , aName0x2486 , &P11580x2486 , NULL , NULL , 0x0000 },
/* Object 0x2487 */
{NULL , NULL ,  0x2487 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2487 , aName0x2487 , &P11590x2487 , NULL , NULL , 0x0000 },
/* Object 0x2488 */
{NULL , NULL ,  0x2488 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2488 , aName0x2488 , &P11600x2488 , NULL , NULL , 0x0000 },
/* Object 0x2489 */
{NULL , NULL ,  0x2489 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x2489 , aName0x2489 , &P11610x2489 , NULL , NULL , 0x0000 },
/* Object 0x248A */
{NULL , NULL ,  0x248A , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x248A , aName0x248A , &P11620x248A , NULL , NULL , 0x0000 },
/* Object 0x248B */
{NULL , NULL ,  0x248B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x248B , aName0x248B , &P11630x248B , NULL , NULL , 0x0000 },
/* Object 0x248C */
{NULL , NULL ,  0x248C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x248C , aName0x248C , &P11640x248C , NULL , NULL , 0x0000 },
/* Object 0x248D */
{NULL , NULL ,  0x248D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x248D , aName0x248D , &P11650x248D , NULL , NULL , 0x0000 },
/* Object 0x248E */
{NULL , NULL ,  0x248E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x248E , aName0x248E , &P11660x248E , NULL , NULL , 0x0000 },
/* Object 0x248F */
{NULL , NULL ,  0x248F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x248F , aName0x248F , &P11670x248F , NULL , NULL , 0x0000 },
/* Object 0x24B0 */
{NULL , NULL ,  0x24B0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24B0 , aName0x24B0 , &P12000x24B0 , NULL , NULL , 0x0000 },
/* Object 0x24B1 */
{NULL , NULL ,  0x24B1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24B1 , aName0x24B1 , &P12010x24B1 , NULL , NULL , 0x0000 },
/* Object 0x24B2 */
{NULL , NULL ,  0x24B2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24B2 , aName0x24B2 , &P12020x24B2 , NULL , NULL , 0x0000 },
/* Object 0x24B3 */
{NULL , NULL ,  0x24B3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24B3 , aName0x24B3 , &P12030x24B3 , NULL , NULL , 0x0000 },
/* Object 0x24B4 */
{NULL , NULL ,  0x24B4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24B4 , aName0x24B4 , &P12040x24B4 , NULL , NULL , 0x0000 },
/* Object 0x24B5 */
{NULL , NULL ,  0x24B5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24B5 , aName0x24B5 , &P12050x24B5 , NULL , NULL , 0x0000 },
/* Object 0x24B6 */
{NULL , NULL ,  0x24B6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24B6 , aName0x24B6 , &P12060x24B6 , NULL , NULL , 0x0000 },
/* Object 0x24B7 */
{NULL , NULL ,  0x24B7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24B7 , aName0x24B7 , &P12070x24B7 , NULL , NULL , 0x0000 },
/* Object 0x24BA */
{NULL , NULL ,  0x24BA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24BA , aName0x24BA , &P12100x24BA , NULL , NULL , 0x0000 },
/* Object 0x24BB */
{NULL , NULL ,  0x24BB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24BB , aName0x24BB , &P12110x24BB , NULL , NULL , 0x0000 },
/* Object 0x24BC */
{NULL , NULL ,  0x24BC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24BC , aName0x24BC , &P12120x24BC , NULL , NULL , 0x0000 },
/* Object 0x24BD */
{NULL , NULL ,  0x24BD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24BD , aName0x24BD , &P12130x24BD , NULL , NULL , 0x0000 },
/* Object 0x24BE */
{NULL , NULL ,  0x24BE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24BE , aName0x24BE , &P12140x24BE , NULL , NULL , 0x0000 },
/* Object 0x24BF */
{NULL , NULL ,  0x24BF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x24BF , aName0x24BF , &P12150x24BF , NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};



#endif /* USER_GDCOBJECTS_H_ */
