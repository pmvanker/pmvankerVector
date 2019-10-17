#include <LPC214X.H>
#include "delay.h"
main()
{
	IODIR0 = 0x1;				// P0.0 output
	while(1)
	{
	 	IOCLR0 = 0x01;			// clear P0.0
		delay(1);
		IOSET0 = 0x01;
		delay(1);
	}
}
