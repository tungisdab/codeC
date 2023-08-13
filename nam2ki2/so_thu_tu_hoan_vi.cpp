#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int n){
    int a[n+1];
    int b[n+1];
    int dem=0;
    for (int i=1;i<=n;i++){
        a[i]=i;
        cin>>b[i];
    }
    while (1){
        dem++;
        int dd=0;
        for (int i=1;i<=n;i++){
            if (b[i]!=a[i]){
                dd=1;
                break;
            }
        }
        if (!dd){
            cout<<dem<<endl;
            break;
        }
        int i=n-1;
        while (i>0 && a[i]>a[i+1])
            i--;
        if (i==0) 
            return;
        int k=n;
        while (a[i]>a[k])
            k--;
        swap(a[k], a[i]);
        int l=i+1;
        int r=n;
        while (l<r){
            swap(a[l], a[r]);
            l++;
            r--;
        }
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
        int n;
        cin>>n;
        solve(n);
    }   
    return 0;
}