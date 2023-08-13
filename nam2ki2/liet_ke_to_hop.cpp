#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int n, int k){
    int a[n+1];
    int c[n+1];
    int h=1;
    set<int> b;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        b.insert(x);
    }
    for (int i:b){
        a[h]=i;
        c[h]=h;
        h++;
    }
    h--;
    while (1){
        for (int i=1;i<=k;i++)
            cout<<a[c[i]]<<" ";
        cout<<endl;
        int i=k;
        while (i>0 && (c[i]>= h-(k-i)))
            i--;
        if (i==0)
            return;
        else{
            c[i]++;
            for (int j=i+1;j<=k;j++)
                c[j]=c[i]+j-i;
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    solve(n, k);
    return 0;
}