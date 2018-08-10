#include<stdio.h>
main()
{
	int i,j;
	char s[]={"Pmvanker"};
	
	printf("s[]={%s}\n--------------------------\n",s);
	for(i=0;s[i];i++);
//	printf("s[%d]=%c  ",i,s[i]);

	for(j=0,i=i-1 ; i>j ; j++,i--)			//revers logic
	s[i]=s[i]+s[j]-(s[j]=s[i]);

//	printf("\n--------------------------\n-Afrer Reverse \n");
	printf("s[]={%s}\n",s);
//	for(i=0;s[i];i++)
//	printf("s[%d]=%c  ",i,s[i]);
	
}
