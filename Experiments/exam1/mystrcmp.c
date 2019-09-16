#include<stdio.h>
int mystrcmp(const char *,const char *);
int main()
{
	char s1[10],s2[10];
	printf("enter strings\n");
	scanf("%s%s",s1,s2);
	printf("%d\n",mystrcmp(s1,s2));
}
int mystrcmp(const char *p,const char *q)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
		break;
	}
	if(p[i]==q[i])
	return 0;
	else if(p[i]>q[i])
	return 1;
	else 
	return -1;
}

