//write recursive funtion find largest element of the array.

#include<stdio.h>
int largest(int *,int);
int main()
{
	int a[10],ele,i,l;
	ele=sizeof(a)/sizeof(a[0]);

	printf("enter the arry element \n");

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	l=largest(a,ele);
	printf("the largest element is %d\n",l);
}
int largest(int *a,int ele)
{
	static  int i,b;
	if(ele)
	{
		if(*(a+i)>b)
		{
			b=*(a+i);
			i++;
		}
		largest(a,ele-1);
	}
	return b;


}

