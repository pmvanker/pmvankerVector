 #include<stdio.h>
       int main()
       {
	const int ary[4] = {1,2,3,4};  // constant array
	int *p = ary+3;
	*p = 5;      // pointer indirectly change the data
	ary[3] = 6;  // error array dont have authority to direct change data
	printf("%d",ary[3]);
     }

