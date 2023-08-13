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
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    for (int i=0;i<n;i++)
        if (a[i]!= k)
            cout<<a[i]<<" ";
    return 0;
}