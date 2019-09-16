/* alaram n-1 start with 10 to 0 */

#include<stdio.h>
#include<unistd.h>
#include<signal.h>
/*
	alarm(),signal()= change the signal handler


*/
int c=10;
void myalarm()
{
	if(c<0)
		c=1;
	alarm(c--);
	printf("alarm value = %d \n",c);
	if(c==1)
	signal(14,SIG_DFL);
}
int main()
{
	signal(14,myalarm);//(signal no,
	alarm(10);// after 10sec 14no SIGALRM
	
	printf("hello\n");
	printf("alarm = %d\n",alarm(10));
	while(1);
}

