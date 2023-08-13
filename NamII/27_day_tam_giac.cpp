#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long n;
        cin>>n;
        long a[n];
        for (long i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<a[n-1]<<endl;
    }
}