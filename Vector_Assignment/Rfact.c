#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return (n * fact(n-1));
}
main()
{
	int num,ans;
	printf("enter the num\n");
	scanf("%d",&num);
	ans=fact(num);
	printf("factorial %d\n",ans);
}
