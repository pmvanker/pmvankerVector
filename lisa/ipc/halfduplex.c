#include "header.h"

int main()
{	
	char s[20];
	int fr,fw;

	mkfifo("f1",0644);// p1 proces f1 read.. p2 f1 write
	mkfifo("f2",0644);// p1 process f2 write p2 f2 read

	fr=open("f1",O_RDONLY);	//ZZ 
	fw=open("f2",O_WRONLY);

	



}
