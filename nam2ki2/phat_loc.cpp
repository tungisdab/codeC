#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int n){
    int a[n+1]={};
    while (1){
        int dd=1;
        for (int i=1;i<=n;i++){
            if (a[1]==0 || a[n]==1){
                dd=0;
                break;
            }
            if ( i<n && (a[i]==1 && a[i+1]==1)){
                dd=0;
                break;
            }
            if ( i<(n-2) && (a[i]==0 && a[i+1]==0 && a[i+2]==0 && a[i+3]==0)){
                dd=0;
                break;
            }
        }
        if (dd){
            for (int i=1;i<=n;i++){
                if (a[i]==0)
                    cout<<'6';
                else    
                    cout<<'8';
            }
            cout<<endl;
        }
        int i=n;
        while (a[i]==1){
            a[i]=0;
            i--;
        }
        if (i==0)
            return;
        else
            a[i]=1;
    }
}
int main()
{
    int n;
    cin>>n;
    solve(n);   
    return 0;
}