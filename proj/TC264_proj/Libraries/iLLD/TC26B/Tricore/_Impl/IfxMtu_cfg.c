/**
 * \file IfxMtu_cfg.c
 * \brief Mtu on-chip implementation data
 *
 * \version iLLD_1_0_1_12_0
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
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
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxMtu_cfg.h"
#include "Mtu/Std/IfxMtu.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

const IfxMtu_SramItem IfxMtu_sramTable[IFXMTU_NUM_MBIST_TABLE_ITEMS] = {
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 4, 16,  6, 0, 1, 8192 }, /**< \brief IfxMtu_MbistSel_cpu1Dspr */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 1, 20,  6, 0, 1, 128  }, /**< \brief IfxMtu_MbistSel_cpu1Dtag */
    {1 * 2, 64,  8, 0, 1, 3072 }, /**< \brief IfxMtu_MbistSel_cpu1Pspr */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 1, 20,  5, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_cpu1Ptag */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 4, 16,  6, 0, 1, 8192 }, /**< \brief IfxMtu_MbistSel_cpu0Dspr */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 32,  8, 0, 1, 3072 }, /**< \brief IfxMtu_MbistSel_cpu0Pspr */
    {2 * 1, 20,  5, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_cpu0Ptag */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 35,  7, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_ethermac */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 64,  8, 0, 1, 4096 }, /**< \brief IfxMtu_MbistSel_mod4 */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 29,  7, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_gtmFifo */
    {1 * 3, 32,  8, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_gtmMcs0 */
    {1 * 3, 32,  8, 0, 1, 512  }, /**< \brief IfxMtu_MbistSel_gtmMcs1 */
    {1 * 1, 24,  7, 0, 1, 128  }, /**< \brief IfxMtu_MbistSel_gtmDpll1a */
    {1 * 1, 24,  7, 0, 1, 384  }, /**< \brief IfxMtu_MbistSel_gtmDpll1b */
    {1 * 1, 24,  7, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_gtmDpll2 */
    {1 * 1, 32,  8, 0, 1, 192  }, /**< \brief IfxMtu_MbistSel_psi5 */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 32,  8, 0, 1, 2496 }, /**< \brief IfxMtu_MbistSel_mcan */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 32,  8, 0, 1, 64   }, /**< \brief IfxMtu_MbistSel_erayObf */
    {1 * 4, 32,  8, 0, 1, 128  }, /**< \brief IfxMtu_MbistSel_erayIbfTbf */
    {1 * 1, 32,  8, 0, 1, 4096 }, /**< \brief IfxMtu_MbistSel_erayMbf */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 1, 8,   6, 0, 1, 40960}, /**< \brief IfxMtu_MbistSel_stdbyRam1 */
    {1 * 4, 32,  8, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_mcds */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem0 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem1 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem2 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem3 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem4 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem5 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem6 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem7 */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 4, 8,   6, 0, 1, 5120 }, /**< \brief IfxMtu_MbistSel_cifJpeg1_4 */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 8,   6, 0, 1, 384  }, /**< \brief IfxMtu_MbistSel_cifJpeg3 */
    {1 * 1, 36,  8, 0, 1, 512  }, /**< \brief IfxMtu_MbistSel_cifCif */
    {1 * 1, 8,   6, 0, 1, 20480}, /**< \brief IfxMtu_MbistSel_stdbyRam2 */
    {1 * 4, 64,  8, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_dma */
    {1 * 2, 128, 9, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_ememXtm0 */
    {1 * 2, 128, 9, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_ememXtm1 */
    {1 * 4, 64,  8, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_fft0 */
    {1 * 1, 16,  6, 0, 1, 512  }, /**< \brief IfxMtu_MbistSel_fft1 */
};
