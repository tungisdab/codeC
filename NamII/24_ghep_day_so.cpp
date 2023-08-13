#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long m,n;
        cin>>m>>n;
        long a[m][n];
        long e=m*n,dem=0;
        long b[e];
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
            {
                cin>>a[i][j];
                b[dem]=a[i][j];
                dem++;
            }
        sort(b,b+e);
        for (int i=0;i<e;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}