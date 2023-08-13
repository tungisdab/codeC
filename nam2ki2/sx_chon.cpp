#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int a[], int n){
    for (int i=0;i<n;i++)
        cin>>a[i];
    int g=1;
    for (int i=0;i<n-1;i++){
        int min=a[i];
        int d=0;
        for (int j=i+1;j<n;j++){
            if (a[j]<min){
                min=a[j];
                d=j;
            }     
        }
        if (d) swap(a[i],a[d]);
        cout<<"Buoc "<<g<<": ";
        for (int j=0;j<n;j++)
            cout<<a[j]<<" ";
        cout<<endl;
        g++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    solve(a,n);
    return 0;
}