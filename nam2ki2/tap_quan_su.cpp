#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int n, int k){
    int a[n+1];
    int dem=k;
    int b[1000]={0};
    for (int i=1;i<=k;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    int i=k;
    while (i>0 && a[i]>= (n-(k-i)))
        i--;
    if (i==0){
        cout<<k<<endl;
        return;
    }
    else {
        a[i]++;
        for (int j=i+1;j<=k;j++)
            a[j]=a[i]+j-i;
        for (int j=1;j<=k;j++){
            if (b[a[j]]==1)
                dem--;
        }
        cout<<dem<<endl;
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
        solve(n, k);
    }   
    return 0;
}