#include<stdio.h>
#include<math.h>
int check(int h)
{
    if (h<2) return 0;
    for (int j=2;j<=sqrt(h);j++)
    {
        if (h%j==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf ("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for (int i=2;i<=(n/2);i++)
        {
            if (check(i)&&check(n-i)) printf ("%d %d ",i,n-i);
        }
        printf ("\n");
    }
}