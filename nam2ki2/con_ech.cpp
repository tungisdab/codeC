#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ll a[100];
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for (ll i=4;i<=52;i++)
        a[i]=a[i-1]+a[i-2]+a[i-3];
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout<<a[n]<<endl;   
    }   
    return 0;
}