/*set,clear,toggle bit usint bitwise op*/
#include<stdio.h>
main()
{
int num,c,pos,i,m=3;
printf("Enter the num:");
scanf("%d",&num);
printf("1)Set a bit\n2)clear a bit\n3)toggle a bit\nYour choce :");
scanf("%d",&c);
back:	printf("Enter position");
	scanf("%d",&pos);
	if(pos>32 && m>1)
	{
		printf("Try Again you Have %d Try left: ",m);
		m--;	
		goto back;
	}
printf("%d\n",num);
	if(c==1)
	{
		num=num|1<<pos;			
	}
	if(c==2)
	{
		num=num & ~(1<<pos);
	}
	if(c==3)
	{
		num=num^1<<pos;				
	}
printf("%d\n",num);
for(i=31;i>=0;i--){printf("%d",(num>>i)&1);}
printf("\n");
}
