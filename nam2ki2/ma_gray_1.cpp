#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int a[1000];
void out(){
    cout<<a[1];
    for(int i=2;i<=n;i++){
        if((a[i]==1 && a[i-1]==1) || (a[i]==0 && a[i-1]==0))
            cout<<0;
        else
            cout<<1;
    }
    cout<<" ";
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n)
            out();
        else
            Try(i+1);
    }
}
int main() {
    int t;
    cin>>t; 
    while (t--){
        cin>>n;
        Try(1);  
        cout<<endl;
    }
	return 0;
}