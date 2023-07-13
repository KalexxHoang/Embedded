#include <REGX52.H>

// Connect LED_PIN to Port P0.0
// LED_PIN is just a name 
sbit LED_PIN = P0^0;

void Delay_ms(unsigned int t)
{
		unsigned int x, y;
		for(x = 0; x < t; x++)
		{
				for(y = 0; y < 123; y++);	// Delay 1 ms
		}
}

void main()
{
		while(1) // Infinite Loop
		{
				LED_PIN = !LED_PIN; // Invert this LED_PIN
				Delay_ms(500); // Delay 500 ms
		}
}