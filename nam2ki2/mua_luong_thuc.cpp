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
        int n, s, m;
        cin>>n>>s>>m;
        if(n<m || n*6 - m*6 <m)
            cout<<-1;
        else{
            int res=m*s;
            cout<<res/n + ((res%n==0)?0:1);
        }   
        cout<<endl;
    }
    return 0;
}