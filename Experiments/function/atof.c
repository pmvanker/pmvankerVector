#include<stdio.h>
float my_atof(char *);
main(int argc,char** argv)
{
	if(argc !=2)
	{
		printf("enter :./a.out value\n");
		return 0;
	}
	float f;
	f=my_atof(argv[1]);
	printf("atof output = %f\n",f);
}

float my_atof(char *p)
{
	int i,n,c;
	float f,f1;
	for(i=0,n=0;p[i]!='.';i++)
	{
		if(p[i]<'0' || p[i]>'9')
		return f;
		n=n*10+p[i]-48;
		f=n;
	}
	printf("before . = %d\n",n);
	for(i=i+1,c=1,n=0;p[i];i++)
	{
		if(p[i]<'0' || p[i]>'9')
		return f+f1;
		n=n*10+p[i]-48;
		c*=10;
		f1=n;
		f1=f1/c;
	}
	printf("after . = %d\n",n);
	return f+f1;
}
