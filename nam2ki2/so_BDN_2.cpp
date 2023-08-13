#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        queue<ll> a;
        a.push(1);
        ll dem=0;
        while(1){
            ll s=a.front();
            a.pop();
            if(s%n==0){
                cout<<s<<endl;
                break;
            }
            a.push(s*10);
            a.push(s*10+1);
        }   
    }
    return 0;
}