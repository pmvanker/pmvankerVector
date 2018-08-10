#include<stdio.h>
union U
{
	int i;
	char ch;
};

int main()
{
	int *p;
	union U u1;
	u1.i=1;
	u1.ch==1?printf("little\n"):printf("Big\n");
	printf("size of pointer in 32bit OS = %d\n",sizeof(p));	
}
