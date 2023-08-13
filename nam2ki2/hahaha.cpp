#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int a[], int n){
    for (int i=1;i<=n;i++)
        a[i]=0;
    while(1){
        if (a[1]==1 && a[n]==0){
            int d=0;
            for (int i=2;i<=n;i++){
                if(a[i]==1 && a[i-1]==1){
                    d=1;
                    break;
                }
            }
            if(!d){
                for (int i=1;i<=n;i++)
                {
                    if (a[i]==0)
                        cout<<"A";
                    else    
                        cout<<"H";
                }
                cout<<endl;
            }
        }
        int i=n;
        while (i>0 && a[i]==1){
            a[i]=0;
            i--;
        }
        if (i==0) return;
        else 
            a[i]=1;
    }
}
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
        int a[100];
        solve(a,n);
    }   
    return 0;
}