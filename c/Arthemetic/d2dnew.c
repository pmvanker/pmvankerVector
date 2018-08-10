#include <stdio.h>
int main()
{
int x,y,z[32];
printf("enter valu:\n");
scanf("%d",&x);
    for(y=0;y<32;y++)
    {
  	if((x%2)>0)
  	{
    		x=x/2;
		z[y]=1;
  	}	
  	else
  	{	
   		x=x/2;
		z[y]=0;
  	}
    }
	for(y=32;y>=0;y--)
	{
	printf("%d",z[y]);
	}	
return 0;
}
