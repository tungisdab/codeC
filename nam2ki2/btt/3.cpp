#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+5];
        for (int i=0;i<n;i++)
            cin>>a[i];
        int vitri=n-1;
        while (a[vitri] > k && vitri >= 0){
            a[vitri+1]=a[vitri];
            vitri--;
        }
        a[vitri+1]=k;
        for (int i=0;i<=n;i++)
            cout<<a[i]<<" ";   
        cout<<endl;
    }
    return 0;
}