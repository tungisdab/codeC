#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,vitri=0;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=n-1;i>=0;i--)
        {
            if (a[i-1]>a[i])
            {
                vitri=i;
                break;
            }
        }
        swap(a[vitri-1],a[n-1]);
        for (int i=0;i<n;i++)
        {
            if(i>=vitri)
            {
                for (int j=n-1;j>=vitri;j--)
                    cout<<a[j]<<" ";
            }
            else 
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}