#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int chuaxet[100];
int n;
long c[20][20];
long x[100];
long s=0;
long MIN=10000000, cmin=10000000;
void nhap(){
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cin>>c[i][j];
            cmin=min(cmin, c[i][j]);
        }
    }
}
void Try(int i){
    if (s+cmin*(n-i+1)>=MIN)
        return;
    for (int j=1;j<=n;j++)
    {
        if (chuaxet[j])
        {
            x[i]=j;
            chuaxet[j]=0;
            s+=c[x[i-1]][j];
            if (i==n){
                if (s+c[x[n]][x[1]]<MIN)
                    MIN=s+c[x[n]][x[1]];
            }
            else Try(i+1);
            s-=c[x[i-1]][j];
            chuaxet[j]=1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(chuaxet, 1, sizeof(chuaxet));
    chuaxet[1]=0;
    x[1]=1;
    nhap();
    Try(2);
    cout<<MIN;
    return 0;
}