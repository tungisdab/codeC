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
        int dem=0;
        stack<char> a;
        int n=s.length();
        for (int i=0;i<n;i++){
            if(s[i]=='(')
                a.push(s[i]);
            else{
                if(a.empty()){
                    dem++;
                    a.push(s[i]);
                }
                else
                    a.pop();
            }
        }
        cout<<dem+a.size()/2<<endl;
    }
    return 0;
}