 #include<stdio.h>
       int main() 
       { 
	int a[]={10,20,30,40,50}; 
	char *p; 
	p=(char *)a; // array base address to pointer  p=a[0]
	printf("%d\n",*((int *)p+4)); // 50 output
       }
