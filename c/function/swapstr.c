#include<stdio.h>
void svap(char *,char *,int);
main()

{
	char s[10],s1[10];
	int ele;

		ele=sizeof(s)/sizeof(s[0]);

		printf("Enter the String\n");
		scanf("%s%s",s,s1);
		printf("%s  %s\n",s,s1);
		svap(s,s1,ele);
		printf("%s  %s\n",s,s1);
}

void svap(char *p,char *p1,int e)
{
	int temp,e1;
	for(e1=0;e1<e;e1++)
	{
		temp=*p;
		*p=*p1;
		*p1=temp;
		p++;
		p1++;
	}
	
}
