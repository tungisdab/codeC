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
        int a[n+1000];
        int dd=1;
        int d=1;
        for (int i=1;i<=k;i++){
            cin>>a[i];
            if(a[i]!=i)
                dd=0;
            if(a[i]!=(i+n-k))
                d=0;
        }   
        if(dd){
            for (int i=n-k+1;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
            continue;
        }
        if(d){
            cout<<n-k<<" ";
            for (int i=n-k+2;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
            continue;
        }
        if(a[k]>a[k-1]+1){
            for (int i=1;i<k;i++)
                cout<<a[i]<<" ";
            cout<<a[k]-1<<endl;
        }
        else{
            int c=1;
            for (int i=1;i<k;i++)
                if(a[i]+1==a[i+1])
                    c++;
            if(c==k){
                cout<<a[1]-1<<" ";
                for (int i=n-k+2;i<=n;i++)
                    cout<<i<<" ";
                cout<<endl;
            }
            else{
                int h=k;
                while(h){
                    if(a[h]==a[h-1]+1){
                        a[h]=n--;
                        h--;
                    }
                    else
                        break;
                }
                a[h]--;
                for (int i=1;i<=k;i++)
                    cout<<a[i]<<" ";
                cout<<endl;
            }
        }
    }   
    return 0;
}