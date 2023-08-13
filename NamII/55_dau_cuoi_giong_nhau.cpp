
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
        int dem=n;
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
                if (s[i]==s[j])
                    dem++;
        }
        cout<<dem<<endl;
    }
    return 0;
}   