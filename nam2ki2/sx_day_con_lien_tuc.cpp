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
        int b[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort (a,a+n);
        int l=0; 
        int r=n-1;
        while (a[l]==b[l] && l<n ) l++;
        while (a[r]==b[r] && r>=0 ) r--;
        cout<<l+1<<" "<<r+1<<endl;

    }   
    return 0;
}