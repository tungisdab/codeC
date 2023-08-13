#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n,k;
int dd;
int a[1000];
int b[1000];
void out(){
    int sum=0;
    for (int j=1;j<=n;j++)
        sum+= (a[j]*b[j]);
    if (sum==k){
        dd=0;
        cout<<"[";
        int z=0;
        for (int j=1;j<=n;j++){
            if (a[j]==1 && z==0){
                cout<<b[j];
                z=1;
            }
            else if (a[j]==1 && z==1)
                cout<<" "<<b[j];    
        }
        cout<<"] ";
    }
}
void Try(int i){
    for (int j=1;j>=0;j--){
        a[i]=j;
        if (i==n)
            out();
        else
            Try(i+1);
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
        dd=1;
        cin>>n>>k;
        for (int i=1;i<=n;i++)
            cin>>b[i];
        sort(b+1, b+n+1);
        Try(1);
        if (dd)
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}
