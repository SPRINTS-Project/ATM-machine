/*
 * CARD_MCU.c
 *
 * Created: 5/3/2023 2:44:07 PM
 * Author : engma
 */ 

//#include <avr/io.h>
//#include <util/delay.h>

#include "MCAL/twi/twi.h"
#include "MCAL/SPI/SPI.h"
#include <util/delay.h>

spi_config_t spi_config;
uint8_t data =0;
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
		PORTA = TWI_setAddress(0x10,WRITE);
		PORTB = TWI_wrtie(i);
		TWI_repeated_start();
		TWI_wrtie(i+1);
		PORTD = TWI_stop();
		_delay_ms(2000);
	}
    /* Replace with your application code */
	/*spi_config.spi_interrupt_config = SPI_INT_DISABLE;
	spi_config.spi_state_config = SPI_ENABLE;
	spi_config.spi_data_order_config = SPI_MSB;
	spi_config.spi_mode_config = SPI_SLAVE;
	spi_config.spi_polarity_config = SPI_IDLE_LOW;
	spi_config.spi_chpa_config = SPI_SAMLING_ON_LEADING_EDGE;
	spi_config.spi_prescaller_config = SPI_PRESCALER_4;
	spi_init(&spi_config);*/
    while (1) 
    {
		//spi_write(&data);
		//data++;
		
    }
}

