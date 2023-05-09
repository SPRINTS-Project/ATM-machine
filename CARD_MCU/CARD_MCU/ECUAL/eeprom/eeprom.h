/*
 * eeprom.h
 *
 * Created: 5/9/2023 9:10:08 AM
 *  Author: Mcs
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_


/* ------------------------------------------------------- Includes ---------------------------------------------------------------------*/
#include "../../STD_LIBRARIES/STD_TYPES.h"
#include "../../STD_LIBRARIES/bit_math.h"
#include "../../MCAL/twi/twi.h"

/* ------------------------------------------------------Data Type Declarations ----------------------------------------------------------*/
typedef uint8_t u8_eepromErorrState_t;


/* ------------------------------------------------------ Macro Declarations ------------------------------------------------------------*/

/*The Error state of The EEPROM*/
#define EEPROM_E_OK		 ((u8_eepromErorrState_t)0x00)
#define EEPROM_E_NOK     ((u8_eepromErorrState_t)0x01)
/* ------------------------------------------------------ Macro Like Functions Declarations ---------------------------------------------*/







/* ------------------------------------------------- Software Interfaces Declarations ---------------------------------------------------*/

u8_eepromErorrState_t EEPROM_init(u8_twiPrescalerType u8_a_prescaler, uint8_t u8_a_clock);

u8_eepromErorrState_t EEPROM_writeByte(uint16_t u16_a_add,uint8_t u8_a_data);

u8_eepromErorrState_t EEPROM_readByte(uint16_t u16_a_add,uint8_t* u8Ptr_a_data);





#endif /* EEPROM_H_ */