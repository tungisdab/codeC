#include<stdio.h>
int main()
{
    int a[6],max=0,temp,c=0;
    for (int i=0;i<6;i++)
    {
        scanf ("%d",&a[i]);
        if (a[i]>max) max=a[i];
    }
    for (int i=0;i<6;i+=2)
    {
        if (a[i]<a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        if (a[i]==max) c++;
    }
    for (int i=0;i<6;i+=2)
    {
        for (int j=i+2;j<6;j+=2)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                temp=a[i+1];
                a[i+1]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    // for (int i=0;i<6;i++) printf ("%d ",a[i]);
    // printf ("\n%d\n",c);
    if (c==2) printf ("NO");
    else
    {
        if ((a[0]==a[2])&&(a[2]==a[4])&&(a[0]==a[4]))
        {
            if ((a[1]+a[3]+a[5])==max) printf ("YES");
        }
        else
        {
            if ((a[2]==a[4])&&(a[4]==a[5])&&(a[2]==a[3]))
            {
                if (((a[2]+a[4])==max)&&((a[1]+a[2])==max)) printf ("YES");
                else printf ("NO");
            }
            else if ((a[2]==a[4])&&(a[3]==a[5]))
            {
                if (((a[2]+a[4])==max)&&((a[1]+a[3])==max)) printf ("YES");
                else if (((a[3]+a[5])==max)&&((a[1]+a[2])==max)) printf ("YES");
                else printf ("NO");
            }
            else if (a[2]==a[4])
            {
                if (((a[2]+a[1])==max)&&((a[3]+a[5])==max)) printf ("YES");
                else printf ("NO");
            }
            else if (a[3]==a[5])
            {
                if (((a[2]+a[4])==max)&&((a[3]+a[1])==max)) printf ("YES");
                else printf ("NO");
            }
            else if (a[3]==a[4])
            {
                if (((a[2]+a[5])==max)&&((a[3]+a[1])==max)) printf ("YES");
                else printf ("NO");
            }
            else printf ("NO");
        }
    }
}   
