/* 3-8-2016 Nested if for finding the grade */
#include<stdio.h>
main()
{	
	int a;
	printf("Enter The Mark ");
	scanf("%d",&a);
	if     (a<35){printf("FF\n");}
	else if(a<40){printf("DD\n");}
	else if(a<50){printf("CC\n");}
	else if(a<60){printf("BC\n");}
	else if(a<70){printf("BB\n");}
	else if(a<80){printf("AB\n");}
	else	     {printf("AA\n");}
}

