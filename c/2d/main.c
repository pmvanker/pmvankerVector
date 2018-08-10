#include<stdio.h>
main()
{
	char s[2][20];
	scan(s,2);
	printf("\n");
	
	print(s,2);
	printf("\n");
	
	swap(s,s+1);
	print(s,2);
	printf("\n");
}

