#include<stdio.h>
int main()
{
	char a[15],ch;
	int num,i,c;
	printf("Enter the String\n");
	scanf("%s",a);
	printf("Enter the pos...\n");
	scanf("%d",&num);
	printf("Enter the charecter...\n");
	scanf(" %c",&ch);		
	printf("%s\n",a);			//print
	for(c=0;a[c];c++);			//count
	for(i=c;i>num-2;i--)			//swap
		a[i+1]=a[i];
	a[num]=' ';				//delete
	printf("%s\n",a);
	a[num]=ch;				//add
	printf("%s\n",a);			//print
}
