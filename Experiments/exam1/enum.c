#include<stdio.h>
//#define second 1000
//#define hsecond 800
typedef enum
{
	second=1000,
	hsecond=500,
}DELAY; 
int main()
{
	DELAY d1;
	d1=second;
	printf("%d\n",d1);
	d1=hsecond;
	printf("%d\n",d1);
	printf("%d\n",second);
	printf("%d\n",hsecond);
}
