/*V16BE3V2 SHELL PROGRAM*/
//////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>				         	//HEADER FILES
#include<stdarg.h>
#include<string.h>
#include<unistd.h>
/////////////////////////////////////////////////////////////////////////////////////////
char s[50],H[10][20];				//GLOBEL DATA
/////////////////////////////////////////////////////////////////////////////////////////
			         		// FUNCTION DECLARATIONS

/////////////////////////////////////////////////////////////////////////////////////////
int main(int argc,char **argv)
{
	if(argc==4)
	{
		execlp(argv[2],argv[3],NULL);
		return 0;
	}
	static int c,h;
	while(1)
	{
		int m;

		printf("%3d <<pmvanker>>",c++);
		gets(s);
		
		strcpy(H[h++],s);
		if(h==10)
		h=0;
				
		if(strstr("Hist",s))
		{
			int i;
			for(i=0;i<10;i++)
			{
				printf("%s\n",H[i]);					
			}
		}	
	}	
}

