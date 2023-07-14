#include "main.h"
#include "..\LIB\Delay.h"

#define LED_PORT P0

void main()
{
	unsigned int i;
	while(1)
	{
		LED_PORT = 0x00;
		
		/* Light up */
		for(i = 0; i < 8; i++)
		{
			LED_PORT |= (1 << i);
			Delay(200);
		}
		
		/* Darken */
		for(i = 0; i < 8; i++)
		{
			LED_PORT &= ~(0x01 << i);
			Delay(200);
		}
	}
}
