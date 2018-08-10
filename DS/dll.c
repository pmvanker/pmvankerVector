#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	struct student *prv;
	int roll;
	struct student *next;
}ST;
void add_begin(ST **);
void add_end(ST **);
void add_middle(ST **);
void print(ST *);
int main()
{
	ST *hptr=0;
//	add_begin(&hptr);
	add_middle(&hptr);
//	add_end(&hptr);
	print(hptr);
}
void add_begin(ST **ptr)
{
int i;
	for(i=0;i<5;i++)
	{
		ST *temp=(ST*)malloc(sizeof(ST));
		printf("Enter roll\n");
		scanf("%d",&temp->roll);
		if(*ptr==0)
		{
			temp->next=temp->prv=*ptr;
			*ptr=temp;
		}
		else
		{
			temp->next=*ptr;
			temp->prv=0;
			*ptr=temp;
			temp->next->prv=temp;
		}
	}
}
void add_end(ST **ptr)
{
int i;
	for(i=0;i<5;i++)
	{
		ST *temp=(ST*)malloc(sizeof(ST));
		printf("Enter roll\n");
		scanf("%d",&temp->roll);
		if(*ptr==0)
		{
			temp->next=temp->prv=*ptr;
			*ptr=temp;
		}
		else
		{
			ST *last=*ptr;
			while(last->next)
			last=last->next;

			temp->next = last->next;
			temp->prv = last;
			last->next = temp;
		}
	}
}
void add_middle(ST **ptr)
{
int i;
	for(i=0;i<5;i++)
	{
		ST *temp=(ST*)malloc(sizeof(ST));
		printf("Enter roll\n");
		scanf("%d",&temp->roll);
	
		if( (*ptr==0) || (*ptr)->roll > temp-> roll )
		{
			if(*ptr)
			{
				temp->prv=0;
				temp->next=*ptr;
				(*ptr)->prv=temp;
				*ptr=temp;
			}
			else
			{
			temp->prv=temp->next=0;
			*ptr=temp;
			}
		}
		else
		{
			ST *last=*ptr;
			while( last->next && (last->next->roll < temp->roll))
			last = last->next;

			temp->next=last->next;
			temp->prv=last;
			last->next=temp;
		}	
	}
}

void print(ST *ptr)
{
	ST *temp;
	printf("--------------------------------------------------\nBefore Reverse\n");
	while(ptr)
	{
		temp=ptr;
		printf("address:%p\tprv:%p\tnext:%p\tdata:%d\n",ptr,ptr->prv,ptr->next,ptr->roll);
		ptr=ptr->next;
	}
	printf("\nAfter Reverse it\n");
	while(temp)
	{
		printf("address:%p\tprv:%p\tnext:%p\tdata:%d\n",temp,temp->prv,temp->next,temp->roll);
		temp=temp->prv;
	}
printf("\n---------------------------------------------------------------\n");
}

