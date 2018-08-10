#include<iostream>
using namespace std;

class A
{
	int x,y;
	public:
	A(){}				//default
	A(int a,int b):x(a),y(b){}	//parameterised
	void print()
	{
		cout<<"x -"<<x<<"y -"<<y<<endl;
	}
	
friend A operator +(const A &ob,const A &ob1)
{
	A res;
	cout<<"A operator function"<<endl;
	res.x=ob.x+ob1.x;
	res.y=ob.y+ob1.y;
	return res;
}

};

int main()
{
	A obj(10,20),obj1(11,12),obj3;

	obj3=obj+obj1;
	obj3.print();

}
