#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],temp[20];
	int i,j,k,c;
	printf("Enter the String\n");
	scanf("%s",a);
	printf("%s\n",a);		//print
	for(c=0;a[c];c++);		//counter
	strcpy(temp,a);
	printf("temp:%s  a:%s \n",temp,a);
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<c;k++)
				a[k]=a[k+1];
				c--;
			}
			else
			j++;
		}
	}
	printf("After delete %s\n",a);		//print
	for(i=0;a[i];i++)
	{
		for(j=0,k=0;temp[j];j++)
		{
			if(a[i]==temp[j])
			k++;
		}
			printf("%c = %d\n",a[i],k);
	}
}
