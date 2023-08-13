#include<stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int a[n],temp,v=1;
    for (int i=0;i<n;i++) scanf ("%d",&a[i]);
    for (int i=0;i<n;i++)
    {
        int c=0;
        for (int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                c=1;
            }
        }
        if (c==1)
        {
            printf("Buoc %d: ",v);
            for (int j=0;j<n;j++) printf ("%d ",a[j]);
            v++;
            printf ("\n");
        }
    }
}