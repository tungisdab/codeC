#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int k;
bool cmp(int a, int b){
    return (abs(k-a))<(abs(k-b));
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
        cin>>n>>k;
        int a[n+4];
        for (int i=0;i<n;i++)
            cin>>a[i];  
        sort(a,a+n, cmp); 
        for (int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }   
    return 0;
}