#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    for (int l=1;l<=t;l++)
    {
        int n;
        scanf ("%d",&n);
        int a[n],b[n],h=1,k=1;
        for (int i=0;i<n;i++)
        {
            scanf ("%d",&a[i]);
            b[i]=1;
        }
        if (a[0]<a[1]) b[0]=1;
        else b[0]=0;
        for (int i=1;i<n;i++)
        {
            if (a[i-1]<a[i]) h++;
            else
            {
                if (h>k)
                {
                    int g=i-1-h;
                    while (g>=0)
                    {
                        b[g]=0;
                        g--;
                    }
                    k=h;
                    h=1;
                }
                else if (h<k)
                {
                    int g=i-1;
                    while (g>(i-h-1)) 
                    {
                        b[g]=0;
                        g--;
                    }
                    h=1;
                }
                else
                {
                    h=1;
                }
            }
        }
        if (a[n-2]>a[n-1]) b[n-1]=0;
        printf ("Test %d:\n%d\n",l,k);
        int f=0;
        for (int i=0;i<n;i++)
        {
            if (b[i]==1)
            {
                if (f==0)
                {
                    if (a[i-1]>=a[i])
                    printf ("%d ",a[i]);
                    else printf ("%d ",a[i]);
                    f=1;
                }
                else
                {
                    if (a[i-1]>=a[i])
                    printf ("\n%d ",a[i]);
                    else printf ("%d ",a[i]);
                }
            }
        }
        printf ("\n");
    }
}