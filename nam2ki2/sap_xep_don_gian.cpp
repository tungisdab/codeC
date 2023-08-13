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
    vector<pair<int, int>> x;
    int dem=0;
    int dem1=1;
    for (int i=0;i<n;i++){
        cin>>a[i];
        x.push_back({a[i],i});
    }
    sort(x.begin(), x.end());
    for (int i=0;i<n-1;i++){
        if(x[i].second < x[i+1].second){
            dem1++;
            dem=max(dem, dem1);
        }
        else
            dem1=1;
    }
    cout<<n-dem;
    return 0;
}


