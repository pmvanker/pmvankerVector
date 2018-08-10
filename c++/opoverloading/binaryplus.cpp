#include<iostream>
using namespace std;

class A
{
    int x,y;
public :
    A(){}
    A(int a,int b):x(a),y(b){}
    A operator + (A &ob)
    {
        A res;
        cout<<"operator plus function"<<endl;
        res.x = x + ob.x;
        res.y = y + ob.y;
        return res;
    }
    void print()
    {
        cout<<"x -"<<x<<" y - "<<y<<endl;
    }
};

int main()
{
    A ob1(10,20),ob2(11,12),ob3;

    ob3 = ob1 + ob2 ;

    cout<<"ob1 data"<<endl;
    ob1.print();
    cout<<"ob2 data"<<endl;
    ob2.print();
    cout<<"ob3 data"<<endl;
    ob3.print();
}
