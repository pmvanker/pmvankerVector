d2bfunc(int x)
{
	int num,i;
	num=x;
	for(i=31;i>=0;i--)
	{
		printf("%d",(num>>i)&1);
	}
printf("\n");
}
