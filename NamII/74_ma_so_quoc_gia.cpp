#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin.ignore();
        string a;
        cin>>a;
        int n=a.length();
        int b[n]={};
        for (int i=0;i<n-2;i++)
        {
            if (a[i]=='0'&&a[i+1]=='8'&&a[i+2]=='4')
            {
                b[i]=10;
                b[i+1]=10;
                b[i+2]=10;
            }
        }
        for (int i=0;i<n;i++)
            if (b[i]==0)
                cout<<a[i];
        cout<<endl;
    }    
    return 0;
}
