/*=========================================================================

  Program:   Open ITK Link Library
  Module:    $HeadURL: http://svn.na-mic.org/NAMICSandBox/trunk/OpenIGTLink/Source/igtlutil/igtl_transform.h $
  Language:  C
  Date:      $Date: 2008-12-22 19:05:42 -0500 (Mon, 22 Dec 2008) $
  Version:   $Revision: 3460 $

  Copyright (c) Insight Software Consortium. All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#ifndef __IGTL_TRANSFORM_H
#define __IGTL_TRANSFORM_H

#include "igtl_win32header.h"
#include "igtl_util.h"

#define IGTL_TRANSFORM_SIZE   48

#ifdef __cplusplus
extern "C" {
#endif

/*
typedef igtl_float32[12] transform;
*/

/*
 * Byte order conversion for the header structure
 *
 * This function converts endianness of each member variable
 * in igtl_image_header from host byte order to network byte order,
 * or vice versa.
 */

void igtl_export igtl_transform_convert_byte_order(igtl_float32* transform);


/*
 * CRC calculation
 *
 * This function calculates CRC of transform data.
 *
 */

igtl_uint64 igtl_export igtl_transform_get_crc(igtl_float32* transform);

#ifdef __cplusplus
}
#endif
#endif /*__IGTL_TRANSFORM_H*/

