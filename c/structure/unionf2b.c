#include<stdio.h>
union U
{
	int i;
	float f;
};

int main()
{
	union U u1;
	u1.f=3.5;
	int i;
	for(i=31;i>=0;i--)
		printf("%d",u1.i>>i&1);
	printf("\n");
}
