#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,dem,m;
    cin>>n;
    for (int i=2;i<=sqrt(n);i++)
    {
        dem=0,m=0;
        while (n%i==0)
        {
            dem++;
            m=1;
            n/=i;
        }
        if (m==1) cout<<i<<" "<<dem<<endl;
    }
    if (n>1) cout<<n<<" "<<"1";
}