#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(ll h)
{
    int c=0,l=0;
    while (h>0)
    {
        int k=h%10;
        if (k%2==0)
            c++;
        else
            l++;
        h/=10;
    }
    if (c==l) return 1;
    else return 0;
}
int main()
{
    int n,dem=0;
    cin>>n;
    for (ll i=pow(10,n-1); i<pow(10,n);i++)
    {
        if (check(i))
        {
            dem++;
            cout<<i<<" ";
        }
        if (dem%10==0)
            cout<<endl;
    }
    return 0;
}