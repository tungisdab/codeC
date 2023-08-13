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
        int n,value;
        cin>>n>>value;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        int l=0;
        int r=n-1;
        int mid,d=0;
        while (l<=r){
            int mid=(l+r)/2;
            if (a[mid]==value){
                cout<<"1";
                d=1;
                break;
            }
            if (a[mid]<value){
                l=mid+1;
            }
            if (a[mid]>value){
                r=mid-1;
            }
        }  
        if (!d) cout<<"-1";
        cout<<endl;  
    }
    return 0;
}