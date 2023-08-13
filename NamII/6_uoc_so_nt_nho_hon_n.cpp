#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,h=0,k=0;
        cin>>n;
        int a[n+2];
        for (int i=2;i<=n;i++)
            a[i]=1;
        for (int i=2;i<=n;i++)
        {
            if (a[i]==1)
            {
                h++;
                for (int j=i+i;j<=n;j+=i)
                    a[j]=0;
            }
        }
        for (int i=2;i<=n;i++)
        {
            if (a[i]==1)
            {
                // k++;
                // if (k<h) cout<<i<<" ";
                // else cout<<i;
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}