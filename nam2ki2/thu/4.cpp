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
        cin>>n;
        ll a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        ll tong=a[0];
        ll res=a[0];
        for (int i=1;i<n;i++){
            res=max(res, a[i]);
            tong= tong+res+a[i];
        }
        cout<<tong<<endl;
    }   
    return 0;
}