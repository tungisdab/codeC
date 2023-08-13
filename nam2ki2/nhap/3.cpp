#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int a[100];
void out(){
    for (int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
void Try(int i){
    for (int j=0;j<=1;j++){
        a[i]=j;
        if (i==n)
            out();
        else
            Try(i+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    Try(1);
    return 0;
}