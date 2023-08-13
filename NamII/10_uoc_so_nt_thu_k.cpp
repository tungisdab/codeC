#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,h=0,k;
        cin>>n>>k;
        int a[n+2];
        for (int i=2;i<=sqrt(n);i++)
        {
            while (n%i==0)
            {
                a[h]=i;
                h++;
                n/=i;
            }
        }
        if (n>1)
        {
            a[h]=n;
            h++;
        }
        if (k>=(h+1)) cout<<"-1"<<endl;
        else cout<<a[k-1]<<endl;
    }
}