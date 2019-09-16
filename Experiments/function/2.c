#include<stdio.h>
static int i=20;
int main()
{
	static int i=40;
	printf("%d\n",i);
	{
	static	int i=10;
		printf("%d\n",i);
	}
static	int j=10;
static	int j=20;	
}
