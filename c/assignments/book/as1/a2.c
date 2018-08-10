#include <stdio.h>
#include<stdlib.h>

int main()
{
	int d1,basic,hra1,da1,da=40,hra=20;
	printf("Enter THE Basic Amount :");
	scanf("%d",&basic);
	d1=basic;
	da1     = (basic*da)/100; 	
	hra1    = (basic*hra)/100;	
	basic = basic+da1+hra1;
	printf(" %d basic + %d%% DA = %d\n",d1,da,da1);
	printf(" %d basic + %d%% HRA = %d\n",d1,hra,hra1);
	printf("Your Sallary is = %d Netpay\n",basic);	
}
