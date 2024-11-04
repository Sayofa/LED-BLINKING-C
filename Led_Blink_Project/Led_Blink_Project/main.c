/*
 * Led_Blink_Project.c
 *
 * Created: 11/2/2024 7:59:56 PM
 * Author : 20155
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	    DDRB |= (1<<PORTB0);

    while (1) 
    {
		PORTB = (1<< PORTB0);
		_delay_ms(1000);
		PORTB &= ~(1 << PORTB0);
		_delay_ms(1000);
    }
}

