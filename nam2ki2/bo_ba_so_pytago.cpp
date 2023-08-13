#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
ll a[6000];
int binary(ll l, ll r, ll value){
    while (l<=r){
        ll m=(l+r)/2;
        if (a[m]==value)
            return 1;
        else if (a[m]<value)
            l=m+1;
        else    
            r=m-1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {   
        ll n;
        cin>>n;
        for (ll i=0;i<n;i++){
            cin>>a[i];
            a[i]=a[i]*a[i];
        }
        sort (a, a+n);
        ll h=0;
        for (ll i=0;i<n-2;i++){
            for (ll j=i+1;j<n-1;j++){
                h=binary(j+1, n-1, a[i]+a[j]);
                if (h)
                    break;
            }
            if (h)
                break;
        }   
        if (h) 
            cout<<"YES";
        else    
            cout<<"NO";
        cout<<endl;
        
    }   
    return 0;
}