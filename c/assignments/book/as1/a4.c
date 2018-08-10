/* Assignment 1.4  Monday 1/8/2016  4:36pm
   Entering 5 subject data and calculating avg and persentage maximum marks 50
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5],i;				//int datatype
	float j=0,pr,avg;			//floating datatype
	
	for(i=0;i<5;i++)			// for loop for 5 subject input
	{
		printf("Enter Subject Marks : ");
back:		scanf("%d",&a[i]);		
		
		if(a[i]<50)			// lessthen 50 allowed
		{
			j=j+a[i];
		}
		else				// morethen 50 not allowed
		{
			printf("Wrong Marks....   Enter again :");
			goto back;		// go to back lable
		}
	}
	
	avg = j/5; 				//avg logic	
	pr = (j*100)/250;			//persentage logic

	printf("Average  =  %.2f  \n",avg);
	
	printf("persentage = %.2f %%\n",pr);
}		
	
