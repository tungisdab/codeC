#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int n, int k){
    int a[n+1];
    for (int i=1;i<=k;i++)
        a[i]=i;
    while (1){
        for (int i=1;i<=k;i++)
            cout<<(char) (a[i]+64);
        cout<<endl;
        int i=k;
        while (i>0 && a[i]>= n-(k-i))
            i--;
        if (i==0) 
            break;
        else{
            a[i]++;
            for (int j=i+1;j<=k;j++)    
                a[j]=a[i]+j-i;
        }
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
        cin>>n>>k;
        solve(n,k);   
    }   
    return 0;
}