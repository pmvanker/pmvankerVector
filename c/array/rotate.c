#include<stdio.h>
int main()
{
	char a[10]="BCDEF";
	int i;
	printf("The default String = %s\n",a);  //print 
	for(i=4;i>=0;i--)	        	// shifing
	a[i+1]=a[i];
	a[0]=' ';
	printf("After String = %s\n",a);        //print 
	a[0]='A';
	printf("add A = %s\n",a);               //print 
}
