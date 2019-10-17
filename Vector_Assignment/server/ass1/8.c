/*
Convert the characters Upper to Lower and Lower to Upper using bitwise
operators.
*/
#include<stdio.h>
main()
{
	char ch;
	printf("Enter Ther Charector :");
	scanf("%c",&ch);
	printf("%c\n",ch^(1<<5));
}
