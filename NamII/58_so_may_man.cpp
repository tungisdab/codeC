#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a;
        cin>>a;
        int k=a.length();
        if ((a[k-2]=='8')&&(a[k-1]=='6')) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}