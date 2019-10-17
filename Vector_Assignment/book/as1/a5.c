#include <stdio.h>
#include <stdlib.h>

float pi=3.14;

int main()
{
	int a,b,c,l,h,ans,area,r,peri;
	
	printf("For Rectangular type ' 1 ' and For Circle type  ' 2 ' ");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			printf("Type Length And Hight :");
			scanf("%d%d",&l,&h);
			ans=l*h;
			printf("Area of Rectengular  = %d\n",ans);
			printf("Perimeter of Circle  = %d\n",2*l+2*h);
			break;
		case 2:
			printf("Type Radious of circle :");
			scanf("%d",&r);
			area=4*pi*r*r;
			peri=2*pi*r;
			printf("Area of Circle  = %d\n",area);
			printf("Perimeter Of Circle = %d\n",peri); 
			break;
	}
}
