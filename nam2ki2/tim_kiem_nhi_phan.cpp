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
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        int l=0;
        int r=n-1;
        int h=0;
        while (l<=r){
            int m=(l+r)/2;
            if (a[m]==k){
                cout<<m+1<<endl;
                h=1;
                break;
            }
            else if (a[m]<k)
                l=m+1;
            else    
                r=m-1;
        }
        if (!h)
            cout<<"NO"<<endl;
    }   
    return 0;
}