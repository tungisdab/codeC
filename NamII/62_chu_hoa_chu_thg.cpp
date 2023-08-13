#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char a;
        cin>>a;
        if ((a>=65)&&(a<=90)) cout<<char(a+32)<<endl;
        else cout<<char(a-32)<<endl;
    }
}