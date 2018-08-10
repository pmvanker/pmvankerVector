#include<stdio.h>
int a[]={4,-3,-2,2,3,1,-2,-3,4,2,-6,-3,-1,3,1,2};

int main()
{
	int max_so_far=a[0],max_ending_hear=0,s,i,start,end,size;
	    
	s=start=end=0;

	size=sizeof(a)/sizeof(a[0]);

	for(i=0;i<size;i++)
	{
		max_ending_hear+=a[i];
		
		if(max_ending_hear>max_so_far)
		{
			max_so_far=max_ending_hear;
			start=s;
			end=i;	
		}
		if(max_ending_hear<0)
		{
			max_ending_hear=0;
			s=i+1;
		}
	}

	printf("maximum sum = %d starting index %d end index %d\n",max_so_far,start,end);

}
