#include "Delay.h"
#include "main.h"


#if(FREQ_OSC == 12000000)
		void Delay(unsigned int t)
		{
			unsigned int x,y;
			for(x = 0; x < t; x++)
			{
				for(y = 0; y < 123; y++);
			}
		}
#elif(FREQ_OSC == 11059200)
		void Delay(unsigned int t)
		{
			unsigned int x,y;
			for(x = 0; x < t; x++)
			{
				for(y = 0; y < 113; y++);
			}
		}
#elif(FREQ_OSC == 8000000)
		void Delay(unsigned int t)
		{
			unsigned int x,y;
			for(x = 0; x < t; x++)
			{
				for(y = 0; y < 218; y++);
			}
		}
#elif(FREQ_OSC == 4000000)
		void Delay(unsigned int t)
		{
			unsigned int x,y;
			for(x = 0; x < t; x++)
			{
				for(y = 0; y < 106; y++);
			}
		}
#else
		#error "Not exist Delay function appropriate"
#endif