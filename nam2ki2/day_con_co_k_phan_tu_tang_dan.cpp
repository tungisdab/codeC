#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n,k;
int a[10000];
int b[10000];
void out(){
    for (int i=1;i<=k;i++)
        cout<<a[b[i]]<<" ";
    cout<<endl;
}
void Try(int i){
    for (int j=b[i-1]+1;j<=n-k+i;j++){
        b[i]=j;
        if(i==k)
            out();
        else 
            Try(i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for (int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1, a+n+1);
        memset(b,0, 10000);
        Try(1);
    }
    return 0;
}
