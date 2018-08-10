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
void add_begin(ST **);
int main()
{
	char ch;
	ST *hptr=0;
	do
	{
		add_begin(&hptr);
		printf("add another student? \n");
		scanf(" %c",&ch);
	}
	while(ch=='y');
	print(hptr);
}

void add_begin(ST **ptr)
{
	ST *temp = (ST *)malloc(sizeof(ST));
	printf("enter data roll,name,marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
	temp->next=*ptr;
	*ptr=temp;
}
void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
