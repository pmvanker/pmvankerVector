#include<stdio.h>
main()
{
	float f=3.5;
	char *p,i,j;
	p=(char *)&f;
	p=p+3;
	for(i=0;i<4;i++)
	{
		for(j=7;j>0;j--)
		printf("%d ",*p>>j&1);
	p=p-1;
	}
	printf("\n");

}
