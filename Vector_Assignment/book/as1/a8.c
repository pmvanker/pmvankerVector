#include <stdio.h>
#include <stdlib.h>

int main()

{
	char ch;
	float x,y,ans;	
	printf("\n   3(x+y)      x-y            2x-y              (3x+4y)(2x-3)     \n");    
	printf("a = ------  -  -----    b =  --------------  c = -----------------  \n");
	printf("    9x + 2y    2x+3y        (3x+y)(x-2)(y+3)     ((x-y)/x+y)+(2x+3) \n\n");

	printf("  Enter Which Equation You want 2 solved :");
	scanf("\n%c",&ch);
	printf("  Enter x value :");
	scanf("%f",&x);
	printf("  Enter y Value :");
	scanf("%f",&y);
	
	switch(ch)
	{
	case 'a' :
		ans =( (3*(x+y) ) / ( (9*x)+(2*y) ) ) - ( (x-y) / ( (2*x) + (3*y)) );
		printf("\n  Answer = %.4f\n\n",ans);
		break;
	case 'b' :
		ans = (2*x-y)  /  ( (3*x+y)*(x-2)*(y+3) );	
		printf("\n  Answer = %.4f\n\n",ans);
		break;
	case 'c' :
		ans = ( (3*x + 4*y)*(2*x-3) ) / ( ((x-y)/(x+y))+(2*x+3) ) ;
		printf("\n  Answer = %.4f\n\n",ans);
		break;
	}	
}
