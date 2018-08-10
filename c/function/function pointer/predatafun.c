#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
	int (*p[3]) (int,int);
	int m=20,n=10,i;
	p[0]=sum;
	p[1]=sub;
	p[2]=mul;
	p[3]=div;

	for(i=0;i<4;i++)
	{
		printf("result %d: %d\n",i,p[i](m,n));
	}
return 0;
}
int sum(int m,int n)
{
	return m+n;
}
int sub(int m,int n)
{
	return m-n;
}
int mul(int m,int n)
{
	return m*n;
}
int div(int m,int n)
{
	return m/n;
}
