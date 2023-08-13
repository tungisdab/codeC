#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
long n,W;
struct Dta{
    long w, val;
};
Dta a[200];
bool cmp(Dta a, Dta b){
    return (float)a.val/a.w > (float)b.val/b.w;
}
long Try(int i, long w, long val){
    if (w>W) return 0;
    if (i==n && w<=W )
        return val;
    long l= Try(i+1, w+a[i].w, val+a[i].val);
    long r= Try(i+1, w, val);
    return max(l,r);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>W;
    for (int i=0;i<n;i++)
        cin>>a[i].w>>a[i].val;
    sort(a,a+n,cmp);
    cout<<Try(0,0,0);
    return 0;
}
