#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    vector<int> a;
    vector<int> b(10,100);//10 ==so luong, tat ca ptu=100
    a.push_back(10); // day 10 vao mang
    a.size(); // size cua mang
    a[0];   // ptu thu 1
    a.back(); // ptu cuoi cung
    for (int i: a)
        cout<<i<<endl;
    /*
        iterator
        |a.begin()==1|2|3|4|5|a.end()
    */
    for (vector<int>::iterator it=a.begin();it!=a.end();it++)
        cout<<*it<<endl;
    for (auto i=a.begin();i!=a.end();i++)
        cout<<*i<<endl;
    
    return 0;
}