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
        queue<ll> a;
        ll n;
        cin>>n;
        a.push(6);
        a.push(8);
        ll h=pow(10,n);
        ll k=0;
        ll b[100000];
        while(a.front()<h){
            ll x=a.front();
            a.pop();
            b[k++]=x;
            a.push(x*10+6);
            a.push(x*10+8);
        }
        for (ll i=k-1;i>=0;i--){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}