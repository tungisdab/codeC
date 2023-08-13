#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        int c=0;
        sort(a,a+n);
        for (int i=1;i<n;i++){
            if (a[i]!=a[i-1])
                c+=a[i]-a[i-1]-1;
        }   
        cout<<c<<endl;
    }   
    return 0;
}