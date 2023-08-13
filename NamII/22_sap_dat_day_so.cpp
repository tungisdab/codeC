#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long a[n+9],b[n+9],c[n+9],h=0;
        for (long long i=0;i<n;i++)
        {
            cin>>c[i];
            if ((c[i]>=0)&&(c[i]<n))
            {
                a[h]=c[i];
                h++;
            }
            b[i]=-1;
        }
        for (long long i=0;i<h;i++)
        {
            b[a[i]]=a[i];
        }
        for (long long i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}