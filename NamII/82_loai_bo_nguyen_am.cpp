#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    string a;
    cin>>a;
    int n=a.length();
    for (int i=0;i<n;i++)
    {
        if (a[i]>='A'&&a[i]<='Z')
            a[i]+=32;
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]!='u'&&a[i]!='e'&&a[i]!='o'&&a[i]!='a'&&a[i]!='i'&&a[i]!='y')
            cout<<"."<<a[i];
    }
    return 0;
}