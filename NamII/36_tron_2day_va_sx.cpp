#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        long long a[n],b[m],c[n+m];
        for (int i=0;i<n+m;i++)
            cin>>c[i];
        long long k=n+m;
        sort(c,c+k);
        for (int i=0;i<k;i++)
            cout<<c[i]<<" ";
        cout<<endl;

    }
}