#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int b[100005]={};
bool be(int c, int d){
    return b[c]>b[d];
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
        int a[n];
        for(int i=0;i<100005;i++)
            b[i]=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        sort(a, a+n);
        stable_sort(a,a+n,be);
        for (int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }   
    return 0;
}