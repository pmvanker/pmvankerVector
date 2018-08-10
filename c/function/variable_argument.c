#include<stdio.h>
#include<stdarg.h>
int sum(int,...);

int main()
{
int i=10,j=20;
printf("sum = %d\n",sum(2,i,j));
}

int sum(int n,...)
{
	int i,s=0,ret;
	va_list v;
	va_start(v,n);
	for(i=0;i<2;i++)
	{
		ret = va_arg(v,int);
		s=s+ret;
	}
	return s;
}
