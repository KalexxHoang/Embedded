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
	P0 = 0x01;
	while(1)
	{
			Delay(1000);
			P0 <<= 1;
	}
}