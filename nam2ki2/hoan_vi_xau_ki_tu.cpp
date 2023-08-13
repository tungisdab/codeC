#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int a[1005];
int c[1005]={0};
string b; 
int n;
void out(){
    for (int i=1;i<=n;i++)
        cout<<b[a[i]-1];
    cout<<" ";
}
void Try(int i){
    for (int j=1;j<=n;j++){
        if (c[j]==0){
            c[j]=1;
            a[i]=j;
            if (i==n)
                out();
            else 
                Try(i+1);
            c[j]=0;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    { 
        cin>>b; 
        n=b.length();
        Try(1);
        cout<<endl;
    }   
    return 0;
}
