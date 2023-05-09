/*
 * eeprom.c
 *
 * Created: 5/9/2023 9:10:21 AM
 *  Author: Mcs
 */ 
#include "eeprom.h"
u8_eepromErorrState_t EEPROM_init(u8_twiPrescalerType u8_a_prescaler, uint8_t u8_a_clock)
{
	u8_eepromErorrState_t u8_l_ret = EEPROM_E_NOK;
	if((u8_a_prescaler <TWI_PRESCALER_1) || (u8_a_prescaler > TWI_PRESCALER_64) )
	{
		u8_l_ret = EEPROM_E_NOK;
	}
	else
	{
		//u8_l_ret = TWI_init()
	}
}