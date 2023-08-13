#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,dem=0,h=-1;
        cin>>n;
        int a[n-1];
        for (int i=0;i<n-1;i++)
        {
            cin>>a[i];
            dem++;
            if ((dem!=a[i])&&(h==-1))
                h=dem;
        }
        if (h==-1) h=dem+1;
        cout<<h<<endl;
    }
}