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
        int min=a[1]-a[0];
        for (int i=1;i<n;i++){
            if (a[i]-a[i-1] < min)
                min=a[i]-a[i-1];
        }
        cout<<min<<endl;
    }      
    return 0;
}
