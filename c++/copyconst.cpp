#include<iostream>
using namespace std;
class A
{
	int x;
	public:
       A(){}
	A(A &ob){
	cout<<"copy const"<<endl;
	}
//        A(int a):x(a){}


};
int main()
{
	A a;
	
	A b(a);
///a.fun();
//b.fun();

//	A obj1;//obj1(30);
//	obj1=obj;
//	obj1.print();
}
