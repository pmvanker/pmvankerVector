#include<iostream>
using namespace std;
class A
{
	int a[5];
	public:
	A()
	{
		for(int i=0;i<5;i++)
		a[i]=i+10;
	}
	int operator[](int index)
	{
		return a[index];
	}
};
int main()
{
	A obj;
	for(int i=0;i<5;i++)
	cout<<"obj["<<i<<"]"<<obj[i]<<endl;
}
