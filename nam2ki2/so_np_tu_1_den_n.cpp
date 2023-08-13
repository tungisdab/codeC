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
        ll n;
        ll x;
        cin>>n;
        queue<ll> a;
        a.push(1);
        for (ll i=0;i<n;i++){
            x=a.front();
            a.pop();
            cout<<x<<" ";
            a.push(x*10);
            a.push(x*10+1);
        }   
        cout<<endl;
    }   
    return 0;
}