#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int n;
int x[50];
void XnpKt(int x[], int n){
    for (int i=1;i<=n;i++)
        x[i]=0;
    while (1){
        for (int i=1;i<=n;i++)
            cout<<x[i];
        cout<<endl;
        int i=n;
        while (i>0&&x[i]==1){
            x[i]=0;
            i--;
        }
        if (i==0) return;
        else x[i]=1;
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
        cin>>n;
        XnpKt(x,n);
    }
    return 0;
}