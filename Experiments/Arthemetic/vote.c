#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("\twhats your age ? : ");
	scanf("%d",&a);
	if(a<=18)
	{
		printf("\tSorry you can not vote \n");
	}
	else
	{
	printf("\tyou can vote \n");
	}
}
