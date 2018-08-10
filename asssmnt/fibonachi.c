#include<stdio.h>
int main()
{
	int a=1,b=0,c,num,i;
	num=5;
	for(i=0;i<num;i++)
	{
		c=a+b;
		a=b;
		b=c;
	printf("%d ",c);
	}
	printf("\n");
}
