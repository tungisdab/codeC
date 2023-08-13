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
        vector<int> a(n);
        map<int, int> b;
        for (int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }   
        ll count=0;
        for (int i=0;i<n;i++){
            if (a[i]+a[i]==k){
                count+=b[a[i]]-1;     
            }
            else{
                count+=b[k-a[i]];
            }
        }
        cout<<count/2<<endl;
    }   
    return 0;
}
