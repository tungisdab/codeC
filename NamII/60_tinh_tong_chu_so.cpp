#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long n,sum;
        cin>>n;
        while (n>=10)
        {
            sum=0;
            while (n>0)
            {
                sum+=n%10;
                n/=10;
            }
            n=sum;
        }
        cout<<sum<<endl;
    }
}