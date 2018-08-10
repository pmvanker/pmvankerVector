#include<stdio.h>
#include<string.h>
void short(char [][]);
int main()
{
	char s[5][10];

	int i;
	for(i=0;i<5;i++)
		scanf("%s",s[i]);

	for(i=0;i<5;i++)
		printf("%s\n",s[i]);
	
	short(s);

	printf("after short \n");

	for(i=0;i<5;i++)
		printf("%s\n",s[i]);
}

void short(char p[][])
{
	char temp[10];
	int i,j;

	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(strlen(p[j])>strlen(p[j+1])
		

		}
	}

}

