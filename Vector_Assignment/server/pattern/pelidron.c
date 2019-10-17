#include<stdio.h>
main()
{
int num,s=0,r,temp;

	printf("Enter the Number :");
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		r=num%10;
		num/=10;

	s=s*10+r;
//	s=s+r;
	}
	if(s==temp)
	printf("%d\n",s);
	else
	printf("not pelidrom\n");
}
