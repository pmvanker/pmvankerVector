#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ch;
	unsigned int h=0;
	for(ch=0;ch<=255;ch++)
	{
		printf("Decimal=%d\tASCII=%c\tOCTAL=%o\tHEX=%x\n",ch,ch,ch,h);
		h++;
	}
return 0;
}
