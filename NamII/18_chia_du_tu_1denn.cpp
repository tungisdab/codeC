#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long sum=0,n,m,k;
        cin>>n>>m;
        for (int i=1;i<=n;i++)
        {
            sum+=i%m;
        }
        cout<<sum<<endl;
    }
}