#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int s;
        int n;
        cin>>s>>n;
        int a[n+1];
        s--;
        a[1]=1;
        for (int i=n;i>=2;i--){
            if(s>=9){
                a[i]=9;
                s-=9;
            }
            else{
                a[i]=s;
                s-=s;
            }
        }
        if(s>=0) a[1]+=s;
        if(a[1]<=9)
            for (int i=1;i<=n;i++)
                cout<<a[i];
        else   
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}