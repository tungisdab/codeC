#include<stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf ("%d",&a[i]);
    for (int i=0;i<n-1;i++)
    {
        int min=a[i],c=-1,temp;
        for (int j=i+1;j<n;j++)
        {
            if (a[j]<min)
            {
                min=a[j];
                c=j;
            }
        }
        if (c>-1)
        {
            temp=a[i];
            a[i]=a[c];
            a[c]=temp;
        }
        for (int j=0;j<n;j++)
            printf ("%d ",a[j]);
        printf ("\n");
    }
    
}