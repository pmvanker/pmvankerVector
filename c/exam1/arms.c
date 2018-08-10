/*Armstrong no*/
#include<stdio.h>
int main()
{
	int i,temp,sum,a;

	for(i=0;i<500000;i++)
	{
		temp=i;			//chk arm
		a=i;			//for loop save
		sum=0;
		while(a)
		{
			sum = sum + ( (a%10) * (a%10) * (a%10) );
			a=a/10;
		}
		if(sum==temp)
		printf("%d ",sum);
	}
return 0;
}
