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
        int n=s.length();
        stack<int> a;
        a.push(-1);
        int z=0;
        for (int i=0;i<n;i++){
            if(s[i]=='(')
                a.push(i);
            else{
                a.pop();
                if(!a.empty())
                    z=max(z, i-a.top());
                else
                    a.push(i);
            }
        }
        cout<<z<<endl;
    }
    return 0;
}