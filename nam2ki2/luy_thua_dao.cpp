#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll mod=1e9+7;
//by KMA dil and man

long long tinh(ll m, ll n){
    if(n==1) return m%mod;
    ll ans=tinh(m, n/2);
    ans=ans*ans%mod;
    if(n%2==1) 
        return ans*m%mod;
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll z=n;
        ll m=0;
        while(z>0){
            ll x=z%10;
            m=m*10+x;
            z/=10;
        }   
        cout<<tinh(n,m)<<endl;
        // cout<<n<<" "<<m<<endl;
    }   
    return 0;
}