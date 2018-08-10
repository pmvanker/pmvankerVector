#include<iostream>
using namespace std;

class A
{
	int x,y;
	public:
		A(){}				//default
		A(int a,int b):x(a),y(b){}	//parameterised
	A operator +(A &ob)
	{
		A res;
		res.x=x+ob.x;
		res.y=y+ob.y;
		return res;
	}
	void print()
	{
		cout<<"x -"<<x<<"y -"<<y<<endl;
	}
};

int main()
{
	A obj(10,20),obj1(11,12),obj3;

	obj3=obj+obj1;
	obj3.print();

}
