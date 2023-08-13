#include <stdio.h>
int main()
{
    int m,n;
    scanf ("%d%d",&m,&n);
    if (m<=n)
    {
        for (int i=1;i<=m;i++)
        {
            for (int j=i;j<=n;j++) printf("%d",j);
            for (int k=i-1;k>0;k--) printf ("%d",k);
            printf ("\n");
        }
    }
}