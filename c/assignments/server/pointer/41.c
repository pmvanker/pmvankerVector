#include<stdio.h> 
       main() 
       { 
            int a=0x12345678; 
	    void *ptr; 
	    ptr=&a; 
	    //printf("0x%x\n",*(int *)&*&*(char*)ptr); 
       }
/* near to *(int) so it consider at intger pointer

&*&* is cut

*(int *)(char *)ptr =   *(int *)ptr consider

			(char *) ignored
*/
