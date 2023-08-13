#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long MOD=1e9+7;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        priority_queue<int, vector<int>,greater<int>> a;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push(x);
        }
        ll res=0;
        int x, y;
        while(a.size()>1){
            x=a.top();
            a.pop();
            y=a.top();
            a.pop();
            res=(res+x+y)%MOD;
            a.push((x+y)%MOD);
        }
        cout<<res<<endl;
    }
    return 0;
}