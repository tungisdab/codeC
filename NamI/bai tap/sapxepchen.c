#include<stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int a[n],b[n],dau=0,cuoi=0,temp,c;
    for (int i=0;i<n;i++)     
        scanf ("%d",&a[i]);   
    for (int i=0;i<n;i++)
    {
        if (i==0)
        {
            b[dau]=a[0];
            b[cuoi]=a[0];
        }
        else
        {
            if (b[cuoi]<=a[i])
            {
                cuoi++;
                b[cuoi]=a[i];
            }
            else if (a[i]<b[dau])
            {
                for (int j=0;j<=cuoi;j++)
                {
                    temp=b[j];
                    b[j]=a[i];
                    a[i]=temp;
                }
                cuoi++;
                b[cuoi]=a[i];
                
            }
            else
            {
                for (int j=dau;j<=cuoi;j++)
                {
                    if ((b[j-1]<=a[i])&&(a[i]<b[j]))
                    {
                        temp=b[j];
                        b[j]=a[i];
                        a[i]=temp;
                    }
                }
                cuoi++;
                b[cuoi]=a[i];
            }
        }
        printf ("Buoc %d: ",i);
        for (int i=0;i<=cuoi;i++) printf ("%d ",b[i]);
        printf ("\n");
    }
}