#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int check2(int b[], int l, int r, int x){
    int k=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(b[m]>x){
            k=m;
            r=m-1;
        }
        else
            l=m+1;
    }
    return k;
}
int zz[5];
int check(int b[], int m, int x){
    if(x==0)
        return 0;
    if(x==1)
        return zz[0];
    int ans=zz[0]+zz[1];
    int k=check2(b, 0, m-1, x);
    if(k!=-1)
        ans+=m-k;
    if(x==2)    
        ans=ans-zz[3]-zz[4];
    if(x==3)
        ans+=zz[2];
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        memset(zz, 0, sizeof(zz));
        int a[n];
        int b[m];
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]<=4)
                zz[b[i]]++;
        }
        sort(b, b+m);
        ll ans=0;
        for (int i=0;i<n;i++)
            ans+=check(b, m, a[i]);
        cout<<ans<<endl;
    }
    return 0;
}