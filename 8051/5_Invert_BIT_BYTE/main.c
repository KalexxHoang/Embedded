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
	while(1)
	{
		//P0_0 = !P0_0; // Invert BIT
		P0 ^= 0xFF; // Invert BYTE
		// P0 = ~P0;
		Delay(500);
	}
}
		