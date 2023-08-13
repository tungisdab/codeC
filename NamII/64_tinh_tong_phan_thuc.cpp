#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    double s=0;
    for (int i=1;i<=n;i++)
        s+=(1/double(i));
    cout<<fixed<<setprecision(4)<<s;
}