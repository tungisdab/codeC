#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int n, a[30];
void in()
{
    for (int i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}
void Try(int i)
{
    for (int j=0;j<=1;j++)
    {
        a[i]=j;
        if (i==n) in();
        else Try(i+1); 
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        Try(1);
        cout<<endl;
   }
    return 0;
}


