#include<stdio.h>
#include<string.h>
int main(int n,char **ch)
{
	int i;
	if(n!=2)
	printf("Use : Try >>./a.out hello\n");
	else
	{
	i=strlen(ch[1]);
	printf("Length of %s = %d \n",ch[1],i);
	}
}
