#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public:
	friend class B;
};

class B
{
	public:
	void setdata(A &ob,int a,int b)
	{
		ob.x=a,ob.y=b;
	}
	void print(A &ob)
	{
	cout<<"x - "<<ob.x<<"y - "<<ob.y<<endl;
	}
};

int main()
{
	A ob1;
	B b;
	b.setdata(ob1,10,20);
	b.print(ob1);
}
