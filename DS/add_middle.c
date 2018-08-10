#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	char name[20];
	float marks;
	struct student *next;
}ST;

void print(ST *);
void add_middle(ST **);
int main()
{
	char ch;
	ST *hptr=0;
	do
	{
	add_middle(&hptr);
	printf("add another student? \n");
	scanf(" %c",&ch);
	}
	while(ch=='y');
	print(hptr);
}

void add_middle(ST **ptr)
{
	ST *temp = (ST *)malloc(sizeof(ST));
	printf("enter data roll,name,marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);

	if( (*ptr==0) || (temp->roll < (*ptr)->roll))
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		while( (last->next) && (temp->roll>last->next->roll))
		last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}

void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
