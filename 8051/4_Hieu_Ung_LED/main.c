#include <regx52.h>

void Delay(unsigned int t)
{
		unsigned int x, y;
		for(x = 0; x < t; x++)
		{
				for(y = 0; y < 123; y++);
		}
}

void main()
{
	unsigned int i;
	while(1) // Infinite Loop
	{
		for(i = 0; i < 5; i++)
		{
				P0 = 0x00;
				Delay(500);
				P0 = 0xFF;
				Delay(500); 
		}
		
		for(i = 0; i < 5; i++)
		{
				P0 = 0xAA;
				Delay(500);
				P0 = 0x55;
				Delay(500);  
		}
	
		for(i = 0; i < 5; i++)
		{
				P0 = 0xF0;
				Delay(500);
				P0 = 0x0F;
				Delay(500); 
		}
	}
}