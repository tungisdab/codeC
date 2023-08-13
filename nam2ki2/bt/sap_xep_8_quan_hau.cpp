#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int a[8];
bool check(int x2, int y2){
    for(int i=1;i<x2;i++){
        if (a[i]==y2 || abs(i-x2)==abs(a[i]-y2))
            return false;
    }
    return true;
}
void out(int n){
    for (int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void Try(int i, int n){
    for (int j=1;j<=n;j++){
        if (check(i, j)){
            a[i]=j;
            if (i==n) 
                out(n);
            Try(i+1,n);
        }
    }
}
int main()
{
    int n=8;
    Try(1, n);    
    return 0;
}