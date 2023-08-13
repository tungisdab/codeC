#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int GT(int n){
    if(n==0)
        return 1;
    else 
        return n*GT(n-1);
}
int GT1(int n){
    ll sum=1;
    for (int i=2;i<=n;i++)
        sum*=i;
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    cout<<GT(n);
    cout<<endl<<GT1(n);
    return 0;
}