#include<stdio.h>
#include<stdarg.h>
int sum(char *,...);

int main()
{
int i=10,j=20,k;
k=sum("sum",i,j,0);
printf("%d\n",k);
}

int sum(char *n,...)
{
	int i,s=0,ret;
	va_list v;
	va_start(v,n);
	for(;;)
	{
		ret = va_arg(v,int);
		if(ret==0)
			break;
		s=s+ret;
	}
	return s;
}
