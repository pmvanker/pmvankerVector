#include<stdio.h>
extern int i;// THIS IS DECLARATION. COMPILER WILL NOT ALLOCATE MEMORY
extern int i;
extern int i;
int main()
{
	int i=0;
	printf("%d \n",i);
}
