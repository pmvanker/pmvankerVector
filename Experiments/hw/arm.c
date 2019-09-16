#include<stdio.h>
main()
{
	int i,sum,temp;
	i=temp=153;
	sum=0;
	while(i)
	{
		sum=sum+( (i%10) * (i%10) * (i%10));	
		i/=10;
	}
	sum==temp?printf("arm\n"):printf("not arm\n");


}
