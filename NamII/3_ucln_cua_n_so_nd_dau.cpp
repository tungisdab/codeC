#include<iostream>
using namespace std;
long long UCLN(long long a, long long i)
{
    if (i==0) return a;
    return UCLN(i,a%i);
}
long long BCNN (long long a, long long i)
{
    return (a*i/UCLN(a,i));
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,a=1,b;
        cin>>n;
        for (long long i=1;i<=n;i++)
        {
            a=BCNN(a,i);
        }
        cout<<a<<endl;
    }
}