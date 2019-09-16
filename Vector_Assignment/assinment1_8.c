#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int assingment2();
int assingment3();

float x,y,z;

void main()
{
    int a;
    printf("Which Assignment u wanna see ? 1,2,3 :");
    scanf("%d",&a);
    	
    printf("Enter x : ");
    scanf("%f",&x);
    
    printf("Enter y : ");
    scanf("%f",&y);
   
   switch(a)
      {
	  case 1 :
         	assingment1();
        	break;
	  case 2 :
                assingment2();
	        break;
          case 3 :
                assingment3();
		break;
       }
}

int assingment1()
{
    z=( (3*(x+y)) / (9*x+2*y) ) - ( (x-y) / (2*x+3*y) );
    printf("%f",z);
    return z;
}

int assingment2()
{
    z= (2*x - y)   /  ( (3*x + y) * (x-2)* (y+3) );
    printf("%f",z);
    return z;
}

int assingment3()
{
    z= ( (3*x + 4*y) * (2*x-3) )  /   (  ( (x-y) / (x+y) ) + (2*x+3) );
    printf("%f",z);
    return z;
}
