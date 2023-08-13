#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[100006];
    while(t--)
    {
        int n,z=0;
        long long max=0,sum=0;
        scanf ("%d",&n);
        for (int i=0;i<n;i++)
        {
            scanf ("%d",&a[i]);
            if (a[i]>=0) z=1;
        }
        if (z==0)
        {
            max=a[0];
            for (int i=0;i<n;i++)
            {
                if (a[i]>max) max=a[i];
            }
        }
        else
        {
            for (int i=0;i<n;i++)
            {
                sum+=a[i];
                if (sum>max) max=sum;
                if (sum<0) sum=0;
            }
           
        }
        printf ("%lld\n",max);
    }
}