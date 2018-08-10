#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	int n1,n2;
	if(argc!=4)
	{
		printf("./a.out num op num\n");
		return;
	}

	n1=atoi(argv[1]);
	n2=atoi(argv[3]);

	switch(argv[2][0])
	{
		case '+':printf("%d + %d = %d\n",n1,n2,n1+n2);
			 break;
		case '-':printf("%d - %d = %d\n",n1,n2,n1-n2);
			 break;
		case '*':printf("%d * %d = %d\n",n1,n2,n1*n2);
			 break;
		case '/':printf("%d / %d = %d\n",n1,n2,n1/n2);
			 break;
		default:printf("wrong choise\n");
	}
	


}



















