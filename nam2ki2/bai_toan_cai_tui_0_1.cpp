#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n, w;
int dp[2000][2000];
int a[2000];
int c[2000];
int res=0;
void solve(){
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
        cin>>c[i];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=w;j++){
            if (j<a[i])
                dp[i][j]=dp[i-1][j];
            else    
                dp[i][j]=max(dp[i-1][j], dp[i-1][j-a[i]]+c[i]);
            res=max(res, dp[i][j]);
        }
        // for (int j=1;j<=w;j++)
        //     cout<<dp[i][j]<<" ";
        // cout<<endl;
    }
    cout<<res<<endl;
    res=0;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>w;
        solve();
    }
    return 0;
}