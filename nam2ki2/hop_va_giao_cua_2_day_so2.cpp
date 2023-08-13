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
        int n,m;
        cin>>n>>m;
        map<int, int> a;
        for (int i=0;i<m;i++){
            int x;
            cin>>x;
            a[x]++;
        }   
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        for (auto i:a)
            cout<<i.first<<" ";
        cout<<endl;
        for (auto i:a){
            if (i.second>1)
                cout<<i.first<<" ";
        }
        cout<<endl;
    }   
    return 0;
}