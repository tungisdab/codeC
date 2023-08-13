#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    // int t;
    // cin>>t;
    // while (t--)
    // {
        int n,dem=0;
        cin>>n;
        int a[n][3];
        for (int i=0;i<n;i++)
        {
            int count=0;
            for (int j=0;j<3;j++)
            {
                cin>>a[i][j];
                if (a[i][j]==1)
                    count++;
            }
            if (count>=2) dem++;
        }
        cout<<dem;
//    }    
    return 0;
}