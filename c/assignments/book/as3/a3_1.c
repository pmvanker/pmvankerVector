/*3/8/2016 
assignment 3 (1)  wrp whether input is lower case or upercase
*/
#include <stdio.h>

main()
{
	char ch;
	printf("Enter Charecter");
	scanf("%c",&ch);	

	if(ch<96)
	{
		if(ch<47)  { printf("You enter Symbol : %c\n",ch); }
		if(ch<57)  { printf("You Enter Number : %c\n",ch); }	
	        
		printf ("latter is Upercase\n\n");
	}	
	else 
	{
		printf("latter is Lowecase\n");
	}	
}

