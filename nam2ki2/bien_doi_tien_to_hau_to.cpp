#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
stack<string> a;
bool check(char h){
    switch(h){
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
        stack<string> a;
        string s;
        getline(cin,s);
        int n=s.length();
        for (int i=n-1;i>=0;i--){
            if(check(s[i])){
                string s1=a.top();
                a.pop();
                string s2=a.top();
                a.pop();
                string s3=s1+s2+s[i];
                a.push(s3);
            }
            else
                a.push(string(1,s[i]));
        }
        while(!a.empty()){
            cout<<a.top();
            a.pop();
        }
        cout<<endl;
    }   
    return 0;
}