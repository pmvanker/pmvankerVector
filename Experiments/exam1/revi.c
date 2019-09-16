#include<stdio.h>
void d2b(int);
int main()
{
	int num,i,j,m,n;
	printf("Enter the num\n");
	scanf("%d",&num);
	d2b(num);
	for(i=0,j=31; i<j ;i++,j--)
	{
		m=num>>i&1;
		n=num>>j&1;
		
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	d2b(num);	
}

void d2b(int n)
{
int i;
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
}
