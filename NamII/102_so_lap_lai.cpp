#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,x,y;
        cin>>a>>x>>y;
        long long b=__gcd(x,y);
        while (b--)
            cout<<a;
        cout<<endl;
    }
    return 0;
}