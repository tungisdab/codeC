#include<stdio.h>
#include<math.h>
int kiemtra(int h)
{
    int max=0,min=0,e;
    int d=h%10,c=(h/10)%10;
    h/=10;
    if (c==d) return 0;
    if (c<d) 
    {
        max=d;
        while (h>0)
        {
            e=h%10;
            h/=10;
            if (e>=max) return 0;
            max=e;
        }
    }
    if (c>d)
    {
        min=d;
        while (h>0)
        {
            e=h%10;
            h/=10;
            if (e<=min) return 0;
            min=e;
        }
    }
    return 1;
}
int check(int h)
{
    if (h<2) return 0;
    int l;
    for (l=2;l<=sqrt(h);l++)
    {
        if (h%l==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int n,dem=0,i;
        scanf ("%d",&n);
        int q=pow(10,n-1);
        int p=pow(10,n);
        for ( i=q;i<p;i++)
        {
            if (check(i)&&kiemtra(i))
            {
                dem++;
                printf ("%d\n",i);
            }
        }
       // printf ("%d\n",dem);
    }
}