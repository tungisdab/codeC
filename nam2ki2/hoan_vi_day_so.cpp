#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int n){
    int a[n+1];
    for (int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1, a+n+1);
    while (1){
        for (int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        int i=n-1;
        while (i>0 && a[i]>a[i+1])
            i--;
        if (i==0)
            return;
        else{
            int h=n;
            while (a[i]>a[h])
                h--;
            swap(a[i], a[h]);
            int l=i+1;
            int r=n;
            while (l<r){
                swap(a[l], a[r]);
                l++;
                r--;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    solve(n);
    return 0;
}