#include <bits/stdc++.h>
using namespace std;
void solve(int n, int k){
    int z=n;
    int a[n];
    for (int i=k;i>=1;i--){
        a[i]=z;
        z--;
    }
    z=n;
    while (1){
        for (int i=1;i<=k;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        int i=k;

    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}
