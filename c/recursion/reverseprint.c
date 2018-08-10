#include<stdio.h>
//void rvrs(char *);
void revrse(char *,char *);
//char temp[20];
static int c;
int main()
{
	char a[20],b[20];
	printf("Enter the string\n");
	scanf("%s",a);
	revrse(a,b);
	printf("%s\n",b);	
	//rvrs(a);
	//printf("%s is reverse %s\n",a,rvrs(a));
}

void revrse(char *p,char *q)
{
	if(*p)
	{
		revrse(p+1,q);
		q[c]=*p;
		c++;
	}	
}
/*void rvrs(char *p)
{
	if(*p)
	{
		rvrs(p+1);
		printf("%c",*p);
	}
}*/
