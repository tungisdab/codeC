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
            if (a[i]==m) k=1;
        }
        if (k==1) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
}