#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    string a,b;
    cin>>a>>b;
    string a1, a2;
    string b1, b2;
    ll n1=a.length();
    ll n2=b.length();
    for (int i=0;i<n1;i++){
        if(a[i]=='5' || a[i]=='6'){
            a1[i]='5';
            a2[i]='6';
        }
        else{
            a1[i]=a[i];
            a2[i]=a[i];
        }
    } 
    for (int i=0;i<n2;i++){
        if(b[i]=='5' || b[i]=='6'){
            b1[i]='5';
            b2[i]='6';
        }
        else{
            b1[i]=b[i];
            b2[i]=b[i];
        }
    }
    cout<<stoi(a1)+stoi(b1)<<" "<<stoi(a2)+stoi(b2);
    return 0;
}