#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k=0,min=0,h=0;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        // for (int i=0;i<n;i++)
        //     for (int j=i+1;j<n;j++)
        //     {
        //         if ((a[i]==a[j])&&(k==0))
        //         {
        //             h=a[i];
        //             k=1;
        //             min=j-i;
        //         }
        //         else if ((a[i]==a[j])&&(min>(j-i)))
        //         {
        //             h=a[i];
        //             min=j-i;
        //         }
        //     }
       
        // if (k!=0) cout<<h<<endl;
        // else cout<<"-1"<<endl;
        for (int i=1;i<n;i++)
        {
            for (int j=0;j<i;j++)
            {
                if (a[i]==a[j])
                {
                    cout<<a[i]<<endl;
                    k=1;
                    break;
                }
            }
            if (k==1) break;
        }
        if (k==0) cout<<"-1"<<endl;
    }
}