#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};

int pop(struct node **s)
{
	int item;
	struct node *r;
	
	if(*s==NULL)
	{
		printf("stack overflow\n");
		return;
	}
	else
	{
		item=(*s)->info;
		r=*s;
		*s=r->next;
		free(r);
		return item;
	}
}
int peek(struct node **s)
{
	if(*s==NULL)
		printf("NUll\n");
	else
	{
		return (*s)->info;
	}
}
struct node* create_node()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return n;
}
void push(struct node **s,int item)
{
	struct node *n;
	n=create_node();
	if(n!=NULL)
	{
		n->info=item;
		n->next=*s;
		*s=n;
	}
}

void remove_stack(struct node **s)
{
	while(*s)
		pop(s);
}

int main()
{
	struct node *n;
	push(&n,10);
	pop(&n);
	push(&n,20);
	push(&n,30);
	peek(&n);
	pop(&n);
	pop(&n);
	pop(&n);
	pop(&n);
	remove_stack(&n);
}


