#include<iostream>
using namespace std;
int main()
{
	int x=10,y=20;
	int *p=&x;
	
	int * &rp = p;

	cout<<"*p"<<*p<<" *rp"<<*rp;
	
	rp =&y;

	cout<<"*p"<<*p<<" *rp"<<*rp;



}
