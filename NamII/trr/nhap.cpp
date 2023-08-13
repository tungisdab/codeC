#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll sum=0;
    string s,s1,s2,s3,s4,s5;
    s1="Tetrahedron";
    s2="Cube";
    s3="Octahedron";
    s4="Dodecahedron";
    s5="Icosahedron";
    for (int i=0;i<n;i++)
    {
        cin>>s;
        if(s==s1) 
            sum+=4;
        if(s==s2)
            sum+=6;
        if(s==s3)
            sum+=8;
        if(s==s4)
            sum+=12;
        if(s==s5)
            sum+=20;
    }
    cout<<sum;
    return 0;
}