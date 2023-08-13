#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int n;
int a[100];
int vs[100];
void HvDq(int m){
    if (m>n){
        for (int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    for (int i=1;i<=n;i++)
    {
        if (vs[i]==0){
            a[m]=i;
            vs[i]=1;
            HvDq(m+1);
            vs[i]=0;
        }
    }
}
void LkDqHv(int a[],int n){
    for (int i=1;i<=n;i++)
        vs[i]=0;
    HvDq(1);
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
        LkDqHv(a,n);
    }
    return 0;
}