#include<stdio.h>
#include<stdlib.h>
typedef struct ArrayStack
{
	int top;
	int capacity;
	int *array;
}ST;

ST* createStack(int cap)
{
	ST *stack=(ST*)malloc(sizeof(ST));
	stack->top=-1;
	stack->capacity=cap;
	stack->array=(int*)malloc(sizeof(int)*cap);
	return stack;
}
int isfull(ST *stack)
{
	if(stack->top+1==stack->capacity)
	return 1;
	else
	return 0;
}
int isempty(ST *stack)
{
	if(stack->top==-1)
	return 1;
	else
	return 0;
}
void push(ST *stack,int item)
{
	if(!isfull(stack))
	{
		stack->top++;
		stack->array[stack->top]=item;
	}
}
int pop(ST *stack)
{
	int item;
	if(!isempty(stack))
	{
		item=stack->array[stack->top];
		stack->top--;
		return item;
	}
	else
		return 0;
}
int main()
{
	ST *stack=createStack(4);
	int choice,item;
	while(1)
	{
		printf("1) PUSH\n2) POP\n3)exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: printf("Enter the data\n");
				scanf("%d",&item);
				push(stack,item);
				break;
			case 2:
				item=pop(stack);
				if(item==0)
				printf("stack is empty\n");
				else
				{
					printf("pop data %d\n",item);	
				}
				break;
			case 3:
				exit(0);
		}

	}
}


