  #include<stdio.h>

	char *str="char *str=%c%s%c;main(){printf(str,34,str,34);}";	
	int main()
	{
		printf(str,34,str,34);// printf(char *,arguments,...);  ascii 34= "
		printf("\n");
		return 0;
	}


