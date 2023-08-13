#include<stdio.h>
#include<math.h>
int check(int h)
{
    int m,n;
    while (h>=10)
    {
        m=h%10;
        h/=10;
        n=h%10;
        if (n<=m) return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf ("%d",&t);
    while(t--)
    {
        int a,b,dem=0;
        scanf ("%d%d",&a,&b);
        for (int i=a;i<=b;i++)
        {
            if (check(i)) dem++;
        }
        printf ("%d\n",dem);
    }
}