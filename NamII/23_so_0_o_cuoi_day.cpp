#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,dem=0;
        cin>>n;
        long long a[n],b[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=0;
        }
        for (int i=0;i<n;i++)
        {
            if (a[i]!=0)
            {
                b[dem]=a[i];
                dem++;
            }
        }
        for (int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}