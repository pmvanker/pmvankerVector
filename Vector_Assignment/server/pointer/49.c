#include<stdio.h>
#include<string.h>
	int main()
	{
		int i,n;
		char *x="Alice";	// ROM store
		n=strlen(x);		// n =5			can read it
		*x=x[n];		// cant write.. "error = segmentation fault"
		for(i=0;i<=n;i++)
		{
			printf("%s",x);
			x++;
		}
		printf("%s\n",x);
		return 0;
	}
