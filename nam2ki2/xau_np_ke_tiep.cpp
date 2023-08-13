#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        for (int i=n-1;i>=0;i--){
            if (s[i]=='1')
                s[i]='0';
            else{
                s[i]='1';
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}