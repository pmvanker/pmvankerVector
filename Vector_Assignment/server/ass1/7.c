/* Write a program to rotate the bits. Input  the no.of rotations, at runtime.
    Ex : binary  :  10000000000000000000000000001011
            rotations : suppose 3 times right,  then
    	result    :  01110000000000000000000000000001

           binary  :  10000000000000000000000000001011
           rotations : suppose 4 times left,  then
	result :   00000000000000000000000010111000
*/
#include<stdio.h>
main()
{
	int num,a,pos;
	unsigned int data;
	printf("Enter the Number :");
	scanf("%d",&num);
	
	printf("%d\n",num);//dec & bin print
	for(a=31;a>=0;a--){printf("%d",(num>>a)&1);}printf("\n");
	
//	printf("Enter the pos:");
//	scanf("%d",&pos);
	/////////////////////////////////////////////
	data = num;
	data = (data<<31-(3-1))|(data>>3);
	printf("%d\n",data);
	for(a=31;a>=0;a--){printf("%d",(data>>a)&1);}printf("\n");
	/////////////////////////////////////////////
	data = (data>>31-(4-1))|(data<<4);
	printf("%d\n",data);
	for(a=31;a>=0;a--){printf("%d",(data>>a)&1);}printf("\n");
}
