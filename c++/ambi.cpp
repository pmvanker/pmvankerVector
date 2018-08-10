#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:

	A():x(10),y(20)	//default constructor;
	{
		cout<<"default constructor"<<endl;
	}

	A(int a=13,int b=24):x(a),y(b)	// parameterised const
	{
		cout<<"parametrised constructor"<<endl;
	}

};


int main()
{
	A ob1;


}
