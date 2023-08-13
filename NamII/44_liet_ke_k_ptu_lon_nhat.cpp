#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort (a,a+n);
        int k=n-1;
        for (int i=0;i<m;i++)
        {
            cout<<a[k]<<" ";
            k--;
        }
        cout<<endl;
    }
}