#include<stdio.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{//child1
		printf("child1\n");
		while(1);
	}
	else
	{//parent
		if(fork()==0)
		{//child2
			printf("child2\n");
			while(1);

		}
		else
		{//parent
			if(fork()==0)
			{//child3
				printf("child3\n");
				while(1);

			}
			else
			{
				printf("parent\n");
				while(1);


			}
		}

	}

}
