#include<bits/stdc++.h>
using namespace std;
int check(int h)
{
    if (h<2) return 0;
    for (int i=2;i<=sqrt(h);i++)
        if (h%i==0) return 0;
    return 1;
}
int main()
{
    int m,n;
    cin>>m>>n;
    if (m<n)
    {
        for (int i=m+1;i<n;i++)
        {
            if (check(i)) cout<<i<<" ";
        }
    }
    else 
    {
        for (int i=n+1;i<m;i++)
        {
            if (check(i)) cout<<i<<" ";
        }
    }
    cout<<endl;
}