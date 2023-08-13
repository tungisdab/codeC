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
        int n,k;
        cin>>n>>k;
        int a[n+5];
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n);
        int h=n;
        while (a[h] > k){
            a[h+1]=a[h];
            h--;
        }
        a[h]=k;
        for (int i=0;i<=n;i++)
            cout<<a[i]<<" ";   
    }
    return 0;
}
