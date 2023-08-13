#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long a[94];
    a[0]=0;
    a[1]=1;
    for (int i=2;i<=93;i++)
        a[i]=a[i-1]+a[i-2];
    while (t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
}