#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(int a,int b):x(a),y(b){}
	A(){}//default
	void print()
	{
		cout<<"x-"<<x<<"y-"<<y<<endl;
	}
	friend ostream & operator <<(ostream &out,A &ob)
	{
		cout<<"ob.x - "<<ob.x<<" ob.y - "<<ob.y<<endl;
		return out;
	}
};
int main()
{
	A obj(10,20),obj1(100,200),obj2(300,400);
	cout<<obj<<obj1<<obj2;
}
