#include<iostream>
#include<cstring>

using namespace std;

class A
{
	char * str;
	public:
		A(const char *p)
		{
			str=new char[strlen(p)+1];
			strcpy(str,p);
		}
		void modify()
		{
			str[0]='s';
		}
		void print()
		{
			cout<<"str = "<<str<<endl;
		}
		A(A &ob)
		{
			cout<<"copy constructor called"<<endl;
			str = new char[strlen(ob.str)+1];
			strcpy(str,ob.str);
		}
};
int main()
{
	A obj("vector");
	A obj1=obj;
	cout<<"obj data"<<endl;
	obj.print();
	cout<<"obj modify"<<endl;
	obj.modify();
	obj.print();

	cout<<"obj 1 data"<<endl;
	obj1.print();
}
