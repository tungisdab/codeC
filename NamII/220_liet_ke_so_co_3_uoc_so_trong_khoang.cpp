#include <stdio.h>
#include <math.h>
//kma

int check(long long n)
{

    if (n < 2)
        return 0;
    if (n <= 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long l, r;
        scanf("%lld%lld", &l, &r);
        long long dem = 0;
        for (long long i = sqrt(l); i <= sqrt(r); i++)
        {
            if (check(i))
                dem++;
        }
        printf("%lld\n", dem);
    }
}