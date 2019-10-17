#include<stdio.h>

#define limite 100
struct cust
{
	int acc,balance;
	char name[20];
}


main()
{
	int entry,a[limite];
	printf("\t\tWELCOME TO PMVBANK\n");
	printf("\tSelect Option\n");
	printf("1)Creat Acc\n2)Enter in your Acc\n");
	scanf("%d",&entry);
	FILE *fp,*fc;
	static int i;
	fc=fopen("config","r");
	fscanf(fp,"%d",&i);
	printf("i=%d\n",i);
	fclose(fc);	
	if(entry==1)
	{
		struct cust a[i];
		printf("Enter Name\n");
		scanf("%s",a[i].name);
		++a[i].acc;
		printf("your Account no is %d\n",a[i].acc);
		fc=fopen("config","w");
		fwrite(a[i].acc,sizeof(int),1,fc);
		fclose(fc);
		printf("Enter the Ammount(Balance)\n");
		scanf("%d",&a[i].balance);
		fp=fopen("data","a+");
		fprintf(fp,"%d %s %d\n",a[i].acc,a[i].name,a[i].balance);
		fclose(fp);
	i++;
	}
	else
	{
	int temp;
	struct cust c2;
		printf("Enter your Acc no\n");
		scanf("%d",&temp);
		fp=fopen("data","r");
		while(fp!=EOF)
		{
			fscanf(fp,"%d %s %d",&c2.acc,c2.name,&c2.balance);
			if(temp==c2.acc)
			printf("%d %s %d\n",c2.acc,c2.name,c2.balance);
			fclose(fp);
			return;
		}
		printf("account not found\n");	
		return;
	}
	
}
