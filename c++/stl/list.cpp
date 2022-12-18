#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l={1,2,3,4,5};
    list<int> l1(5,20);

    for(auto data:l)
        cout << data;
    cout << endl;

    l.assign(l1.begin(),l1.end());

    for(auto data:l)
        cout << data;
    cout << endl;

    for(auto data:l1)
        cout << data;
    cout << endl;


}