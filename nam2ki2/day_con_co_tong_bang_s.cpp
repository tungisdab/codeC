#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
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
        int n,s;
        cin>>n>>s;
        int dp[50000]={};
        for (int i=0;i<n;i++){
            int z;
            cin>>z;
            dp[z]=1;
            for (int j=s;j>z;j--)
                if(dp[j-z])
                    dp[j]=1;
        }   
        if(dp[s])
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }   
    return 0;
}