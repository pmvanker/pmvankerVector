#include<stdio.h>
main()
{
	int i=1,num,f=1;
	printf("enter num:\n");
	scanf("%d",&num);

	while(i<=num)
	{
		f=f*i;
		i++;
	}
	printf("factorial %d\n",f);


}
