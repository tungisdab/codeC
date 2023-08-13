#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k=0;
        cin>>n>>m;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            if ((a[i]==m)&&(k==0))
            {
                cout<<i+1<<endl;
                k=1;
            }
        }
        if (k==0) cout<<"-1"<<endl;
    }
}