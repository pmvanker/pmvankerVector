#include<stdio.h>
	int main()
	{
		static char *s[]={"black","white","pink","violet"};
		char **ptr[]={s+3,s+2,s+1,s},***p;
		p = ptr;
		printf("%s\n",**p+1);
		return 0;
	}
