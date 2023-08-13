#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int v=1;v<=t;v++)
    {
        int m,n;
        scanf ("%d%d",&m,&n);
        int a[m][n],max=0,sum,d,e;
        for (int i=0;i<m;i++)
        {
            sum=0;
            for (int j=0;j<n;j++)
            {
                scanf ("%d",&a[i][j]);
                sum+=a[i][j];
            }
            if (sum>max) 
            {
                max=sum;
                d=i;
            }
        }
        max=0;
        for (int i=0;i<n;i++)
        {
            sum=0;
            for (int j=0;j<m;j++)
            {
                if (j!=d)
                {
                    sum+=a[j][i];
                }
            }
            if (sum>max)
            {
                max=sum;
                e=i;
            }
        }
        printf ("Test %d:\n",v);
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if ((i!=d)&&(j!=e))
                {
                    printf ("%d ",a[i][j]);
                }
            }
            printf ("\n");
        }
    }
    printf ("\n");
}