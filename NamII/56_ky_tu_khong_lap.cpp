
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
string s;
void in()
{
    int n=s.length();
    for (int i=0;i<n;i++)
    {
        int dem=0;
        for (int j=0;j<n;j++)
        {
            if (s[i]==s[j]) dem++;
        }
        if (dem==1) cout<<s[i];
    }
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        getline(cin,s);
        in();
        cout<<endl;
    }    
    return 0;
}