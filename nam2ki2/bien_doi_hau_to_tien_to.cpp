#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
bool check(char c){
    switch(c){
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
    }
    return false;
}
void solve(string s){
    stack<string> a;
    int n=s.length();
    for (int i=0;i<n;i++){
        if(check(s[i])){
            string s1=a.top();
            a.pop();
            string s2=a.top();
            a.pop();
            a.push(s[i]+s2+s1);
        }
        else    
            a.push(string(1, s[i]));
    }
    cout<<a.top()<<endl;
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
        solve(s);
    }   
    return 0;
}