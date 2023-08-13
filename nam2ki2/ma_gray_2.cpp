#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man

int main() {
    int t;
    cin>>t;
    //cin.ignore();
    while (t--){
        string s;
        cin>>s;
        int n=s.length();
        for(int i=1;i<n;i++){
            if(s[i]=='0')
                s[i]=s[i-1];
            else{
                if(s[i-1]=='1')
                    s[i]='0';
                else
                    s[i]='1';
            }
        }
        for(int i=0;i<n;i++)
            cout<<s[i];
        cout<<endl;
    }
	return 0;
}