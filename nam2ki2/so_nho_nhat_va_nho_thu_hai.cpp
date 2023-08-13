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
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int k=0;
        for (int i=1;i<n;i++){
            if (a[0]<a[i]){
                cout<<a[0]<<" "<<a[i]<<endl;
                k=1;
                break;
            }
        }
        if (!k) cout<<"-1"<<endl;
    }
    return 0;
}