#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int dem;
int a[1000];
bool check(int x, int y){
    for (int i=1;i<x;i++){
        if (a[i]==y || abs(i-x)==abs(a[i]-y))
            return false;
    }
    return true;
}
void Try(int i,int n){
    for (int j=1;j<=n;j++){
        if (check(i,j)){
            a[i]=j;
            if (i==n)
                dem++;
            else    
                Try(i+1,n);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        dem=0;
        if (n<3)
            cout<<"0";
        else 
            Try(1,n);
        cout<<dem<<endl;
    }   
    return 0;
}