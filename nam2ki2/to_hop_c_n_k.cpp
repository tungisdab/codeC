#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
ll mod = 1e9+7;
//by KMA dil and man
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
        ll k;
        cin>>n>>k;
        ll a[n+10][n+10];
        for (ll i=1;i<=n;i++){
            for (ll j=1;j<=i&& j<=k;j++){
                if(j==1)
                    a[i][j]=i;
                else if(j==i)
                    a[i][j]=1;
                else
                    a[i][j]=(a[i-1][j-1]%mod +a[i-1][j]%mod)%mod;
            }
        }   
        cout<<a[n][k]<<endl;
    }
    return 0;
}