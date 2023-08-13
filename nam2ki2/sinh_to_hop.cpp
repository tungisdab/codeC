#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int a[], int n, int k){
    for (int i=1;i<=k;i++)
        a[i]=i;
    while(1){
        for (int i=1;i<=k;i++)
            cout<<a[i];
        cout<<" ";
        int h=k;
        while(h>0&&a[h]>=n-k+h)
            h--;
        if (h==0) return;
        a[h]++;
        for (int j=h+1;j<=k;j++)
            a[j]=a[h]+j-h;
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
        solve(a,n,k);
        cout<<endl;
    }
    return 0;
}