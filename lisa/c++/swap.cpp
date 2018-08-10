#include<iostream>
using namespace std;

void swapp(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
	//a=a-(b=a);
}
int main()
{
	int x=10,y=20;
	
	int &z=x;		//z is ref of x;
	swapp(x,y);
	cout<<x<<endl;
	cout<<y<<endl;
}

