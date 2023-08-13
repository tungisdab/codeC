#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n,h;
int a[1000]={};
void Try(int i){
    cout<<"[";
    for (int i=1;i<=n;i++){
        if (i!=n) 
            cout<<a[i]<<" ";
        else   
            cout<<a[i];
    }
    cout<<"]"<<endl;
    if (n==1) return;
    else{
        for (int i=1;i<=n;i++){
            int c=a[i];
            a[i]+=a[i+1];
        }
        Try(n--);
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
        for (int i=1;i<=n;i++)
            cin>>a[i];
        Try(n);
    }   
    return 0;
}