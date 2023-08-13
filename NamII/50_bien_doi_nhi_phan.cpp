#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
void matrix(int i, int j, int n, int m, int b[150][150] )
{
    for (int h=0;h<n;h++)
    {
        for (int k=0;k<m;k++)
        {
            b[i][k]=1;
            b[h][j]=1;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int b[150][150]={};
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin>>a[i][j];
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (a[i][j]==1)
                    matrix(i,j,n,m,b);
            }
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
        }
    }    
    return 0;
}
