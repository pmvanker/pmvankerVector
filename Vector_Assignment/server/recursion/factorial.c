#include<stdio.h>

int fac(int );
int fac(int n)
{
//	for(i=1;i<=n;i++)
//	f=f*i;
	if(n)
	return n*fac(n-1);
	else
	return 1;
}
main()
{
	int num;
	printf("enter the data\n");
	scanf("%d",&num);
	printf("%d\n",fac(num));
}


