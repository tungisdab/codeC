#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,m,k=0;
        cin>>a>>m;
        for (int i=0;i<m;i++)
        {
            if ((i*a)%m==1)
            {
                cout<<i;
                break;
            }
            if (i==m-1) k=1;
        }
        if (k==1) cout<<"-1";
        cout<<endl;
    }
}