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
void reverse(ST *);
void retrive(ST **);
///////////////////////////////////////////////////////////////////////////////////////
main()							// MAIN
{
	char ch;
	ST *hptr = 0 ;
	while(1){
		printf("1)Creat a new link\n2)retrive link\n3)print\n4)Save\n5)exit\n");
		scanf(" %c",&ch);
		if(ch=='1')
		{
			do
			{
				add_begin(&hptr);
				printf("another student data y/n\n");	
				scanf(" %c",&ch);
			}while(ch == 'y');
		}
		else if(ch == '2')
			retrive(&hptr);
		else if(ch == '3')
			print(hptr);
		else if(ch == '4')
			save(hptr);
		else
			return;
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
	FILE *fp=fopen("data.txt","a");
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
////////////////////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////////////////////
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
//------------------------------------------------------------------------------------------//
