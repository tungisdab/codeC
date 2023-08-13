#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int a[1000];
int dem;
bool check(int x, int y){
    for (int i=1;i<x;i++){
        if (a[i]==y || abs(i-x)==abs(a[i]-y))
            return false;
    }
    return true;
}
void Try(int i){
    for (int j=1;j<=n;j++){
        if (check(i, j)){
            a[i]=j;
            if (i==n)
                dem++;
            else 
                Try(i+1);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {   
        dem=0;
        cin>>n;
        if(n<3)
            cout<<"-1"<<endl;
        else 
            Try(1);
        cout<<dem<<endl;
    }   
    return 0;
}