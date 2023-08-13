#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
set<string> a;
int b[100];
int n;
string s;
void out(){
    string s1="";
    int dd=0;
    for (int i=1;i<=n;i++){
        if(b[i]){
            s1+=s[i-1];
            dd=1;
        }
    }
    if(dd)
        a.insert(s1);
}
void Try(int i){
    for (int j=0;j<=1;j++){
        b[i]=j;
        if(i==n)
            out();
        else
            Try(i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        a.clear();
        memset(b, 0, sizeof(b));
        cin>>n;
        cin>>s;
        Try(1);
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}