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
        scanf("\n");
        string s;
        getline(cin,s);
        int n=s.length();
        int k;
        cin>>k;
        char a[n];
        for (int i=0;i<n;i++)
            a[i]=s[i];
        sort(a,a+n);
        int dem=0;
        for (int i=0;i<n;i++)
            if (a[i]!=a[i-1])
                dem++;
        if ((26-dem)<=k) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}