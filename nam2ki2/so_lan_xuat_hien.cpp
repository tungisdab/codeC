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
        int b[n];
        map<int, int> a;
        for (int i=0;i<n;i++){
            cin>>b[i];
            a[b[i]]++;
        }   
        if (a[k]!=0)
            cout<<a[k]<<endl;
        else   
            cout<<"-1"<<endl;
    }    
    return 0;
}