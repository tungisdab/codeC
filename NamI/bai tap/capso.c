#include<stdio.h>
int check(int g,int h)
{
    if (h==0) return g;
    return check(h,g%h);
}
int main()
{
    int t;
    scanf ("%d",&t);
    while(t--)
    {
        int a[4];
        for (int i=0;i<4;i++)
            scanf ("%d",&a[i]);
        if (check(a[0],a[1])==check(a[2],a[3]))
            printf ("YES\n");
        else printf ("NO\n");
    }
}