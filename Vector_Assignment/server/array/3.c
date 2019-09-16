#include<stdio.h>
main()
{

	int num,i,j,k,u;
	
	printf("Enter the elements no\n");
	scanf("%d",&num);			// scan the array size

	int a[num],r[num];
	
	printf("Enter the Elements\n");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);			// scan array

	for(i=0;i<num;i++)
	printf("%d ",a[i]);			// print array
	printf("\n");
}	
