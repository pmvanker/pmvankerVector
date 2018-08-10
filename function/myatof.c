// 23.5

#include<stdio.h>

float myatof(char *);

int main(int argc,char**argv)
{
	if(argc!=2)
	{
		return 0;
	}

	printf("%f \n",myatof(argv[1]));

}

float myatof(char *p)
{
	float f1,f2;
	
	int i,n,c;
	
	for(i=0,n=0;p[i];i++)
	{
		if(p[i]=='.')
		{
			i++;
			break;
		}
		n=n*10+p[i]-48;
	}
	f1=n;
	for(n=0,c=1;p[i];i++,c++)
		n=n*10+p[i]-48;
	f2=n/10;
	printf("f1 = %f\n",f1);
	printf("f2 = %f\n",f2);
return f1+f2;


	



}
