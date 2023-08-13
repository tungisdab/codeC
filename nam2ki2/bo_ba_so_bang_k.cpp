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
        sort(a,a+n);
        ll count=0;
        for (ll i=0;i<n-2;i++){
            if (i!=0 && a[i]==a[i-1])
                continue;
            ll l=i+1;
            ll r=n-1;
            while (l<r){
                ll sum=a[i]+a[l]+a[r];
                if (sum==k){
                    count=1;
                    break;
                }
                else if (sum<k) 
                    l++;
                else
                    r--;
            }
            if (count)
                break;
        }
        if (count)
            cout<<"YES";
        else    
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}