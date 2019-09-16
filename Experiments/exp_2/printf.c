#include<stdio.h>
int main()
{

	int  x=10,y=20;
	int *p=&x;

	const int **q;

	q=&p;	// q=p *q=x add

	printf("** q =%d \n",**q);

	//p = x add *p=10
	*q=&y;

	printf("%d \n",*p);

}
