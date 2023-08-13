#include <stdio.h>
int a[11];
int n;
int check[1000]={};
void out()
{
    for (int j=1;j<=n;j++)
        printf ("%d",a[j]);
    printf ("\n");
}
void Try(int i)
{
    for (int j=1;j<=n;j++)
    {
        if (check[j]==0)
        {
            check[j]=1;
            a[i]=j;
            if (i==n) out();
            else Try(i+1);
            check[j]=0;
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf ("%d",&n);
        Try(1);
    }
    return 0;
}