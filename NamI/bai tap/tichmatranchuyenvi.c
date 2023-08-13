#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    for (int k=1;k<=t;k++)
    {
        int n,m,max;
        scanf("%d%d",&m,&n);
        if (m<n) 
            max=n;
        else 
            max=m;
        int a[m][n],b[n][m],c[m][m];
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                scanf ("%d",&a[i][j]);
                b[j][i]=a[i][j];
            }
        }
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<m;j++)
                c[i][j]=0; 
        }
        for (int i=0;i<max;i++)
        {
            if (i<m)
            {
                for (int j=0;j<m;j++)
                {
                    for (int l=0;l<n;l++)
                    {
                        c[i][j]+=a[i][l]*b[l][j];
                    }
                }
            }
        }
        printf ("Test %d:\n",k);
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<m;j++)
                printf ("%d ",c[i][j]);
            printf ("\n");
        }
    }
}