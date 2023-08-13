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
        int max;
        for (int i=k-1;i<n;i++){
            int max=a[i];
            for (int j=i-k+1;j<=i;j++){
                if (a[j]>max){
                    max=a[j];
                }
            }
            cout<<max<<" ";
        }
        cout<<endl;
    }   
    return 0;
}