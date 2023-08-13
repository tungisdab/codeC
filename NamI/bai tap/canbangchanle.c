#include<stdio.h>
#include<math.h>
int check(int h)
{
    int c1=0,c2=0;
    while(h>0)
    {
        if ((h%10)%2==0) c1++;
        else c2++;
        h/=10;
    }
    if (c1==c2) return 1;
    else return 0;
}
int main()
{
    int n,dem=0;
    scanf ("%d",&n);
    int a=pow(10,n-1);
    int b=pow(10,n);
    for (int i=a;i<b;i++)
    {
        if (check(i))
        {
            printf ("%d ",i);
            dem++;
            if (dem%10==0) printf ("\n");
        }
    }
}