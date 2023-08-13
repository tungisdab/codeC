#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        queue<ll> a;
        ll b[100000];
        ll k=0;
        ll h=pow(10,n);
        a.push(6);
        a.push(8);
        while(a.front()<h){
            ll x=a.front();
            a.pop();
            b[k++]=x;
            a.push(x*10+6);
            a.push(x*10+8);
        }
        cout<<k<<endl;
        for (int i=0;i<k;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }    
    return 0;
}