void delay(unsigned char n)
{
 T0PR = 15000000 -1;		// 1 sec delay
 T0PC = T0TC = 0;
 T0TCR = 0x01 ;				// Start Timer 0
 while(T0TC<n);				//STOP timer 0
 T0TCR = 0x0;
}
