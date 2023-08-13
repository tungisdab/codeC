#include<stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int a[n],i=0,temp,buoc=1;
    for (int i=0;i<n;i++) 
        scanf ("%d",&a[i]);
    while(i<n-1)
    {
        int c=0;
        for (int j=i;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c=1;
            }
        }
        if (c==1)
        {
            printf ("Buoc %d: ",buoc);
            buoc++;
            for (int j=0;j<n;j++)
                printf ("%d ",a[j]);
            printf ("\n");
        }
        else
            i++;
    }
}