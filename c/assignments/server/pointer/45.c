#include<stdio.h>
main()
{
char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i,*p = a;
     for(i=0;i<5;i++)
     printf("%d\t",*p++);// printinf address fo A E I M Q jump by 4 int pointer
}
