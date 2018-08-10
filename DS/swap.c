#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student *next;
}ST;

void add_middle(ST **);
void print(ST *);
int count(ST *);
void swap(ST **);
void swap_link(ST **);
int main()
{
	char ch;
	ST *hptr=0;
	do
	{
		add_middle(&hptr);
		scanf(" %c",&ch);
	}
	while(ch=='y');
	print(hptr);
	swap(&hptr);
	printf("after swap\n");
	print(hptr);
	printf("link swaping\n");
	swap_link(&hptr);
	print(hptr);
}
void print(ST *ptr)
{
	while(ptr)
	{
		printf("%p = %d\n",&ptr->roll,ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}
int count(ST *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
void add_middle(ST **ptr)
{
	ST *temp=(ST*)malloc(sizeof(ST));
	printf("enter roll no\n");
	scanf("%d",&temp->roll);

	if(*ptr==0 || (*ptr)->roll>temp->roll)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		while(last->next && ((last->next->roll)<(temp->roll)))
			last=last->next;

		temp->next=last->next;
		last->next=temp;
	}
}
void swap(ST **ptr)
{
	int temp;
	ST *p,*q;
	p=*ptr;
	while(p->next)
	{
		q=p->next;
		temp=p->roll;
		p->roll=q->roll;
		q->roll=temp;
		if(q->next==NULL)
		break;
		p=q->next;
	}
}
void swap_link(ST **ptr)
{
	ST *t,*p,*q;
	p=*ptr;
	*ptr=p->next;
	while(p->next)
	{
		q=p->next;
		t=q->next;
		q->next=p;
		if(t==NULL)
		{
			p->next=NULL;
			return;
		}
		p->next=t->next;
		p=t;
	}
}
