#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
typedef struct student
{
int roll;
struct student *next;
}ST;
//////////////////////////////////////////////////////////////////
void add_middle(ST **);
void print(ST *);
void save(ST *);
//////////////////////////////////////////////////////////////////
main()
{
	char ch;
	ST *hptr = 0;
	do
	{
		add_middle(&hptr);
		printf("add another student y/n\n");
		scanf(" %c",&ch);
	}
	while(ch == 'y');
	print(hptr);
	save(hptr);
}
////////////////////////////////////////////////////////////////////
void add_middle(ST **ptr)
{
	ST *temp = (ST *)malloc(sizeof(ST));
	printf("enter roll\n");
	scanf("%d",&temp->roll);
	if( (*ptr == 0) || (temp->roll) < ( (*ptr)->roll ) )
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else
	{
		ST *last = * ptr;
		
//		while( (last->next) && ( (temp->roll) < (last->next->roll) ) )
		while(last->next && (temp->roll > last->next->roll))
		last = last->next;

		temp->next = last->next;
		last->next = temp;
	}
}
/////////////////////////////////////////////////////////////////////////////
void print(ST *ptr)
{
	while(ptr)
	{
	printf("%d ",ptr->roll);
	ptr=ptr->next;
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////
void save(ST *ptr)
{
	FILE *fp = fopen("data","a+");
	while(ptr)
	{ 
	fprintf(fp,"%d\n",ptr->roll);
	ptr=ptr->next;
	}
}
