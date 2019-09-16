#include<stdio.h>
int main()
{
	char a[20];		//user string
	int i,j,k,c;

	printf("Enter the string\n");
	scanf("%s",a);
	for(c=0;a[c];c++);		//count size

	for(i=0;i<c;i++)		//loop
	{		
		for(j=i+1;j<c;)		// inc/dec depend on if/els
		{
			if(a[i]==a[j])	//compare two
			{	
				for(k=j;k<c;k++)
				a[k]=a[k+1];
				c--;
			}
			else
			j++;			
		}
	}
	printf("%s\n",a);
}






