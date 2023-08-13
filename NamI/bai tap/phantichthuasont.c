#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while(t--)
    {
        int n,d=0;
        scanf ("%d",&n);
        printf("%d = ",n);
        for (int i=2;i<=n;i++)
        {
            int dem=0,c=0;
            while(n%i==0)
            {
                dem++;
                n/=i;
                c=1;
            }
            if (c==1)
            {
                if (d==0)
                {
                    printf ("%d^%d ",i,dem);
                    d=1;
                }
                else
                    printf ("* %d^%d ",i,dem);
            }
        }
        printf ("\n");
    }
}