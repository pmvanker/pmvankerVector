#include<stdio.h>
main()
{
int num,i,c;
printf("enter the nu:");
scanf("%d",&num);

	for(i=1,c=0;i<=num;i++)
	{
		if(num%i==0)
		c++;
	}

if(c==2)
printf("Prime\n");
else
printf("not prime\n");
}

