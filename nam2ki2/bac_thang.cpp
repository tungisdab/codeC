#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
ll MOD=1000000007;
//by KMA dil and man
ll a[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        ll res=1;
        a[0]=1;
        for (int i=1;i<=n;i++){
            a[i]=res % MOD;
            if(i<k)
                res=(res%MOD+a[i]%MOD)%MOD;
            else{
                res=res+a[i]%MOD;
                res=res-a[i-k];
            }
        }
        cout<<a[n]<<endl;
    }
    return 0;
}