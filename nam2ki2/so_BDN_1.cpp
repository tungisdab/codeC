#include <bits/stdc++.h>
using namespace std;

long long k;

void solve(){

        queue<long long> a;
        a.push(1);
        long long dem=0;
        cin>>k;
        bool b=false;
        while(!b){
            long long x=a.front();
            a.pop();
            if(x>k)
                break;
            dem++;
            a.push(x*10);
            a.push(x*10+1);
        }   
        cout<<dem<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}