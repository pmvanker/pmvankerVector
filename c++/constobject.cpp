#include<iostream>
using namespace std;
class A
{
	int x;
	mutable int y;
	public:
	A():x(10),y(20){}
	void modify() const
	{
	//	x=25;
		y=10;
	}
	void print() const
	{
	cout<<"x - "<<x<<" y - "<<y<<endl;
	}
};

int main()
{
	const A obj;
	obj.modify();
	obj.print();
}
