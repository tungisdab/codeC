#include<stdio.h>
int tinh(int g)
{
    int sum=0;
    while(g>0)
    {
        sum+=g%10;
        g/=10;
    }
    return sum;
}
int tong(int l)
{
    int sum=0;
    for (int i=2;i<=l;i++)
    {
        while(l%i==0)
        {
            sum+=tinh(i);
            l/=i;
        }
    }
    return sum;
}
int main()
{
    int n,h,k;
    scanf ("%d",&n);
    h=tinh(n);
    k=tong(n);
    if (h==k) printf ("YES");
    else printf ("NO");
}