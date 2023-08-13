#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int sum=INT_MIN;
    sum=max(sum, a[n-1]*a[n-2]);
    sum=max(sum, a[0]*a[1]);
    sum=max(sum, a[0]*a[1]*a[n-1]);
    sum=max(sum, a[n-1]*a[n-2]*a[n-3]);
    cout<<sum;
    return 0;
}