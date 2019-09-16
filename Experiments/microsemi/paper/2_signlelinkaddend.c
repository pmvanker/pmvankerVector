#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student *next;
}ST;

void add_end(ST **);
void print(ST *);

int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		printf("do you want another data?\n");
		scanf(" %c",&ch);
	}
	while(ch=='y');
	print(hptr);
}

void add_end(ST **ptr)
{
	ST *temp=(ST*)malloc(sizeof(ST));

	printf("enter roll\n");
	scanf("%d",&temp->roll);

	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		
		while(last->next)
		last=last->next;
		
		temp->next=last->next;
		last->next=temp;
	}
}
void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d ->",ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}
