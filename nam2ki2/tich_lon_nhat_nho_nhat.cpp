#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        long long m,n;
        cin>>m>>n;
        long long a[m], b[n];
        for (int i=0;i<m;i++)
            cin>>a[i];
        for (int i=0;i<n;i++)
            cin>>b[i];
        sort (a, a+m);
        sort (b, b+n);
        cout<<a[m-1]*b[0]<<endl;
    }   
    return 0;
}