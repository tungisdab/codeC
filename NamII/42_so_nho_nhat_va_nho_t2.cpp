#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int h=a[0],k=-1;
        for (int i=1;i<n;i++)
        {
            if (a[i]!=h)
            {
                cout<<h<<" "<<a[i]<<endl;
                k=0;
                break;
            }
        }
        if (k!=0) cout<<"-1"<<endl;
    }
}