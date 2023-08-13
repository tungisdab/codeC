#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        long long x,y,a,b;
        scanf ("%lld %lld %lld %lld",&x,&y,&a,&b);
        if (x<y)
        {
            long long temp=x;
            x=y;
            y=temp;
        }
        long long m,n;
        m=a*(x+y);
        n=a*(x-y)+b*y;
        if (m<n) printf ("%lld\n",m);
        else printf ("%lld\n",n); 
    }
}