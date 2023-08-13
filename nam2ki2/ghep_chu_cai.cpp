#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int a[1000];
int check[1000]={};
void out(){
    if(n<5){
        if(a[1]==1 || a[n]==1){
            for (int j=1;j<=n;j++)
                cout<<char(a[j]+64);
            cout<<endl;
        }
    }
    else{
        if( (a[1]==1 && a[n]==5) || (a[n]==1 && a[1]==5)){
            for (int j=1;j<=n;j++)
                cout<<char(a[j]+64);
            cout<<endl;
        }
        else{
            int dd=0;
            for (int j=1;j<n;j++){
                if((a[j]==1 && a[j+1]==5) || (a[j]==5 && a[j+1]==1))
                    dd=1;
            }
            if(dd){
                for (int j=1;j<=n;j++)
                    cout<<char(a[j]+64);
                cout<<endl;
            }
        }
    }
}
void Try(int i){
    for (int j=1;j<=n;j++){
        if(check[j]==0){
            a[i]=j;
            check[j]=1;
            if (i==n)
                out();
            else
                Try(i+1);
            check[j]=0;
        }
    }
}
int main()
{
    char s;
    cin>>s;
    n=(int)s-64;
    Try(1);   
    return 0;
}