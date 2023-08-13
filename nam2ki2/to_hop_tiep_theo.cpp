#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        int b[n+6]={};
        for (int i=1;i<=k;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        int i=k;
        while(i>0 && a[i]>=n-(k-i))
            i--;
        int dem=0;
        if (i==0) 
            cout<<k<<endl;
        else{
            a[i]++;
            if (b[a[i]]==0)
                dem++;
            for (int j=i+1;j<=k;j++){
                a[j]=a[i]+j-i;
                if (b[a[j]]==0)
                    dem++;
            }
            cout<<dem<<endl;
        }
    }
    return 0;
}
