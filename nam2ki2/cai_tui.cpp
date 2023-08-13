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
        int n, V;
        cin>>n>>V;
        int c[2000], v[2000];
        int res=0;
        int dp[2000][2000]={};
        for (int i=1;i<=n;i++)   
            cin>>v[i];
        for (int i=1;i<=n;i++)
            cin>>c[i];
        for (int i=1;i<=n;i++){
            for (int j=1;j<=V;j++){
                if(j<v[i])
                    dp[i][j]=dp[i-1][j];
                else    
                    dp[i][j]=max(dp[i-1][j], dp[i-1][j-v[i]]+c[i]);
                res=max(res, dp[i][j]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}