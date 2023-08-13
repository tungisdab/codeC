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
        string a;
        cin>>a;
        int k=a.length();
        int sum=0;
        for (int i=0;i<k;i++)
        {
            sum=sum*10+a[i]-'0';
            sum=sum%11;
        }
        if(sum==0)
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;

    }    
    return 0;
}