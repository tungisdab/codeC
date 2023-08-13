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
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        k=min(k, n-k);
        sort(a,a+n);
        int sum1=0;
        int sum2=0;
        for (int i=0;i<n;i++){
            if(i<k)
                sum1+=a[i];
            else
                sum2+=a[i];
        }
        cout<<sum2-sum1<<endl;
    }      
    return 0;
}