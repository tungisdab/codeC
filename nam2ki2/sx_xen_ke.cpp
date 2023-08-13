#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
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
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int h=0;
        int k=n-1;
        for (int i=0;i<n;i++){
            if (i%2==0){
                cout<<a[k]<<" ";
                k--;
            }
            else{
                cout<<a[h]<<" ";
                h++;
            }
        }
        cout<<endl;
    }
    return 0;
}