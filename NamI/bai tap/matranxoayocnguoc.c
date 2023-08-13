#include <stdio.h>
#include <math.h>
int check(int g)
{
    if (g<2) return 0;
    for (int o=2;o<=sqrt(g);o++)
    {
        if (g%o==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf ("%d",&t);
    int c[500],q=0;
    for (int l=0;l<=500;l++)
    {
        if (check(l))
        {
            c[q]=l;
            q++;
        }
    }
    for (int v=1;v<=t;v++)
    {
        int n;
        scanf ("%d",&n);
        int a[n][n],k=0;
        for (int i=0;i<=(n/2);i++)
        {
            for (int j=i;j<n-i-1;j++)
            {
                a[i][j]=c[k];
                k++;
            }
            for (int j=i;j<n-i-1;j++)
            {
                a[j][n-i-1]=c[k];
                k++;
            }
            for (int j=i;j<n-i-1;j++)
            {
                a[n-i-1][n-j-1]=c[k];
                k++;
            }
            for (int j=i;j<n-i-1;j++)
            {
                a[n-j-1][i]=c[k];
                k++;
            }
        }
        if (n%2!=0) a[(n-1)/2][(n-1)/2]=c[k];
        printf ("Test %d:\n",v);
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
            printf ("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf ("\n");
    }
}