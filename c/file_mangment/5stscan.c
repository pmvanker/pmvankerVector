#include<stdio.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
};
int main()
{
struct st s[2];
int i;
FILE *fp;
	fp=fopen("data","w");
	printf("Enter 5 student data (rollno,name,marks)\n");
	for(i=0;i<2;i++)
	{
		scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
		printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
		printf("-------------------------------------------\n");
		fprintf(fp,"%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
return 0;
}
