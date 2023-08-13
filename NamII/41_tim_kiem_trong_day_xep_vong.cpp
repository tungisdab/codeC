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
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for (int i=0;i<n;i++)  
            cin>>a[i];
        for (int i=0;i<n;i++)
        {
            if (a[i]==m)
                cout<<i+1<<endl;
        }
    }   
    return 0;
}