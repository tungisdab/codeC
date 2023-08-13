#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int n;
        scanf ("%d",&n);
        int a[n],b[n],q[n],temp,max=0,v=0,c,d;
        for (int i=0;i<n;i++)
        {
            scanf ("%d",&a[i]);
            b[i]=a[i];
        }
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
            }
        }
        for (int i=0;i<n;i++)
        {
            c=0;
            if (b[i]!=b[i-1])
            {
                for (int j=i+1;j<n;j++)
                {
                    if (b[i]==b[j]) c++;
                }
                if (c>max)
                {
                    max=c;
                    q[0]=b[i];
                    v=1;
                    c=0;
                }
                if (c==max)
                {
                    q[v]=b[i];
                    v++;
                }
            }
        }
        for (int i=0;i<v;i++) printf ("%d ",q[i]);
        printf ("\n");
    }
}