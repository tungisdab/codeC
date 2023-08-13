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
        sort(b, b+n);
        int dd=1;
        for (int i=0;i<n/2;i++){
            if(a[i] != b[i] && a[n-i-1]!=b[i]){
                dd=0;
                break;
            }
        }
        if(dd)
            cout<<"Yes";
        else    
            cout<<"No";
        cout<<endl;
    }   
    return 0;
}