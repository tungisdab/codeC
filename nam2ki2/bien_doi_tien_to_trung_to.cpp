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
        stack<string> a;
        for (int i=n-1;i>=0;i--){
            if(check(s[i])){
                string s1=a.top();
                a.pop();
                string s2=a.top();
                a.pop();
                string s3='('+s1+s[i]+s2+')';
                a.push(s3);
            }
            else
                a.push(string(1, s[i]));
        }
        while(!a.empty()){
            cout<<a.top();
            a.pop();
        }
        cout<<endl;
    }   
    return 0;
}