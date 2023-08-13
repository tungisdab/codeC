#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int n,M;
struct dat{
    long w=0, v=0;
};
dat a[105];
int dp[110][110];
int res =0;
void Solve(){
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=M;j++)
        {
            if (j<a[i].w)
                dp[i][j]=dp[i-1][j];
            else 
            {
                if (dp[i-1][j]<= dp[i-1][j-a[i].w] + a[i].v)
                    dp[i][j]= dp[i-1][j-a[i].w] + a[i].v;
                else
                    dp[i][j]=dp[i-1][j];
            }
            res=max(res, dp[i][j]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>M;
    for (int i=1;i<=n;i++)
        cin>>a[i].w>>a[i].v;
    Solve();
    cout<<res;
    return 0;
}