#include <sys/stat.h>
#include <fcntl.h>     
#include <sys/stat.h>
#include <stdio.h>

int main()
{
	char s[20];
	int fd;

	mkfifo("f1",0644);		//6 = rw , 7 = rwx , 4 = r ,0 = -
	perror("fifo");// tumko kese nind aa rhi h

ese kya kiya aaj
likho


}
