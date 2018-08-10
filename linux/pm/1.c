#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	printf("Creating 3 procees Parent\n");
	if(fork()==0)
	{//child
	int r;
	srand(getpid());
	r=rand()%10+1;
	printf("sleep time Chile 1 :%d\n",r);
	sleep(r);
	exit(1);	
	}	
	else
	{//parent
		if(fork()==0)
		{//child 2
		int r;
		srand(getpid());
		r=rand()%10+1;
		printf("sleep time Chile 2 :%d\n",r);
		sleep(r);
		exit(2);
		}
		else
		{//parent
			if(fork()==0)
			{//child 3
				int r;
				srand(getpid());
				r=rand()%10+1;
				printf("sleep time Chile 3 :%d\n",r);
				sleep(r);
				exit(3);
			}
			else
			{//parent
				int s;
				printf("IN parrent\n");
				while(wait(&s)!=-1)
				{
					s=s>>8;
					if(s==1)
					printf("c1 done\n");
					else if(s==2)
					printf("c2 done\n");
					else if(s==3)
					printf("c3 done\n");
				}				
				printf("Parrent done\n");

			}
		}
	}
}
