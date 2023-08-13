#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int n;
int a[100];
void XnDq(int m){
    if (m>n){
        for (int i=1;i<=n;i++)
            cout<<a[i];
        cout<<endl;
        return;
    }
    for (int i=0;i<=1;i++){
        a[m]=i;
        XnDq(m+1);
    }
}
void LkDqXn(int a[], int n){
    XnDq(1);
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
        LkDqXn(a,n);
    }
    return 0;
}