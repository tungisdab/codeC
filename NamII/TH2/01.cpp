#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n], l=INT_MIN,vitri;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=l)
            {
                l=a[i];
                vitri=i;
            }
        }
        for (int i=0;i<n;i++)
        {
            if (a[i]<0) cout<<a[i]<<" ";
        }
        for (int i=0;i<n;i++)
        {
            if (a[i]>=0)
            {
                if (i==vitri)
                {
                    cout<<m<<" "<<a[i]<<" ";
                }
                else cout<<a[i]<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}