#include <regx52.h>
#include "..\LIB\Delay.h"

void main()
{
	while(1)
	{
		P2_0 = !P2_0;
		Delay(500);
	}
}