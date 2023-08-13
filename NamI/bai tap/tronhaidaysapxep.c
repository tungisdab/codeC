#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    for (int v=1;v<=t;v++)
    {
        int n,temp,c=0,d=0;
        scanf ("%d",&n);
        int a[n],b[n];
        for (int i=0;i<n;i++)
            scanf ("%d",&a[i]);
        for (int i=0;i<n;i++)
            scanf ("%d",&b[i]);
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if (a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                if (b[i]<b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        printf ("Test %d:\n",v);
        for (int i=0;i<2*n;i++)
        {
            if (i%2==0)
            {
                printf ("%d ",a[c]);
                c++;
            }
            else
            {
                printf ("%d ",b[d]);
                d++;
            }
        }
        printf ("\n");
    }
}