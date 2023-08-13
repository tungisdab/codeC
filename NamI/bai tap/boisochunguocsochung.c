#include<stdio.h>
int ucln(long long a, long long b)
{
    if (b==0) return a;
    return ucln(b,a%b);
}
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        long long a,b,k;
        scanf ("%lld%lld",&a,&b);
        k=ucln(a,b);
        printf ("%lld ",(a*b)/k);
        printf ("%lld\n",k);
    }
}