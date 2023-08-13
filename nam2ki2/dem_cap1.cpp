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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for (ll i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n);
        ll dem=0;
        ll z;
        ll m;
        for (int i=0;i<n-1;i++){
            z=a[i]+k;
            m=lower_bound(a+i+1,a+n,z)-a;
            dem=dem+(m-i-1);
            // cout<<dem<<endl;
        }
        cout<<dem<<endl;
    }
    return 0;
}