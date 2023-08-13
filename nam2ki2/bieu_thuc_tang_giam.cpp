#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin>>s;
        stack<int> a;
        int m=1;
        a.push(1);
        int n=s.length();
        for (int i=0;i<n;i++){
            if(s[i]=='D')
                a.push(++m);
            else if(s[i]=='I'){
                while(!a.empty()){
                    cout<<a.top();
                    a.pop();
                }
                a.push(++m);
            }
        }
        while(!a.empty()){
            cout<<a.top();
            a.pop();
        }
        cout<<endl;
    }
    return 0;
}