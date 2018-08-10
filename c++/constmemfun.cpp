#include<iostream>
using namespace std;

class A
{
	const int x=100;
	public:
	void print() const
	{
		cout<<"x= "<<x<<endl; 
	}
	
};

int main()
{
	A ob;
	ob.print();
}
