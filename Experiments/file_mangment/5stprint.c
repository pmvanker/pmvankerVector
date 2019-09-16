#include<stdio.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
};
int main()
{
struct st s[2],t[2];
int i,j,op,c=3,ele=2;
FILE *fp,*fd;
	
	fp=fopen("data","r");
	fd=fopen("data1","w");
	printf("Enter 5 student data (rollno,name,marks)\n");
	for(i=0;i<2;i++)
	{
		fscanf(fp,"%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
//		printf("-------------------------------------------\n");
//		printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
	
	printf("Do you want to short the Data\n");
back:	printf("1)rollno\n2)name\n3)marks\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1: goto roll;
//		case 2: goto nam;
//		case 3: goto mark;
		default:printf("invalid selection select once again try left %d\n",c);
		if(c==0)
		return 0;
		c--;
		goto back;	
	}
roll:	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(s[j].rollno>s[j+1].rollno)
			{
				t[j]=s[j];
				s[j]=s[j+1];
				s[j+1]=t[j];
			}
		}
	}

	for(i=0;i<2;i++)
	fprintf(fd,"%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	
return 0;
}
