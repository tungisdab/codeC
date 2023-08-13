#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int sign(char c){
    if(c=='^') return 3;
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-') return 1;
    return -1;
}
string solve(string s){
    stack<char> a;
    string res="";
    int n=s.length();
    for (int i=0;i<n;i++){
        if(s[i]=='(')
            a.push('(');
        else if(s[i]==')'){
            while(a.top()!='('){
                res=res+a.top();
                a.pop();
            }
            a.pop();
        }
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
            while(!a.empty() && sign(s[i])<= sign(a.top())){
                res=res+a.top();
                a.pop();
            }
            a.push(s[i]);
        }
        else    
            res=res+s[i];
    }
    while(!a.empty()){
        if(a.top()!='(')
            res=res+a.top();
        a.pop();
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }   
    return 0;
}