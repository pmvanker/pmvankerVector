#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////
typedef struct student
{
	struct student *prv;
	int roll;
	struct student *next;
}ST;
/////////////////////////////////////////////////////////////////////////////////////
void add_begin(ST **);
void add_end(ST **);
void add_middle(ST **);
void print(ST *);
void reverse(ST **);
void delete(ST **,int);
/////////////////////////////////////////////////////////////////////////////////////
int main()
{
	ST *hptr=0;
	int i,num;
	for(i=0;i<5;i++)	
		add_middle(&hptr);
	print(hptr);
	printf("enter no to delete\n");
	scanf("%d",&num);
	delete(&hptr,num);
	print(hptr);
	//	printf("-----------------------=AFTER REVERSING LINK=------------------------\n");
	//	reverse(&hptr);
	//	print(hptr);
}

////////////////////////////////////////////////////////////////////////////////////
void add_begin(ST **ptr)
{
	ST *temp = (ST*)malloc(sizeof(ST));
	printf("Enter rollno\n");
	scanf("%d",&temp->roll);
	if(*ptr == 0)
	{
		temp->prv = temp -> next = 0 ;
		*ptr = temp;	
	}
	else
	{
		temp->next = *ptr;
		temp->prv = 0;
		*ptr = temp;
		temp->next->prv =temp;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void add_end(ST **ptr)
{
	ST *temp = (ST*)malloc(sizeof(ST));
	printf("Enter rollno\n");
	scanf("%d",&temp->roll);
	if(*ptr == 0)
	{
		temp->prv = temp -> next = 0 ;
		*ptr = temp;	
	}
	else
	{	
		ST *last = *ptr;
		while(last->next)
			last = last->next;
		temp->next = last -> next;
		last->next = temp;
		temp->prv = last;
	}

}
///////////////////////////////////////////////////////////////////////////////////////////////
void add_middle(ST **ptr)
{
	ST *temp = (ST*)malloc(sizeof(ST));
	printf("Enter rollno\n");
	scanf("%d",&temp->roll);
	if( (*ptr == 0) || ((*ptr)->roll > temp->roll)) 
	{
		temp->prv = 0;
		temp -> next = *ptr ;
		if(*ptr!=0)
			(*ptr)->prv=temp;		
		*ptr = temp;	
	}
	else
	{	
		ST *last = *ptr;
		while((last->next) && (temp->roll > last->next->roll))
			last = last->next;
		temp->prv=last;
		temp->next=last->next;
		if(last->next)
			last->next->prv=temp;
		last->next=temp;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////
void delete(ST **ptr,int n)
{
	ST *temp = * ptr;
	while(temp)
	{
		if(temp->roll==n)
		{
			if(temp==*ptr)
			{
				*ptr=(*ptr)->next;
				if(*ptr)
					(*ptr)->prv=0;
				free(temp);temp=NULL;return;
			}
			else
			{
				temp->prv->next=temp->next;
				if(temp->next)
					temp->next->prv=temp->prv;
				free(temp);temp=NULL;return;
			}
		}
		temp=temp->next;
	}
	printf("data not found\n");
}
/////////////////////////////////////////////////////////////////////////////////////////////
void reverse(ST **ptr)
{
	ST *temp;
	while(1)
	{
		temp=(*ptr)->prv;
		(*ptr)->prv=(*ptr)->next;
		(*ptr)->next=temp;

		if((*ptr)->prv)
			*ptr=(*ptr)->prv;
		else
			break;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////
void print(ST *ptr)
{
	ST *temp;
	printf("\n------------------------------------------------------------------\n");
	printf("Forward print\n");
	while(ptr)
	{
		printf("Address:%p\tprv:%p\tnext:%p\tData:%d\n",ptr,ptr->prv,ptr->next,ptr->roll);
		temp=ptr;
		ptr=ptr->next;
	}
	printf("\nreverse print\n");
	while(temp)
	{
		printf("Address:%p\tprv:%p\tnext:%p\tData:%d\n",temp,temp->prv,temp->next,temp->roll);
		temp=temp->prv;
	}
	printf("\n------------------------------------------------------------------\n");
}
/////////////////////////////////////////////////////////////////////////////////////////

