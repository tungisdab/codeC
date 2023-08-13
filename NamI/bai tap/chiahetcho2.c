#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        long n,h=0;
        scanf ("%ld",&n);
        for (long i=1;i<sqrt(n);i++)
        {
            if (n%i==0)
            {
                if (i%2==0) h++;
                if ((n/i)%2==0) h++;
            }
        }
        if ((sqrt(n)==(int)sqrt(n))&&((int)sqrt(n)%2==0)) h++;
        printf ("%ld\n",h);
    }
}