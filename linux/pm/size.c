#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("Usage : ./a.out fname\n");
		return -1;
	}
	if(stat(argv[1],&v)<0)
	{
		perror("stat");
		return 0;
	}
	printf("size %ld\n",v.st_size);
	printf("inod %ld\n",v.st_ino);

	if(S_ISREG(v.st_mode))
		printf("regular\n");
	else if(S_ISDIR(v.st_mode))
		printf("Directory\n");
}
