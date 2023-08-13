#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int a,b;
        long long n;
        scanf ("%d%d%lld",&a,&b,&n);
        int c=abs(a)+abs(b);
        if (c<=n)
        {
            long long d=n-c;
            if (d%2==0) printf ("YES\n");
            else printf ("NO\n");
        }
        else printf ("NO\n");
    }
    return 0;
}