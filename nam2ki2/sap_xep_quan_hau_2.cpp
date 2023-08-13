#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int m;
int a[100];
int b[100][100];
void out(){
    int cc=0;
    for (int i=1;i<9;i++)
        cc+=b[a[i]][i];
    if(cc>m)
        m=cc;
}
bool check(int x, int y){
    for (int i=1;i<x;i++){
        if (a[i]==y || abs(i-x)==abs(a[i]-y))
            return false;
    }
    return true;
}
void Try(int i){
    for (int j=1;j<9;j++){
        if(check(i, j)){
            a[i]=j;
            if(i==8)
                out();
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
        m=0;
        for (int i=1;i<9;i++){
            for (int j=1;j<9;j++)
                cin>>b[i][j];
        }   
        Try(1);
        cout<<m<<endl;
    }
    return 0;
}