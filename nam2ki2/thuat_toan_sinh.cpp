#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
void solve(int a[], int n){
    for (int i=1;i<=n;i++)
        a[i]=0;
    while (1){
        int k=1;
        for (int i=1;i<=n/2;i++){
            if (a[i]!=a[n+1-i]) 
                k=0;
        }
        if (k){
            for (int i=1;i<=n;i++)
                cout<<a[i]<<"  ";
            cout<<endl;
        }
        int i=n;
        while (i>0 &&a[i]==1){
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
    int n;
    cin>>n;
    int a[100];
    solve(a,n);
    return 0;
}