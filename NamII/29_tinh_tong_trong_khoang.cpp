#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n], b[q][2];
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=0;i<q;i++)
        {
            for (int j=0;j<2;j++)
                cin>>b[i][j];
        }
        for (int i=0;i<q;i++)
        {
            int sum=0;
            for (int j=b[i][0];j<=b[i][1];j++)
            {
                sum+=a[j-1];
            }
            cout<<sum<<endl;
        }
    }
}