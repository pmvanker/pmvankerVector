#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int p[2];        //p[0] =read,p[1]=write//
	pipe(p);
	perror("pipe");

	if(fork())
	{//parent
		char s[10];
		printf("enter the data\n");
		scanf("%s",s);
//		scanf("%[^\n]",s);
		write(p[1],s,strlen(s)+1);
	}
	else
	{//child
		char s[10],i;
		read(p[0],s,sizeof(s));
		
/*		for(i=0;s[i];i++)
		{			
			if(s[i]>='A' && s[i] >='Z')
			{
				s[i]=s[i]-32;
			}
		}

*/	
		for(i=0;s[i];i++)
		s[i]=s[i]&~(1<<5);	// 5th bit is 0 means -32 5pos bit	
		printf("%s\n",s);
	}
}





