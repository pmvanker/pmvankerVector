#include<iostream>
using namespace std;
class A
{
	public:
		virtual void fun(){
			cout<<"base fun called "<<endl;
		}
};
class B:public A
{
	public:
		void fun(){

			cout<<"derived fun called"<<endl;
		}
};

int main()
{
	A a;
	B b;
	A *aa;
	B *bb;
	aa = &b;
	aa->fun();
	bb=&b;
	bb->fun();
	a.fun();
	bb = &a;
	return 0;
}










