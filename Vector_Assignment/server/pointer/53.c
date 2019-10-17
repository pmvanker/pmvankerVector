#include<stdio.h>
       int main()
{
       int i;			// interger variable
       float a=5.2;		// float variable
       char *ptr;		// charecter pointer 	
       ptr=(char *)&a;		// ptr = 
       for(i=0;i<=3;i++)
       printf("%d ",*ptr++);
       return 0;
}

