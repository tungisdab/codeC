#include<stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int a[n],temp,c=1;
    for (int i=0;i<n;i++)
        scanf ("%d",&a[i]);
    for (int i=0;i<n-1;i++)
    {
        int min=a[i],d=-1;
        for (int j=i+1;j<n;j++)
        {
            if (min>a[j])
            {
                d=j;
                min=a[j];
            }
        }
        if (d>-1)
        {            
            temp=a[i];
            a[i]=a[d];
            a[d]=temp;
        }
        printf ("Buoc %d:",c);
        c++;
        for (int j=0;j<n;j++)
            printf (" %d",a[j]);
        printf ("\n"); 

    }
}