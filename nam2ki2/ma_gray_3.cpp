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
        string a;
        cin>>a;
        int n=a.length();
        cout<<a[0];
        for(int i=1;i<n;i++){
            if((a[i]=='1' && a[i-1]=='1') || (a[i]=='0' && a[i-1]=='0'))
                cout<<0;
        else
                cout<<1;
        }
        cout<<endl;
    }
	return 0;
}