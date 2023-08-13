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
        ll n;
        cin>>n;
        ll a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        ll min=a[0]+a[1];
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (abs(a[i]+a[j])<abs(min))
                    min=a[i]+a[j];
            }
        }
        cout<<min<<endl;
    }   
    return 0;
}