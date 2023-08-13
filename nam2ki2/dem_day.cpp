#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
long long m=123456789;
//by KMA dil and man
long long solve(ll k, ll n){
    ll res=1;
    while(n>0){
        if(n%2)
            res=(res%m*k%m)%m;
        k=(k%m*k%m)%m;
        n/=2;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;      
        cout<<solve(2,n-1)<<endl;
    }
    return 0;
}