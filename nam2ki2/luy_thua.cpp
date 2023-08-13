#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod=1e9+7;
//by KMA dil and man
long long solve(ll a, ll b){
    if (b==0) return 1;
    if (b==1) return a%mod;
    ll res=solve(a, b/2);
    res=res*res%mod;
    if (b%2==1)
        return res*a%mod;
    return res;
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
        long long n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;   
    }   
    return 0;
}