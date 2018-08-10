#include<stdio.h>
#include<unistd.h>
 int main()
{
	if(fork()==0)
	{ 
	   printf("child\n");
	while(1);
	}
       	else
	{
	   printf("parent\n");
		while(1);
	}

}
