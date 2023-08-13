#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1]={};
    int b[n+1];
    for (int i=1;i<=n;i++)
        cin>>b[i];
    sort(b+1, b+n+1);
    int dem=0;
    while (1){
        int sum=0;
        for (int i=1;i<=n;i++){
            sum+=(a[i]*b[i]);
        }
        if (sum==k){
            for (int i=1;i<=n;i++){
                if (a[i]!=0)
                    cout<<b[i]<<"   ";
            }
            dem++;
            cout<<endl;
        } 
        int i=n;
        while (a[i]==1){
            a[i]=0;
            i--;
        }   
        if (i==0){
            cout<<dem<<endl;
            break;
        }
        else
            a[i]=1;
    }
    return 0;
}