#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int n){
    string a;
    for (int i=1;i<=n;i++)
        a[i]='A';
    while (1){
        int i=n;
        for (int i=1;i<=n;i++)
        cout<<a[i];
        cout<<" ";
        while (i>0&& a[i]=='B'){
            a[i]='A';
            i--;
        }
        if(i==0) return;
        else a[i]='B';
    }
}
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
        solve(n);
        cout<<endl;
    }   
    return 0;
}