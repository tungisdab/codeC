#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        int n=s.length();
        char a[n],b[n-2],c[n-1];
        for (int i=0;i<n;i++)
            a[i]=s[i];
        if (a[0]=='+')
        {
            cout<<'0';
            for (int i=3;i<n;i++)
            {
                if (s[i]<='9'&&s[i]>='0')
                    cout<<s[i];
            }
        }
        else if (a[0]=='8')
        {
            cout<<'0';
            for (int i=2;i<n;i++)
            {
                if (s[i]<='9'&&s[i]>='0')
                    cout<<s[i];
            }
        }
        else 
        {
            for (int i=0;i<n;i++)
            {
                if (s[i]<='9'&&s[i]>='0')
                    cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}