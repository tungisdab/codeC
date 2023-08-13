#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    string a,b;
    ll c;
    cin>>a;
    cin.ignore();
    getline(cin,b);
    cin>>c;
    int d;
    if (a[0]=='G') d=500000;
    else if (a[1]=='T') d=2000000;
    else d=900000;
    ll h=a[2]-'0';
    ll k=a[3]-'0';
    ll s=h*10+k;
    ll o=s*c+d;
    cout<<a<<" "<<b<<" "<<s<<" "<<d<<" "<<o;
    return 0;
}