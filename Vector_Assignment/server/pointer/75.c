#include<stdio.h>
	void fun(char **);
	int main()
	{
		char *argv[]={"ab","cd","ef","gh"};
		fun(argv);
		return 0;
	}
	void fun(char **p)
	{
		char *t;
		t=(p+=sizeof(int))[-1];
		printf("%s\n",t);
	}

