#include<stdio.h>
#include<stdlib.h>				// for malloc dynamic mem
typedef struct student {			// student structure
	int roll;
	char name[20];
	float marks;
	struct student *next;			// self refrential ptr
}ST;						// typedef by ST

void print(ST *ptr);				
void add_begin(ST **ptr);
main()
{
	ST *hptr=0;				// hptr=0
	char op;
	do{
		add_begin(&hptr);		// allocating dynamic mem and data
		printf("add another student (y|Y) ?\n");
		scanf(" %c",&op);
	  }
	while(op=='y' || op=='Y');
	print(hptr);
}
void add_begin(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));	// alocating mem
	printf("Enter roll name marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);	//alocating data
	temp->next=*ptr;			// making 1st
	*ptr=temp;				// linking 
}

void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}

