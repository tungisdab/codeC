#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int a[10000005]={};
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int b[100005]={},c[100005]={};
        ll n;
        cin>>n;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        int dem=0;
        for (int i=0;i<n;i++)
        {
            if ((b[a[i]]>1)&&(c[a[i]]==0))
            {
                dem+=b[a[i]];
                c[a[i]]=1;
            }
        }
        cout<<dem<<endl;
    }    
    return 0;
}