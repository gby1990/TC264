/**
 * \file IfxPsi5s_cfg.h
 * \brief PSI5S on-chip implementation data
 * \ingroup IfxLld_Psi5s
 *
 * \version iLLD_1_0_1_12_0
 * \copyright Copyright (c) 2019 Infineon Technologies AG. All rights reserved.
 *
 *
 *
 *                                 IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 *
 * \defgroup IfxLld_Psi5s PSI5S
 * \ingroup IfxLld
 * \defgroup IfxLld_Psi5s_Impl Implementation
 * \ingroup IfxLld_Psi5s
 * \defgroup IfxLld_Psi5s_Std Standard Driver
 * \ingroup IfxLld_Psi5s
 */

#ifndef IFXPSI5S_CFG_H
#define IFXPSI5S_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

#define IFXPSI5S_NUM_CHANNELS                                     8

#define IFXPSI5S_STEP_RANGE                                       1024

#define IFXPSI5S_NUM_WDTS                                         7

#define IFXPSI5S_NUM_SLOTS                                        6

#define IFXPSI5S_ENABLE_CHANNELTRIGGER                            (1 << 8)

#define IFXPSI5S_ENABLE_CHANNEL                                   (1 << 16)

#define IFXPSI5S_BG_RANGE                                         8192

#define IFXPSI5S_FDV_RANGE                                        2048

#define IFXPSI5S_BAUDRATE_1562500                                 1562500

/** \brief //0x00FF0000
 */
#define IFXPSI5S_GCR_CHANNELS_ENABLE_MASK                         ((1 << IFXPSI5S_NUM_CHANNELS) - 1) << 16

        #define IFXPSI5S_GCR_CHANNEL_TRIGGER_COUNTERS_ENABLE_MASK ((1 << IFXPSI5S_NUM_CHANNELS) - 1) << 8

        #define IFXPSI5S_DEFAULT_SLOWCLOCK_FREQ                   4000000

        #define IFXPSI5S_DEFAULT_FASTCLOCK_FREQ                   6000000

        #define IFXPSI5S_DEFAULT_TIMESTAMP_FREQ                   1000000

        #define IFXPSI5S_NUM_MODULES                              (1)

#endif /* IFXPSI5S_CFG_H */
