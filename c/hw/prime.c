#include<stdio.h>
main()
{
	int i,num;
	printf("Enter the num\n");
	scanf("%d",&num);

	for(i=2;i<num;i++)
	{
		if(num%2==0)
		break;	
	}
	(num==i)?printf("prime\n"):printf("not prime\n");
	


}
