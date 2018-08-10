#include<stdio.h>
char s[10];
int ch,num,i=0;
void pop();
void push();
main()
{
	while(1)
	{
		printf("\nOperation \nPush 1\nPop 2\nExit 3\n");
		scanf("%d",&num);
		switch(num)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:break;
			default:printf("invalid option\n");
		}
		if(num==3)
		break;	
	}
}

void push()
{
	printf("Enter The Push \n");	
	scanf(" %d",&ch);
	printf("PUSH = %d\n",ch);
	s[i]=ch;
	printf(" i= %ds={%d,%d,%d,%d,%d}\n",i,s[0],s[1],s[2],s[3],s[4]);
	i++;
}
void pop()
{
	
	ch=s[i-1];
	s[i-1]=0;
	printf(" i=%d s={%d,%d,%d,%d,%d}\n",i,s[0],s[1],s[2],s[3],s[4]);
	printf("POP = %d\n",ch);
	i--;
}

