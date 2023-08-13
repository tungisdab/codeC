#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, p, dem = 0;
        scanf("%d %d", &n, &p);
        for (int i = 2; i <= n; i++)
        {
            int j = i;
            while (j % p == 0)
            {
                dem++;
                j /= p;
            }
        }
        printf("%d\n", dem);
    }
}