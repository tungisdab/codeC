#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int a[1000][1000];
int n;
int m;
int xx[10];
int ss[10];
int dem;
void Try(int i, int j, int h){
    if(i==n && j==m)
        dem++;
    else{
        int x;
        int y;
        for(int v=0;v<=1;v++){
            x=i+xx[v];
            y=j+ss[v];
            if( 0<x && x<=n && 0<y && y<=m)
                Try(x, y, h+1);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    xx[0]=1;
    xx[1]=0;
    ss[0]=0;
    ss[1]=1;
    while (t--)
    {
        cin>>n>>m;
        dem=0;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++)
                cin>>a[i][j];
        Try(1,1,1);
        cout<<dem<<endl;
    }   
    return 0;
}