/*
 * twi.h
 *
 * Created: 5/6/2023 5:19:26 PM
 *  Author: Mahmoud Sarhan
 */ 


#ifndef TWI_H_
#define TWI_H_

#include "../../STD_LIBRARIES/STD_TYPES.h"
#include "../../STD_LIBRARIES/bit_math.h"

typedef uint8_t u8_twiErrorType;

#define TWI_ERROR_OK		0x00
#define TWI_ERROR_NOT_OK	0x01


u8_twiErrorType TWI_init();
u8_twiErrorType TWI_send();






#endif /* TWI_H_ */