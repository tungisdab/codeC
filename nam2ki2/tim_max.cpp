#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define Mod 1000000007
const ll mod =1e9+7;
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
        ll tong=0;
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n);
        for (int i=0;i<n;i++){
            tong+=a[i]*i;
            tong=tong%Mod;
        }
        cout<<tong<<endl;
    }   
    return 0;
}