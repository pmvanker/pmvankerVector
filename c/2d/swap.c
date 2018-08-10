#include<stdio.h>
#include<string.h>
void swap(char *p,char *q)
{
	char temp[20];
	strcpy(temp,p);
	strcpy(p,q);
	strcpy(q,temp);
}
