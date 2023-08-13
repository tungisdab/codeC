#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+5], b[n+5];
        memset(b, -1, sizeof(b));
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=0;i<n-2;i++){
            int dd=0;
            int ddd=0;
            for (int j=i+1;j<n;j++){
                if(!dd){
                    if(a[i]<a[j] && j<n-1){
                        b[i]=a[j];
                        dd=1;
                    }
                }
                else{
                    if(b[i]>a[j] ){
                        b[i]=a[j];
                        ddd=1;
                        break;
                    }
                }
            }
            if(!ddd)
                b[i]=-1;
        }   
        for (int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }   
    return 0;
}