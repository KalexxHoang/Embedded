#include "main.h"
#include "..\LIB\Delay.h"

#define LED_PORT P0

void main()
{
	LED_PORT = 0xAA;
	while(1)
	{
		LED_PORT = ~LED_PORT;
		Delay(500);
	}
}