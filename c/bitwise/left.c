#include<stdio.h>

void d2bfunc(int x);
main()
{
	int a,b;
	char ch;
	
	printf("Enter Value : ");
	scanf("%d",&a);

	d2bfunc(a);

	printf("how much you wanna switch : ");	
	scanf("\n%d",&b);	

	printf("Right or Left < , > : ");
	scanf("\n%c",&ch);

	switch(ch)
	{
		case '<' :
			a=a<<b;
			break;
		case '>' :
			a=a>>b;
			break;
	}
	d2bfunc(a);
	printf("%x\n",a);

}

void d2bfunc(int x)
{
int i1,z;
z=x;
for (i1=31;i1>=0;i1--)
	{
		printf("%d",(z>>i1)&1);
	}
printf("\n");
}
