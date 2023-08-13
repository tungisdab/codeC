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
        int count=0;
        sort(a,a+n);
        for (int i=1;i<n;i++){
            if (a[i]!=a[i-1])
                count+=a[i]-a[i-1]-1;
        }   
        cout<<count<<endl;
    }   
    return 0;
}