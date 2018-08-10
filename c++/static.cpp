#include<iostream>
using namespace std;
class A
{
	public:	
	int x,y;
	static int z;
	A(int a,int b):x(a),y(b)
	{
		cout<<"constroctor call"<<endl;
		cout<<"x = "<<x<<" y= "<<y<<endl;
	}
};

int A::z=5;

int main()
{
	A ob(10,20);
	cout<<"A::x"<<A::x<<endl;
//	cout<<"A::y"<<A::y<<endl;
	cout<<"A::z"<<A::z<<endl;
}
