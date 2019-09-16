#include<stdio.h>

void pascal(int);
int fact(int);
int combi(int,int);

void main()
{
	int n;
	printf("enter no\n");
	scanf("%d",&n);
	pascal(n);
}

int fact(int n)
{
	int f=1;
	while(n>=1)
	{
		f=n*f;
		n--;
	}
	return f;
}	
int combi(int n,int r)
{
	return fact(n)/fact(n-r)/fact(r);
}

void pascal(int line)
{
	int i,j,k,r;
	for(i=1;i<=line;i++)
	{
		k=1;
		r=0;
		for(j=1;j<=2*line-1;j++)
		{
			if(j>=line+1-i && j<=i+line-1 && k)
			{
				printf("%d",combi(i-1,r++));
				k=0;		
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
}



