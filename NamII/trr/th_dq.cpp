#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int n;
int k;
int a[100];
void ThDq(int m){
    if (m>n){
        for (int i=1;i<=k;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    for (int i=a[m-1]+1;i<=n-k+m;i++){
        a[m]=i;
        ThDq(m+1);
    }
}
void LkDqTh(int a[], int n, int k){
    ThDq(1);
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
        cin>>n;
        cin>>k;
        LkDqTh(a,n,k);
    }
    return 0;
}