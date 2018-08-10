/*Write a program to check the given strings are palindrom or not.
     Note: Palindrome words are words which read and spell the same way both backwards  
               and  forwards. Some examples,  
               madam, level , radar, stats and etc. 
*/

#include<stdio.h>
#include<string.h>

main()
{
	 char s[10],temp[10];
	
	int i,j,c;
	printf("Enter the string\n");
	scanf("%s",s);
	
	for(c=0;s[c];c++);

	for(i=0,j=c ;i<s[i];  i++,j--)
	temp[i]=s[j];

	printf("%s\n",temp);





}
