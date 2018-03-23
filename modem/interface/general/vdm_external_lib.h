/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 * Filename:
 * ------------
 *   vdm_external_lib.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines functions for external module usage.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * removed!
 * removed!
 * bCSFB VDM part.
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *****************************************************************************/

#ifndef _VDM_EXTERNAL_LIB_H_
#define _VDM_EXTERNAL_LIB_H_

#include "kal_general_types.h"
#include "l3_inc_enums.h"

/******************************************************************************
 *                                Function
 *****************************************************************************/
/******************************************************************************
 * @brief Get current RAT
 *        
 * @param[in] void
 *
 * @return rat_enum
 *
 *****************************************************************************/
rat_enum vdm_external_get_current_rat(void);

/******************************************************************************
 * @brief Check if any CS voice call is ongoing
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_cs_voice_call_ongoing(void);

/******************************************************************************
 * @brief Check if any IMS voice call is ongoing
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_ims_voice_call_ongoing(void);

/******************************************************************************
 * @brief Check if IMS call failed before domain selection end
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_check_history_ims_failed(void);

#endif // _VDM_EXTERNAL_LIB_H_
