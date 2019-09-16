#include<stdio.h>
#include<unistd.h>

int main()
{
	if(fork()==0)
	{// child 1
		printf("child 1\n");
	}
	else
	{
		// parrent
		if(fork()==0)
		{// child 2
			printf("child 2\n");
		}
		else
		{
			// parrent

			if(fork()==0)
			{//child 3
				printf("child 3\n");
			}
			else
			{// parent
				printf("parrnt \n");
			}
		}
	}
}
