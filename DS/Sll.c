#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct student
{
	int roll;
	struct student *next;
}ST;
////////////////////////////////////////////////////////////////////////////////////////////////
void add_begin(ST **);
void add_end(ST **);
void add_middle(ST **);
void print(ST *);
void save(ST *);
void retrive(ST **);
void reverse(ST **);
void delete(ST **,int);
int  count(ST *);
////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	int i,j;
	ST *hptr=0;
	while(1)
	{
		while(1)
		{
			printf("1)Creat link\n2)Retrive\n3)Reverse\n4)Print\n5)Save\n6)Delete\n7)Exit\n");
			scanf("%d",&i);
			switch(i)
			{
				int num;
				case 1: add_begin(&hptr);break;
				case 2: retrive(&hptr);break;
				case 3: reverse(&hptr);break;	
				case 4: print(hptr);break;
				case 5: save(hptr);break;
				case 6:	printf("enter the node to delete\n");
					scanf("%d",&num);
				        delete(&hptr,num);break;
				case 7: return 0;
				default : printf("Invalid option\n");
			}	
		}
	}
}
void delete(ST **ptr,int n)
{
	ST *temp = *ptr;
	ST *prv;

	while(temp)
	{
		if(temp->roll == n)
		{
			if(*ptr==temp)
			{
				*ptr=temp->next;
				free(temp);temp=NULL;
				return;
			}
			else
			{
				prv=temp->next;
				free(temp);temp=NULL;
				return;
			}
		}		
	prv=temp;
	temp=temp->next;
	}
printf("data not found\n");
}
void reverse(ST **ptr)
{
	ST *p1=*ptr,*p2,temp;
	int i,j;
	int c = count(*ptr);
	
	for(j=0;j<c/2;j++,p1=p1->next)
	{
		p2=*ptr;
		for(i=0;i<c-1-j;i++)
		p2=p2->next;
		
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		
		temp.next=p1->next;
		p1->next=p2->next;
		p2->next=temp.next;
	}
printf("Succesfully Reversed\n");
}
int count(ST *ptr)
{
	int c=0;
	while(ptr)
	{
		ptr=ptr->next;
		c++;
	}
	return c;
printf("No of NODE is %d\n",c);
}
void retrive(ST **ptr)
{
	FILE *fp = fopen("data","r");
	if(fp==0)
	{
		printf("file not found\n");
		return ;
	}
	ST temp,*new;
	while( (fscanf(fp,"%d ",&temp.roll)) != EOF )
	{
		new = (ST*)malloc(sizeof(ST));
		*new=temp;
		new->next=*ptr;
		*ptr = new;
	} 
printf("Succesfully Retrived Data\n");
}
void save(ST *ptr)
{
	FILE *fp=fopen("data","w");
	while(ptr)
	{
		fprintf(fp,"%d ",ptr->roll);
		ptr=ptr->next;
	}
printf("Succesfully saved in file\n");
}
void add_begin(ST **ptr)	
{
	printf("enter 5 roll no\n");
	int i;
	for(i=0;i<5;i++)
	{
		ST *temp=(ST*)malloc(sizeof(ST));
		printf("enter roll \n");
		scanf("%d",&temp->roll);
		temp->next=*ptr;
		*ptr=temp;
	}
printf("Succesfully Created link\n");
}
void add_end(ST **ptr)
{
	ST *temp=(ST*)malloc(sizeof(ST));
	printf("enter roll \n");
	scanf("%d",&temp->roll);
	if(*ptr==0)
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else
	{
		ST *last = *ptr;
		while(last->next)
			last=last->next;
		temp->next = last->next;
		last->next=temp;
	}
}
void add_middle(ST **ptr)
{
	ST *temp=(ST*)malloc(sizeof(ST));
	printf("enter roll \n");
	scanf("%d",&temp->roll);
	if(*ptr==0 || temp->roll < (*ptr)->roll)
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else
	{
		ST *last = *ptr;
		while(last->next && ( (*ptr)->roll < last->next->roll) )
			last=last->next;
		temp->next = last->next;
		last->next=temp;
	}
}
void print(ST *ptr)
{
	printf("Address      Data\n");
	while(ptr)
	{
		printf("%8p = %3d \n",ptr->next,ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}

