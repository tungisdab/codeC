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
        stack<char> a;
        int dd=1;
        int n=s.length();
        for (int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                a.push(s[i]);
            else{
                if(a.empty()){
                    dd=0;
                    break;
                }
                if(s[i]==')' && a.top()=='(')
                    a.pop();
                else if(s[i]==']' && a.top()=='[')
                    a.pop();
                else if(s[i]=='}' && a.top()=='{')
                    a.pop();
                else{
                    dd=0;
                    break;
                }
            }
        
        }
        if(a.size()==0 && dd==1)
            cout<<"YES";
        else
            cout<<"NO";      
        cout<<endl;  
    }   
    return 0;
}