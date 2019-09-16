#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=malloc(4);
	printf("Enter the Data:\n");
	scanf("%d",p);
	printf("%d\n",*p);
}
