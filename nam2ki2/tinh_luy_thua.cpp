#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll mod=1e9+7;
ll m,n;
//by KMA dil and man

long long tinh(ll m, ll n){
    if(n==0)
        return 1;
    if(n==1) 
        return m%mod;
    ll ans=tinh(m, n/2);
    ans=ans*ans%mod;
    if(n%2)
        return ans*m%mod;
    return ans;
}
int main()
{
    while(1){
        cin>>m>>n;
        if(!m && !n)
            return 0;
        cout<<tinh(m,n)<<endl;
    }   
}