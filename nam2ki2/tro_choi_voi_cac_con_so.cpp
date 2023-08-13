#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int a[1000];
int check[1000]={};
void out(){
    int dd=1;
    for (int i=2;i<=n;i++){
        if(abs(a[i]-a[i-1])==1){
            dd=0;
            break;
        }
    }
    if(dd){
        for (int i=1;i<=n;i++)
            cout<<a[i];
        cout<<endl;
    }
}
void Try(int i){
    for (int j=1;j<=n;j++){
        if(check[j]==0){
            a[i]=j;
            check[j]=1;
            if(i==n)
                out();
            else
                Try(i+1);
            check[j]=0;
        }
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
        Try(1);
        
    }  
    return 0;
}