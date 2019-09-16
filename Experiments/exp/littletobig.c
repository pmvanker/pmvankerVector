#include<stdio.h>
int swapendian(int);
void binary(int n)
{
int i;
	for(i=31;i>=0;i--)
	{
	printf("%d",(n>>i)&1);
	}
	printf("\n");
}
int main()
{
	int i=10;
	binary(i);
	i=swapendian(i);
	printf("afterconvert\n");
	binary(i);	
}
int swapendian(int n)
{
return ((n>>24)&0xff) | ((n<<8)&0xff0000) | ((n>>8)&0xff00) | ((n<<24)&0xff000000);	
}
