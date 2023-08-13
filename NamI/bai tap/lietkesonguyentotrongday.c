#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,a;
    cin>>a;
    for (int i=0;i<=n;i+=3)
    {
        a=3*i;
        if ((long long)x==log(a-n)) cout<<x<<"\n"<<a;
    }
}