#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int hh(string s)
{
    int n=s.length();
    for (int i=0;i<n/2;i++)
        if (s[i]!=s[n-1-i])
            return 0;
    return 1;
}
int kk(string s)
{
    int n=s.length();
    for (int i=0;i<n;i++)
        if ((s[i]-'0')%2!=0 )
            return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin>>s;
        if (hh(s)&&kk(s))
            cout<<"YES";
        else 
            cout<<"NO";
        cout<<endl;
    }    
    return 0;
}