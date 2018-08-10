#include<stdio.h>
struct st
{
	int id;
	char name[20];
	int test1;
	int test2;
	float per;
};

int main()
{
	struct st v16be3[2];
	int i;

	printf("id\tname\ttest1\ttest2\tpersentage\n");

	for(i=0;i<2;i++)
	{
		printf("Enter id\n");
		scanf("%d",&v16be3[i].id);
		printf("Enter Name\n");
		scanf("%s",v16be3[i].name);
		printf("Test 1 marks for %s\n",v16be3[i].name);
		scanf("%d",&v16be3[i].test1);
		printf("Test 2 marks for %s\n",v16be3[i].name);
		scanf("%d",&v16be3[i].test2);

		v16be3[i].per= (v16be3[i].test1 +v16be3[i].test2 );
}
	printf("id\tname\ttest1\ttest2\tpersentage\n");
	for(i=0;i<2;i++)
	printf("%d\t%s\t%d\t%d\t%f\n",v16be3[i].id,v16be3[i].name,v16be3[i].test1,v16be3[i].test2,v16be3[i].per);
return 0;
}
