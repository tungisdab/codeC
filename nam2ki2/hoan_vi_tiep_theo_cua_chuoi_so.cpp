#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int t;
void solve(){
    cin>>t;
    for (int o=1;o<=t;o++){
        int x;
        cin>>x;
        string s;
        cin>>s;
        int n=s.length()-1;
        int i=n-1;
        cout<<o<<" ";
        while (i>=0 && s[i]>=s[i+1])
            i--;
        if (i<0){
            cout<<"BIGGEST"<<endl;
        }
        else{
            int h=n;
            while (s[i]>=s[h])
                h--;
            swap(s[i], s[h]);
            int l=i+1;
            int r=n;
            while (l<r){
                swap(s[l], s[r]);
                l++;
                r--;
            }
            for (int i=0;i<=n;i++)
                cout<<s[i];
            cout<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}