#include<iostream>

using namespace std;

class A
{
	int x,y;
	public:
	A(int a=0,int b=0):x(a),y(b)
	{
		cout<<"paramerized constroctor called"<<endl;
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
	A():x(10),y(20){}
};

int main()
{
	A ob;

}
