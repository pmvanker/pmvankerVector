#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i;
	p=malloc(4*5);
	printf("Enter the Data:\n");
	for(i=0;i<5;i++)
	scanf("%d",&p[i]);
	for(i=0;i<5;i++)
	printf("%d\n",p[i]);
}
