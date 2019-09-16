#includ<stdio.h>

main()
{
	char a[]="1234";
	int i;
	i=my_atoi(a);
	printf("%d\n",i);
}
int my_atoi(char *p)
{
	int n,i;
	for(i=0,n=0;p[i];i++)
	n=n*10+p[i]-48;
	return n;
}
