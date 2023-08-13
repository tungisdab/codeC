#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int a[100001];
    a[1]=0;
    a[2]=1;
    a[3]=1;
    int m;
    for (int i=4;i<100001;i++){
        m=a[i-1];
        if(i%2==0)
            m=min(a[i/2],m);
        if(i%3==0)
            m=min(a[i/3],m);
        a[i]=m+1;
    }
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }    
    return 0;
}