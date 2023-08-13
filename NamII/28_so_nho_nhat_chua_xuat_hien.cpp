#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long n=0,m=0,h;
        cin>>h;
        long a[h],b[h];
        for (long i=0;i<h;i++)
        {
            cin>>b[i];
            if (b[i]>0) 
            {
                a[n]=b[i];
                n++;
            }
        }
        sort(a,a+n);
        if ((a[0]>1)||(n==0)) 
            cout<<"1";
        else
        {
            for (long i=1;i<n;i++)
            {
                if ((a[i-1]+1)<a[i])
                {
                    m=1;
                    cout<<a[i-1]+1;
                    break;
                }
            }
            if (m==0)
            {
                cout<<a[n-1]+1;
            } 
        }
        cout<<endl;
    }
}