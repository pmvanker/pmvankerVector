/* send structure data to pipe and get result

write	10+10  read 10+10 result 20;
*/

#include<stdio.h>
#include<unistd.h>
#include<string.h>

struct a
{
	int a;
	char ch;
	int b;
};

int main()
{
	int p[2];
	pipe(p);
	perror("pipe");

	if(fork())
	{//parent
		struct a o={10,'+',20};
		write(p[1],&o,sizeof(o));
	}
	else
	{//child
		struct a o1;
		read(p[0],&o1,sizeof(o1));
		printf("%d %c %d = %d\n",o1.a,o1.ch,o1.b,o1.a+o1.b);
	}
}

	
