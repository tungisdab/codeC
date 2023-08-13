#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string a;
        getline(cin,a);
        int n=a.length();
        for (int i=n-1;i>=0;i--){
            if (a[i]=='0')
                a[i]='1';
            else{
                a[i]='0';
                break;
            }
        }
        for (int i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
    }   
    return 0;
}