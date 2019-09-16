/*
12. Write a program to swap the adjucent bytes of  a given 4-digit hexadecimal number.
      Ex : given number  = 0x1234;
	   after swap    = 0x3412;
*/
#include<stdio.h>
main()
{	int o;
	unsigned int x,i,j,m,n;
	printf("Enter the number :\n");
	scanf("%x",&x);
	for(o=31;o>=0;o--){printf("%d",(x>>o)&1);}
	printf("\n");
	for(i=0,j=31;i<j;i++,j--)
	{
		m=x>>i&1;
		n=x>>j&1;
		if(m!=n)
		{
			x=x^(1<<i);
			x=x^(1<<j);
		}
	}
	printf("%x\n",x);
	for(o=31;o>=0;o--){printf("%d",(x>>o)&1);}
	printf("\n");
}

