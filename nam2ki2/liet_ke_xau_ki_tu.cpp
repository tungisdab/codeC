#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int k;
int a[1000];
void out(){
    for (int i=1;i<=k;i++)
        cout<<(char) (a[i]+65);
    cout<<endl;
}
void Try(int i){
    for (int j=a[i-1];j<=n;j++){
        a[i]=j;
        if (i==k)
            out();
        else 
            Try(i+1);
    }
}
int main()
{
    // int t;
    // cin>>t;
    // cin.ignore();
    // while (t--)
    // {
        char b;
        cin>>b>>k;
        n= (int)b-65;
        Try(1);
    // }   
    return 0;
}
