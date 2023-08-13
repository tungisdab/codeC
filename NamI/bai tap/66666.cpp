#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    for (int k=1;k<=t;k++)
    {
        int n;
        scanf("%d",&n);
        int a[n][n],b[n][n],c[n][n];
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                scanf ("%d",&a[i][j]);
                b[j][i]=a[i][j];
            }
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
                c[i][j]=0; 
        }
        for (int i=0;i<n;i++)
        {

                for (int j=0;j<n;j++)
                {
                    for (int l=0;l<n;l++)
                    {
                        c[i][j]+=a[i][l]*b[l][j];
                    }
                }
            
        }
        printf ("Test %d:\n",k);
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
                printf ("%d ",c[i][j]);
            printf ("\n");
        }
        printf("\n");
    }
    return 0;
}
