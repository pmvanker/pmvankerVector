#include<stdio.h>
main()
{
	float f=3.5;
	int i,*p;
	
	p=(int *)&f;
	printf("*p=%d f=%f\n",*p,f);
	for(i=31;i>=0;i--)
	printf("%d",(*p>>i)&1);


printf("\n");

}
