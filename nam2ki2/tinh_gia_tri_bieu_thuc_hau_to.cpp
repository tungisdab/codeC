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
int tinh(int a, int b, char c){
    switch(c){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
    }
}
int solve(string s){
    stack<int> a;
    int n=s.length();
    for (int i=0;i<n;i++){
        if(check(s[i])){
            int s2=a.top();
            a.pop();
            int s1=a.top();
            a.pop();
            a.push(tinh(s1,s2,s[i]));
        }
        else    
            a.push(s[i]-'0');
    }     
    return a.top();
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
        // int n=s.length();
        // for (int i=0;i<n;i++)
        //     cout<<s[i]<<" ";
        // cout<<endl;
    }   
    return 0;
}