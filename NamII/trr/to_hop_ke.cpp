#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
void ThKe(int a[], int n, int k){
    for (int i=1;i<=k;i++)
        a[i]=i;
    while (1){
        for (int i=1;i<=k;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        int i=k;
        while (i>0&&a[i]>=n-k+i)
            i--;
        if(i==0) return;
        a[i]=a[i]+1;
        for (int j=i+1;j<=k;j++)
            a[j]=a[i]+j-i;
    }

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
        int n,k;
        int a[100];
        cin>>n;
        cin>>k;
        ThKe(a,n,k);
    }
    return 0;
}