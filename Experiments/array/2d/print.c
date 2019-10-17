#include<stdio.h>
void print(char (*p)[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%s \t",p[i]);
}

