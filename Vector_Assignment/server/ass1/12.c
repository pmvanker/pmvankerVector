/*
12. Write a program to swap the adjucent bytes of  a given 4-digit hexadecimal number.
      Ex : given number  = 0x1234;
	   after swap    = 0x3412;
*/
#include<stdio.h>
main()
{	int o;
	unsigned int y,x;
	printf("Enter the number :\n");
	scanf("%x",&x);
	for(o=31;o>=0;o--){printf("%d",(x>>o)&1);}
	//////////////////////////////////////////////////
	printf("\n");
	y= 0xffff & ((x<<8)|(x>>8));

	printf("%x\n",y);
	for(o=31;o>=0;o--){printf("%d",(y>>o)&1);}
	printf("\n");
}

