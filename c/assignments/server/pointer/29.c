 #include<stdio.h>
       int main()
       {
	char a[ ] ="abcdefgh";    // string
	int *ptr = a;		  // integer pointer jump 4	
	printf("%c %c\n",ptr[0],ptr[1]); //ptr[0]=(*p+0) and (*p+1)
       }

/* pointer pointing ptr[0] means a
 then its point to e cause ptr[1] */
