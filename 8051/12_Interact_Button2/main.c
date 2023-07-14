#include "main.h"

#define LED_PIN P2_0
#define BUTTON P1_0

void main()
{
	LED_PIN = 0;
	while(1)
	{
		if(BUTTON == 0) // Press the Button
		{
			LED_PIN = 1; // LED light up
		}else
		{
			LED_PIN = 0; // LED darken
		}
	}
}