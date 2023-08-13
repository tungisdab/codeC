#include<stdio.h>
#include<math.h>
int check(int h)
{
    if (h<2) return 0;
    for (int l=2;l<=sqrt(h);l++)
    {
        if (h%l==0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],sum=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++) scanf ("%d",&a[i][j]);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if (check(a[i][j])) sum+=a[i][j];
        }
    }
    printf ("%d",sum);
}