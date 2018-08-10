#include<stdio.h>
void sum();
void sub();
void mul();
int a,b,o;
int main()
{
	printf("ENter values\n");
	scanf("%d%d",&a,&b);
	printf("sum.sub,mul\n");
	scanf("%d",&o);
	switch(o)
	{
	case 0:sum();break;
	case 1:sub();break;
	default:mul();
	}
}
void sum()
{
	printf("sum %d + %d = %d \n",a,b,a+b);
}
void sub()
{
	printf("sub %d - %d = %d \n",a,b,a-b);
}
void mul()
{
	printf("mul %d * %d = %d \n",a,b,a*b);
}

