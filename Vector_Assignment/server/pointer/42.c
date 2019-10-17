#include<stdio.h> 
      main() 
      { 
	int a[5]={1,2,3,4,5}; // interger array store in RAM 
	
//	printf("%u %d\n%u %d\n%u %d\n%u %d\n%u %d\n",a,a[0],a+1,a[1],a+2,a[2],a+3,a[3],a+4,a[4]);


	int *ptr=(int *)(&a+1); 
//	printf("*ptr = %u  and *&a -1 = %u\n",ptr,(&a-1));

	printf("%d %d\n",*(a+1),*(ptr-1)); 
	printf("%d %d\n",*(a+1),*(ptr)); 

//	printf("*(a+1) = %u  and *(ptr-1) %u\n",*(a+1),*(ptr-1));
//	printf("*ptr = %u  and *ptr -1 = %u\n",ptr,ptr-1);
      }
/* &a+1 meanse jump the array if arrar is 100-120 so  it jump to 124;
2 5
2 -1076708132 */
