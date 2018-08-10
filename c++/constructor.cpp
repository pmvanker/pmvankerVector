#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:

	A():x(10),y(20)
	{
		cout<<"constructor"<<endl;
		cout<<"x ="<<x<<" y ="<<y<<endl; 
	}
};

int main()
{
	A ob1;


}
