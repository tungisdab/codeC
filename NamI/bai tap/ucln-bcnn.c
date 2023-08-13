#include<stdio.h>
int ucln(long long a, long long b)
{
    if (b==0) return a;
    return ucln(b,a%b);
}
int main()
{
    long long a,b,k;
    scanf ("%lld%lld",&a,&b);
    k=ucln(a,b);
    printf ("%lld\n",k);
    printf ("%lld",(a*b)/k);

}