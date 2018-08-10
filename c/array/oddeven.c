#include<stdio.h>
main()
{
	int a[5],i,j,ele,o,e;
	e=o=0;	
	ele=sizeof(a)/sizeof(a[0]);	

	for(i=0;i<ele;i++)
	{
	printf("Enter a[%d] = ",i);
	scanf("%d",a+i);
	}

	for(i=0;i<ele;i++)
	printf("%d ",*(a+i));
	
	printf("\n------------------------------------------\n");
	
	printf("even\todd\n");
	for(i=0;i<ele;i++)
	{

		if(a[i]%2)
		{
			printf("%d",a[i]);
			e++;
		}
		else
		{
			printf("\t%d ",a[i]);
			o++;
		}
	printf("\n");
	}
		printf("\neven = %d odd = %d\n",e,o);
	
}	
