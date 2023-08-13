#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+10];
        for (int i=n-k+1;i<=n;i++)
            cin>>a[i];
        int h=n;
        int g=0;
        for(int i=n;i>=n-k+1;i--){
            if (h-a[i]>0){
                a[i]++;
                g=1;
                for (int j=i+1;j<=n;j++)
                    a[j]=a[j-1]+1;
                break;
            }
            else    
                h--;
        }
        if (g==0){
            int c=1;
            for (int i=n-k+1;i<=n;i++)
                cout<<c++<<" ";
        }
        else{
            for(int i=n-k+1;i<=n;i++)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}