#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	char name[20];
	struct student *next;
}ST;

void add_begin(ST **);
void add_middle(ST **);
void add_end(ST **);
void save(ST *);
void print(ST *);
int count(ST *);
void revprint(ST *);
void revlinkdata(ST *);
void retrive_data(ST **);
int main()
{
	ST *hptr=0;
//	char ch;
//	do
//	{
//		//		add_begin(&hptr);
//		add_end(&hptr);
//		printf("Another student data ?\n");
//		scanf(" %c",&ch);
//	}while(ch=='y');
//	revprint(hptr);
//	save(hptr);
//	print(hptr);
  //      printf("\n=======================\n");
//	revlinkdata(hptr);
  //      printf("\n=======================\n");
//	print(hptr);
//	printf("No of NODE =  %d \n",count(hptr));
	printf("retrice data....................................\n");
	retrive_data(&hptr);
	print(hptr);
}

void add_begin(ST **ptr)
{
	ST *temp=(ST*)malloc(sizeof(ST));
	printf("Enter roll and name\n");
	scanf("%d %s",&temp->roll,temp->name);

	temp->next=*ptr;
	*ptr=temp;
}
void add_end(ST **ptr)
{

	ST *temp=(ST*)malloc(sizeof(ST));
	printf("Enter roll and name\n");
	scanf("%d %s",&temp->roll,temp->name);

	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		while(last->next!=0)
			last=last->next;

		temp->next=last->next;
		last->next=temp;
	}
}
void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d %s\n",ptr->roll,ptr->name);
		ptr=ptr->next;
	}
}
void save(ST *ptr)
{
	FILE *fp;

	fp=fopen("data","a+");

	while(ptr)
	{
		fprintf(fp,"%d %s",ptr->roll,ptr->name);
		ptr=ptr->next;	
	}
}
void add_middle(ST **ptr)
{

	ST *temp=(ST*)malloc(sizeof(ST));
	printf("Enter roll and name\n");
	scanf("%d %s",&temp->roll,temp->name);

	if(*ptr==0 || (*ptr)->roll>temp->roll)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		while((last->next)&&(last->next->roll)>temp->roll)
			last=last->next;
	}
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
void revprint(ST *ptr)
{
	printf("Reverse printing\n");
	ST *temp=ptr;

	int i,j,c=count(ptr);

	for(i=0;i<c;i++)
	{
		temp=ptr;
		for(j=0;j<c-i-1;j++)
			temp=temp->next;

		printf("%d %s \n",temp->roll,temp->name);
	}
}
void revlinkdata(ST *ptr)
{
	ST *p1,*p2,temp;
	int i,j,c=count(ptr);
	p1=ptr;

	/*for(i=0,j=c;j>i;i++)
	{
	 	while(j-1)
		{
                  p2=p2->next;
                  j--;
		}
          	 if (i)
            	 p1=p1->next;
          
		temp.roll=p1->roll;
		p1->roll=p2->roll;
		p2->roll=temp.roll;           
	}*/

	for(j=0;j<c/2;j++,p1=p1->next)
	{
		p2=ptr;
		for(i=0;i<c-1-j;i++)
		p2=p2->next;

		temp.roll=p1->roll;
		p1->roll=p2->roll;
		p2->roll=temp.roll;
	}
}
void retrive_data(ST **ptr)
{
	FILE *fp=fopen("data","r");
	ST temp,*new;
	temp.next=0;

	while(fscanf(fp,"%d %s",&temp.roll,temp.name));

	new=(ST *)malloc(sizeof(ST));
	*new=temp;


}
