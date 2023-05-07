/*
 * CARD_MCU.c
 *
 * Created: 5/3/2023 2:44:07 PM
 * Author : engma
 */ 

//#include <avr/io.h>
//#include <util/delay.h>

#include "MCAL/twi/twi.h"
#include <util/delay.h>


int main(void)
{
	DDRA = 0xff;
	DDRB = 0xff;
	DDRD = 0xff;
	st_twiConfigType x;
	x.u16_a_clock = 400;
	x.u8_a_prescaler = TWI_PRESCALER_1;
	TWI_init(&x);
	for (int i = 0 ; i <10 ; i+=2)
	{
		PORTA = TWI_start();
		PORTB = TWI_wrtie(0x10,i);
		TWI_repeated_start();
		TWI_wrtie(0x10+i,i+1);
		PORTD = TWI_stop();
		_delay_ms(2000);
	}
    /* Replace with your application code */
    while (1) 
    {
		
		
    }
}

