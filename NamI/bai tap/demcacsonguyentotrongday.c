#include<stdio.h>
#include<math.h>
int kiemtra(int k)
{
    if (k==1||k==0) return 0;
    if (k==2) return 1;
    for (int m=2;m<=sqrt(k);m++)
    {
        if (k%m==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf ("%d",&t);
    for (int v=1;v<=t;v++)
    {
        int n;
        scanf ("%d",&n);
        int a[n],z;
        for (int i=0;i<n;i++) scanf ("%d",&a[i]);
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if (a[i]>a[j])
                {
                    z=a[i];
                    a[i]=a[j];
                    a[j]=z;
                }
            }
        }
        printf ("Test %d:\n",v);
        for (int i=0;i<n;i++)
        {
            int k=a[i],p=1,o=0;
            if ((kiemtra(k)==1)&&(a[i]!=a[i-1]))
            {
                for (int j=i+1;j<n;j++)
                {
                    if (a[i]==a[j]) p++;
                    o++;
                }
            }
            if (i==(n-1))
            {
                if ((kiemtra(k)==1)&&(a[i]!=a[i-1])) o++;
            }
            if (o>0)
            {
                printf ("%d xuat hien %d lan\n",a[i],p);
            }
        }
    }
}