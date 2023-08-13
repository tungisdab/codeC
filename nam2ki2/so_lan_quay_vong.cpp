#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll count=0;
        for (ll i=0;i<n;i++){
            cin>>a[i];
            if (a[i-1]>a[i])
                count=i;
        }
        cout<<count<<endl;
    }   
    return 0;
}