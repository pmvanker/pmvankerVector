#include<stdio.h>
int main()
{
	static int i;
	printf("hello\n");	
	i++;
	if(i<3)
	main();
	printf("hai\n");


}
