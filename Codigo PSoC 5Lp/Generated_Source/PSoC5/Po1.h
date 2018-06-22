/*******************************************************************************
* File Name: Po1.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Po1_H) /* Pins Po1_H */
#define CY_PINS_Po1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Po1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Po1__PORT == 15 && ((Po1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Po1_Write(uint8 value);
void    Po1_SetDriveMode(uint8 mode);
uint8   Po1_ReadDataReg(void);
uint8   Po1_Read(void);
void    Po1_SetInterruptMode(uint16 position, uint16 mode);
uint8   Po1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Po1_SetDriveMode() function.
     *  @{
     */
        #define Po1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Po1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Po1_DM_RES_UP          PIN_DM_RES_UP
        #define Po1_DM_RES_DWN         PIN_DM_RES_DWN
        #define Po1_DM_OD_LO           PIN_DM_OD_LO
        #define Po1_DM_OD_HI           PIN_DM_OD_HI
        #define Po1_DM_STRONG          PIN_DM_STRONG
        #define Po1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Po1_MASK               Po1__MASK
#define Po1_SHIFT              Po1__SHIFT
#define Po1_WIDTH              1u

/* Interrupt constants */
#if defined(Po1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Po1_SetInterruptMode() function.
     *  @{
     */
        #define Po1_INTR_NONE      (uint16)(0x0000u)
        #define Po1_INTR_RISING    (uint16)(0x0001u)
        #define Po1_INTR_FALLING   (uint16)(0x0002u)
        #define Po1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Po1_INTR_MASK      (0x01u) 
#endif /* (Po1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Po1_PS                     (* (reg8 *) Po1__PS)
/* Data Register */
#define Po1_DR                     (* (reg8 *) Po1__DR)
/* Port Number */
#define Po1_PRT_NUM                (* (reg8 *) Po1__PRT) 
/* Connect to Analog Globals */                                                  
#define Po1_AG                     (* (reg8 *) Po1__AG)                       
/* Analog MUX bux enable */
#define Po1_AMUX                   (* (reg8 *) Po1__AMUX) 
/* Bidirectional Enable */                                                        
#define Po1_BIE                    (* (reg8 *) Po1__BIE)
/* Bit-mask for Aliased Register Access */
#define Po1_BIT_MASK               (* (reg8 *) Po1__BIT_MASK)
/* Bypass Enable */
#define Po1_BYP                    (* (reg8 *) Po1__BYP)
/* Port wide control signals */                                                   
#define Po1_CTL                    (* (reg8 *) Po1__CTL)
/* Drive Modes */
#define Po1_DM0                    (* (reg8 *) Po1__DM0) 
#define Po1_DM1                    (* (reg8 *) Po1__DM1)
#define Po1_DM2                    (* (reg8 *) Po1__DM2) 
/* Input Buffer Disable Override */
#define Po1_INP_DIS                (* (reg8 *) Po1__INP_DIS)
/* LCD Common or Segment Drive */
#define Po1_LCD_COM_SEG            (* (reg8 *) Po1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Po1_LCD_EN                 (* (reg8 *) Po1__LCD_EN)
/* Slew Rate Control */
#define Po1_SLW                    (* (reg8 *) Po1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Po1_PRTDSI__CAPS_SEL       (* (reg8 *) Po1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Po1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Po1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Po1_PRTDSI__OE_SEL0        (* (reg8 *) Po1__PRTDSI__OE_SEL0) 
#define Po1_PRTDSI__OE_SEL1        (* (reg8 *) Po1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Po1_PRTDSI__OUT_SEL0       (* (reg8 *) Po1__PRTDSI__OUT_SEL0) 
#define Po1_PRTDSI__OUT_SEL1       (* (reg8 *) Po1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Po1_PRTDSI__SYNC_OUT       (* (reg8 *) Po1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Po1__SIO_CFG)
    #define Po1_SIO_HYST_EN        (* (reg8 *) Po1__SIO_HYST_EN)
    #define Po1_SIO_REG_HIFREQ     (* (reg8 *) Po1__SIO_REG_HIFREQ)
    #define Po1_SIO_CFG            (* (reg8 *) Po1__SIO_CFG)
    #define Po1_SIO_DIFF           (* (reg8 *) Po1__SIO_DIFF)
#endif /* (Po1__SIO_CFG) */

/* Interrupt Registers */
#if defined(Po1__INTSTAT)
    #define Po1_INTSTAT            (* (reg8 *) Po1__INTSTAT)
    #define Po1_SNAP               (* (reg8 *) Po1__SNAP)
    
	#define Po1_0_INTTYPE_REG 		(* (reg8 *) Po1__0__INTTYPE)
#endif /* (Po1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Po1_H */


/* [] END OF FILE */
