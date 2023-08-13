#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,c,d,e=1;
        cin>>a>>b>>c;
        d=a%c;
        for (int i=1;i<=b;i++)
        {   
            e*=d;
            e=e%c;
        }
        cout<<e<<endl;
    }
}