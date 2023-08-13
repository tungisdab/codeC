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
        for (int i=1;i<n;i++){
            int h=abs(a[i]-k);
            int j=i-1;
            if (abs(a[j]-k)>h){
                int z=a[i];
                while(j>=0&& abs(a[j]-k)>h){
                    a[j+1]=a[j];
                    j--;
                }
                a[j+1]=z;
            }

        }
        for (int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }    
    return 0;
}