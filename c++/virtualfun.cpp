#include<iostream>
using namespace std;
class A
{
public:
	virtual void fun(){
		cout<<"Base A fun"<<endl;
	}
};
class B:public A
{
	public:
	void fun()
	{
		cout<<"derrived B fun"<<endl;
	}

};
class C:public A
{
	public:
	void fun()
	{
		cout<<"derived C fun"<<endl;
	}
};
int main()
{
	A *bptr;
	A a;
	B b;
	C c;

	bptr=&a;
	bptr->fun();

	bptr=&b;
	bptr->fun();

	bptr=&c;
	bptr->fun();
}
