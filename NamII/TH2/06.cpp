#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int n;
    cin>>n;
    int b[n],dem=n,a[n];
    for (int i=0;i<n;i++)
        cin>>b[i];
    for (int i=0;i<n;i++)
    {
        if (b[i]%2==1)
            a[i]=1;
        else a[i]=0;
    }
    for (int i=0;i<n-1;i++)
    {
        if (a[i]==a[i+1])
        {
            n-=2;
            for (int j=i;j<n;j++)
            {
                a[j]=a[j+2];
            }
            i=-1;
        }
    }
    cout<<n;
    return 0;
}