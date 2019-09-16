 #include<stdio.h> 
      main() 
      { 
	char a[20];  // ROM
	char *p,*q;    //  asuume p=100 and q=101  
	p=&a[0];     // a
	q=&a[4];     // a+4
	printf("%d %d\n",q-p,&q-&p); // a-a+4=4 *p intilize first *q then so q-p=-1
      }

