#include<bits/stdc++.h>
using namespace std;
#define long long ll
int main()
{
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
        int min=abs(a[0]-a[1]);
        for (int i=1;i<n-1;i++)
        {
            if (abs(a[i]-a[i+1])<min)
                min=abs(a[i]-a[i+1]);
        }
        cout<<min<<endl;
    }    
    return 0;
}