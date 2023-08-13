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
        int sum=0;
        int res=0;
        for (int i=0;i<n;i++){
            sum=max(a[i], sum+a[i]);
            res=max(res, sum);
        }
        cout<<res<<endl;
    }   
    return 0;
}