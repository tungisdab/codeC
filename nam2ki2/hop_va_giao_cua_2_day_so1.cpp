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
        int m,n;
        cin>>m>>n;
        int a[m], b[n];
        map<int, int> c;
        for (int i=0;i<m;i++){
            int x;
            cin>>x;
            c[x]++;
        }
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            c[x]++;
        }
        for (auto i:c){
            cout<<i.first<<" ";
        }
        cout<<endl;
        for (auto i:c){
            if (i.second>1)
                cout<<i.first<<" ";
        }
        cout<<endl;
    }    
    return 0;
}