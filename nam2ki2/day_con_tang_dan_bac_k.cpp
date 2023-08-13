#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int k;
int a[1000];
int res=0;
void check(int i, int cnt){
    if(cnt==k){
        res++;
        return;
    }
    for (int j=i+1;j<n;j++)
        if(a[i]<a[j])
            check(j,cnt+1);
}
int main()
{
    cin>>n>>k;
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
        check(i,1);
    cout<<res;
    return 0;
}