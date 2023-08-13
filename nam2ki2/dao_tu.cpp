#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string sss;
        stack<string> a;
        while(ss>> sss)
            a.push(sss);
        while(!a.empty()){
            cout<<a.top()<<" ";
            a.pop();
        }
        cout<<endl;
    }   
    return 0;
}