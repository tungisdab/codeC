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
        int h=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]==k)
                h=i+1;
        }
        cout<<h<<endl;
    }   
    return 0;
}