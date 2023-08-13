#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int m,n,dem=0;
        cin>>n>>m;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for (int i=0;i<n;i++)
        {
            if (m==a[i]) dem++;
        }
        if (dem!=0) cout<<dem<<endl;
        else cout<<"-1"<<endl;
    }
}