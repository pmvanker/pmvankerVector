/* 3-8-2016 assignment 3 (3)  nested if for grade */
#include<stdio.h>
main()
{
	int a;
	printf("enter the data : ");
	scanf("%d",&a);

	if(a<100)
	{
		if(a<90)
		{
			if(a<80)
			{
				if(a<70)
				{
					if(a<60)
					{
						if(a<35)
						{printf("FF\n");}
						else{printf("CC\n");}	
					}
					else {printf("BC\n");}
				}
				else {printf("BB\n");}
			}
			else {printf("AB\n");}
		}
		else{printf("AA\n");}
	}
}	
