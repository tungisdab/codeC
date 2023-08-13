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
        int dem=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]==0)
                dem++;
        }   
        cout<<dem<<endl;
    }   
    return 0;
}