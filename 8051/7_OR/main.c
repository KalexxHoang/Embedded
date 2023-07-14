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
	while(1)
	{
			
			for(i = 0; i < 8; i++)
			{
					P0 = 0x00;
					P0 |= (1<<i);
					Delay(500);
			}
	}
}