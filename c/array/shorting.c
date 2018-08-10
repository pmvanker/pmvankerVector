/*
 ============================================================================
 Name        : vector.c
 Author      : pmvanker
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
void bubble(int *,int);
void selection(int *p,int n);
void main()
{
	int a[10]={1,6,3,6,9,4,2,5,7},i;
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\nAfter Selection Short\n");
	bubble(a,10);
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
}

void bubble(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}
void selection(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(p[i]<p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}


