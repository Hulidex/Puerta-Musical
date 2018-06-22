/*******************************************************************************
* File Name: SR04Echo.h  
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

#if !defined(CY_PINS_SR04Echo_H) /* Pins SR04Echo_H */
#define CY_PINS_SR04Echo_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SR04Echo_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SR04Echo__PORT == 15 && ((SR04Echo__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SR04Echo_Write(uint8 value);
void    SR04Echo_SetDriveMode(uint8 mode);
uint8   SR04Echo_ReadDataReg(void);
uint8   SR04Echo_Read(void);
void    SR04Echo_SetInterruptMode(uint16 position, uint16 mode);
uint8   SR04Echo_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SR04Echo_SetDriveMode() function.
     *  @{
     */
        #define SR04Echo_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define SR04Echo_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define SR04Echo_DM_RES_UP          PIN_DM_RES_UP
        #define SR04Echo_DM_RES_DWN         PIN_DM_RES_DWN
        #define SR04Echo_DM_OD_LO           PIN_DM_OD_LO
        #define SR04Echo_DM_OD_HI           PIN_DM_OD_HI
        #define SR04Echo_DM_STRONG          PIN_DM_STRONG
        #define SR04Echo_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SR04Echo_MASK               SR04Echo__MASK
#define SR04Echo_SHIFT              SR04Echo__SHIFT
#define SR04Echo_WIDTH              1u

/* Interrupt constants */
#if defined(SR04Echo__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SR04Echo_SetInterruptMode() function.
     *  @{
     */
        #define SR04Echo_INTR_NONE      (uint16)(0x0000u)
        #define SR04Echo_INTR_RISING    (uint16)(0x0001u)
        #define SR04Echo_INTR_FALLING   (uint16)(0x0002u)
        #define SR04Echo_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define SR04Echo_INTR_MASK      (0x01u) 
#endif /* (SR04Echo__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SR04Echo_PS                     (* (reg8 *) SR04Echo__PS)
/* Data Register */
#define SR04Echo_DR                     (* (reg8 *) SR04Echo__DR)
/* Port Number */
#define SR04Echo_PRT_NUM                (* (reg8 *) SR04Echo__PRT) 
/* Connect to Analog Globals */                                                  
#define SR04Echo_AG                     (* (reg8 *) SR04Echo__AG)                       
/* Analog MUX bux enable */
#define SR04Echo_AMUX                   (* (reg8 *) SR04Echo__AMUX) 
/* Bidirectional Enable */                                                        
#define SR04Echo_BIE                    (* (reg8 *) SR04Echo__BIE)
/* Bit-mask for Aliased Register Access */
#define SR04Echo_BIT_MASK               (* (reg8 *) SR04Echo__BIT_MASK)
/* Bypass Enable */
#define SR04Echo_BYP                    (* (reg8 *) SR04Echo__BYP)
/* Port wide control signals */                                                   
#define SR04Echo_CTL                    (* (reg8 *) SR04Echo__CTL)
/* Drive Modes */
#define SR04Echo_DM0                    (* (reg8 *) SR04Echo__DM0) 
#define SR04Echo_DM1                    (* (reg8 *) SR04Echo__DM1)
#define SR04Echo_DM2                    (* (reg8 *) SR04Echo__DM2) 
/* Input Buffer Disable Override */
#define SR04Echo_INP_DIS                (* (reg8 *) SR04Echo__INP_DIS)
/* LCD Common or Segment Drive */
#define SR04Echo_LCD_COM_SEG            (* (reg8 *) SR04Echo__LCD_COM_SEG)
/* Enable Segment LCD */
#define SR04Echo_LCD_EN                 (* (reg8 *) SR04Echo__LCD_EN)
/* Slew Rate Control */
#define SR04Echo_SLW                    (* (reg8 *) SR04Echo__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SR04Echo_PRTDSI__CAPS_SEL       (* (reg8 *) SR04Echo__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SR04Echo_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SR04Echo__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SR04Echo_PRTDSI__OE_SEL0        (* (reg8 *) SR04Echo__PRTDSI__OE_SEL0) 
#define SR04Echo_PRTDSI__OE_SEL1        (* (reg8 *) SR04Echo__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SR04Echo_PRTDSI__OUT_SEL0       (* (reg8 *) SR04Echo__PRTDSI__OUT_SEL0) 
#define SR04Echo_PRTDSI__OUT_SEL1       (* (reg8 *) SR04Echo__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SR04Echo_PRTDSI__SYNC_OUT       (* (reg8 *) SR04Echo__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SR04Echo__SIO_CFG)
    #define SR04Echo_SIO_HYST_EN        (* (reg8 *) SR04Echo__SIO_HYST_EN)
    #define SR04Echo_SIO_REG_HIFREQ     (* (reg8 *) SR04Echo__SIO_REG_HIFREQ)
    #define SR04Echo_SIO_CFG            (* (reg8 *) SR04Echo__SIO_CFG)
    #define SR04Echo_SIO_DIFF           (* (reg8 *) SR04Echo__SIO_DIFF)
#endif /* (SR04Echo__SIO_CFG) */

/* Interrupt Registers */
#if defined(SR04Echo__INTSTAT)
    #define SR04Echo_INTSTAT            (* (reg8 *) SR04Echo__INTSTAT)
    #define SR04Echo_SNAP               (* (reg8 *) SR04Echo__SNAP)
    
	#define SR04Echo_0_INTTYPE_REG 		(* (reg8 *) SR04Echo__0__INTTYPE)
#endif /* (SR04Echo__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_SR04Echo_H */


/* [] END OF FILE */
