#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
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
        int a[n+3];
        for (int i=1;i<=n;i++)
            cin>>a[i];
        int k=n-1;
        while(k>0&&a[k]>a[k+1]){
            k--;
        }
        if (k==0){
            for (int i=1;i<=n;i++)
                cout<<i<<" ";
        }
        else{
            int h=n;
            while(a[k]>a[h])
                h--;
            swap(a[k],a[h]);
            int l=k+1;
            int r=n;
            while(l<r){
                swap(a[l],a[r]);
                l++;
                r--;
            }
            for (int i=1;i<=n;i++)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}