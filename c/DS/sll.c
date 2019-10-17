#include<stdio.h>					// HEADER FILES
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////
typedef struct student					// STRUCTURE
{
	int roll;
	struct student *next;
}ST;
////////////////////////////////////////////////////////////////////////////////////////
void print(ST *);					// DECLARATION
void save(ST *);
void add_begin(ST **);
void add_end(ST **);
void add_middle(ST **);
void reverse(ST *);
void retrive(ST **);
void delete(ST **,int);
///////////////////////////////////////////////////////////////////////////////////////
main()							// MAIN
{
	int n;
	ST *hptr = 0 ;
	while(1)
	{
	printf("\n1)Creat a new link\n2)retrive link\n3)print\n4)Save\n5)reversedata \n6)delete node\n7)exit\n");
	scanf("%d",&n);
	switch(n)
	   {
		int i,num;	
		char ch;
		case 1:	do
			{
				printf("1)add_begin\n2)add_middle\n3)add_end\n");
				scanf("%d",&i);
				switch(i)
				{
					case 1:add_begin(&hptr);break;
					case 2:add_middle(&hptr);break;
					case 3:add_end(&hptr);break;
					default:printf("unknown option\n");
				}
				printf("another student data y/n\n");	
				scanf(" %c",&ch);
			}while(ch == 'y');break;			
		case 2:	retrive(&hptr);printf("Sucssesfuly retrived\n");break;
		case 3:	print(hptr);break;
		case 4:	save(hptr);break;
		case 5: reverse(hptr);break;
		case 6: printf("enter roll to delete\n");
			scanf("%d",&num);
			delete(&hptr,num);break;
		default:return;
	  }
	}
}
///////////////////////////////////////////////////////////////////////////////////////
void retrive(ST **ptr)					// retrive data
{
	ST *new,temp;
	FILE *fp=fopen("data.txt","r");
	if(fp==0)
	printf("file Not found\n");
	while( (fscanf(fp,"%d ",&temp.roll) ) != EOF )
	{
		new = (ST*)malloc(sizeof(ST));
		*new = temp;				
		new->next = *ptr ;			// add begin
		*ptr = new;		
	}
}
///////////////////////////////////////////////////////////////////////////////////////////
void print(ST *ptr)					// PRINT
{
	while(ptr)
	{
		printf("%d ",ptr->roll);		
		ptr=ptr->next;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////
void save(ST *ptr)					// SAVE
{
	FILE *fp=fopen("data.txt","w");
	while(ptr)
	{
		fprintf(fp,"%d ",ptr->roll);		
		ptr=ptr->next;
	}
printf("\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////
void add_begin(ST **ptr)
{
	ST *temp = (ST *)malloc(sizeof(ST));		// dma
	printf("enter roll\n");
	scanf("%d",&temp->roll);
	temp->next = *ptr;
	*ptr = temp;
}
///////////////////////////////////////////////////////////////////////////////////////////////
void reverse(ST *ptr)
{
	int i,j,c;					//loop
	ST *p,*q,temp;					// p first q last for swamp...
	p = ptr ;
	c = count(ptr);
	for(j=0; j<c/2 ; j++ , p = p->next)
	{
		q = ptr;
		for(i=0 ; i<c-1-j ; i++)
			q=q->next;

		temp = *p;
		*p = *q;
		*q = temp;

		temp.next = p->next;
		p->next = q->next;
		q->next = temp.next;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////
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
//////////////////////////////////////////////////////////////////////////////////////////////
void add_end(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));	// alocating mem
	printf("Enter roll\n");
	scanf("%d",&temp->roll);		//alocating data
	if(*ptr==0)
	{
	temp->next=*ptr;			// making 1st
	*ptr=temp;				// linking 
	}
	else
	{
		ST *last = *ptr;	//finding last so insert first
		while(last->next!=0)	// checking the next is 0?
		last=last->next;	// if not 0 then add

		temp->next=last->next; // last address is 0 so now temp is last
		last->next=temp;	// amd making thelastto second last
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////
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
 
/////////////////////////////////////////////////////////////////////////////////////////////
void delete(ST **ptr,int n)
{
	ST *temp=*ptr,*prv;

	while(temp)
	{
		if(temp->roll == n)
		{
			if(temp == *ptr)
			{
				*ptr = (*ptr)->next;
				free(temp);temp=NULL;
				return;
			}
			prv->next=temp->next;
			free(temp);temp==NULL;
			return;
		}
		prv=temp;
		temp=temp->next;
	}
}
//--------------------------------------------------------------------------------------------//
