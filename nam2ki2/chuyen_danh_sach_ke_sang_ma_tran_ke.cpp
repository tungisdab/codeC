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
    int n;
    cin>>n;
    int a;
    int b;
    int z[n+5][n+5];
    memset(z, 0, sizeof(z));
    for (int i=0;i<n;i++){
        cin>>a>>b;
        z[a][b]=1;
        z[b][a]=1;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout<<z[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}