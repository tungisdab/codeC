#include<stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0;i<n;i++)
    {
        int z=i-1,m=0,b=1;
        while (z>=0)
        {
            if (a[i]==a[z]) m++;
            z--;
        }
        if (m==0)
        {
            for (int j=i+1;j<n;j++)
            {
                if (a[i]==a[j]) b++;
            }
            printf ("%d %d\n",a[i],b);
        }
    }
}