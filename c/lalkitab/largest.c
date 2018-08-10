#include<stdio.h>
main()
{
	int num,max=0;
	
	printf("Enter the number :");
	scanf("%d",&num);

	while(num)
	{
		if(num%10>max)
		{
		max=num%10;
		}
	num/=10;
	}
	printf("Large no = %d \n",max);
}
