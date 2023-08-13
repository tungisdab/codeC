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
        queue<ll> a;
        a.push(9);
        while(1){
            ll b=a.front();
            a.pop();
            if (b%n==0){
                cout<<b<<endl;
                break;
            }
            a.push(b*10);
            a.push(b*10+9);
        }   
    }    
    return 0;
}
