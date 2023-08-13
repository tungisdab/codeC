#include<stdio.h>
int ucln(int g, int h)
{
    if (h==0) return g;
    return ucln(h,g%h);
}
int main()
{
    int t;
    scanf ("%d",&t);
    for (int l=1;l<=t;l++)
    {
        int a,b,c,d,z;
        scanf ("%d%d%d%d",&a,&b,&c,&d);
        z=ucln(a,b);
        a/=z;
        b/=z;
        z=ucln(c,d);
        c/=z;
        d/=z;
        z=(b*d)/ucln(b,d);
        a=z/b*a;
        c=z/d*c;
        printf ("Case #%d:\n",l);
        printf ("%d/%d %d/%d\n",a,z,c,z);
//        if ((a+c)%z==0) printf ("%d\n",(a+c)/z);
        printf ("%d/%d\n",a+c,z);
        int y=ucln(a,c);
        a/=y;
        c/=y;
//        if (a%c==0) printf ("%d\n",a/c);
        printf ("%d/%d\n",a,c);
    }
}