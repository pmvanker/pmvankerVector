#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;
int main()
{
    vector<int> v={1,2,3};
    
    
    for(auto ri = v.rbegin(); ri != v.rend(); ++ri)
    {
        cout << *ri << endl;
    }
    

}