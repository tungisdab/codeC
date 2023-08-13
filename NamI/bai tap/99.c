#include<stdio.h>
int tong(int h)
{
    long long sum=0;
    while (h>0)
    {
        sum+=h%10;
        h/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf ("%d",&n);
    long long a[n];
    for (int i=0;i<n;i++) scanf ("%lld",&a[i]);
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (tong(a[i])>tong(a[j]))
            {
                long long temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i=0;i<n;i++) printf ("%lld ",a[i]);
}