#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
string a;
int n;
int check(){
    stack<char> s;
    for (int i=0;i<n;i++){
        if(a[i]!=')')
            s.push(a[i]);
        else{
            int dd=0;
            while(s.top()!='('){
                if (s.top()=='+'||s.top()=='-'||s.top()=='*'||s.top()=='/')
                    dd=1;
                s.pop();
            }
            s.pop();
            if(!dd)
                return 1;   
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        // a="";
        // while(a=="")
            getline(cin, a);
        n=a.length();
        if(check())
            cout<<"Yes"<<endl;
        else   
            cout<<"No"<<endl;
    }   
    return 0;
}