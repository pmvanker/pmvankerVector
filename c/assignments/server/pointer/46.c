#include<stdio.h>
#include<string.h>
              main()
	  {
		char a[]="abcdef";
		char *ptr1 = a;
		ptr1 = ptr1+(strlen(ptr1)-1);
		printf("%c  ", --*ptr1--);     	
		printf("%c  ",--*--ptr1);      		
		printf("%c  ",--*(ptr1--));
		printf("%c  ",--*(--ptr1));
		printf("%c  \n",*ptr1);
	}
					
/*	ptr = f						
     --*ptr1--	abcdee    	e			
     --*--ptr1	abccee      c		
     --*(ptr1--)	abcbee      b		
     --*(--ptr1)	aacbee      a		
     *ptr1		aacbee      a */
