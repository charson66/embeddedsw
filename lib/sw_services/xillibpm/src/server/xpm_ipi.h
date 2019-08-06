/******************************************************************************
 *
 * Copyright (C) 2019 Xilinx, Inc.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *
 *
 ******************************************************************************/

#ifndef XPM_IPI_H_
#define XPM_IPI_H_

#include "xpm_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define PAYLOAD_ARG_CNT			(8U)
#define RESPONSE_ARG_CNT		(8U)

#define PM_IPI_TIMEOUT			(~0U)

#ifdef XPAR_XIPIPSU_0_DEVICE_ID
#define PSM_IPI_INT_MASK		XPAR_XIPIPS_TARGET_PSV_PSM_0_CH0_MASK
#else
#define PSM_IPI_INT_MASK		(0U)
#endif /* XPAR_XIPIPSU_0_DEVICE_ID */

XStatus XPm_IpiSend(u32 IpiMask, u32 *Payload);
XStatus XPm_IpiReadStatus(u32 IpiMask);

/*
 * XSDB master IPI-5 mask
 */
#define XSDB_IPI_INT_MASK		(0x00000080U)

#ifdef __cplusplus
}
#endif

#endif /* XPM_IPI_H_ */
