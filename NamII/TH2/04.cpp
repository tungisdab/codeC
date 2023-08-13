#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int n;
    cin>>n;
    int a[n],dem=0;
    for (int i=0;i<n;i++)
    {
        dem++;
        cin>>a[i];
    }
    if (a[n-1]==dem) cout<<"Excellent!";
    return 0;
}