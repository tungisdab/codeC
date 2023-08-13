#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second<b.second;
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
        int n;
        cin>>n;
        pair<int, int> a[n];
        for (int i=0;i<n;i++)
            cin>>a[i].first>>a[i].second;
        sort(a,a+n,cmp);
        int dem=1;
        int j=0;
        for (int i=0;i<n;i++){
            if(a[j].second<=a[i].first){
                dem++;
                j=i;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
}