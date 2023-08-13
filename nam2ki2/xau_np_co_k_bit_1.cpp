#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int a[], int n, int k){
    for (int i=1;i<=n;i++)
        a[i]=0;
    while(1){
        int dem=0;
        for (int i=1;i<=n;i++){
            if (a[i]==1)
                dem++;
        }
        if(dem==k){
            for (int i=1;i<=n;i++)
                cout<<a[i];
            cout<<endl;
        }
        int i=n;
        while (i>0 && a[i]==1){
            a[i]=0;
            i--;
        }
        if (i==0) return;
        else a[i]=1;
    }
}
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
        int a[100];
        solve(a, n, k);   
    }   
    return 0;
}