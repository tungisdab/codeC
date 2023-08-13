#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int n,k;
int a[1000000];
void in(){
    for (int j=1;j<=k;j++)
        cout<<a[j]<<" ";
    cout<<endl;
}
void solve(int i)
{
    for (int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if (i==k) in();
        else solve(i+1);
    }
}
int main()
{
    cin>>n>>k;
    solve(1);
    return 0;
}