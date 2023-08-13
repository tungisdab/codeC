#include<stdio.h>
int main()
{
    int t;
    scanf ("%d ",&t);
    while(t--)
    {
        char c[100005];
        int a,b,dem=0;
        scanf ("%d%d",&a,&b);
        while(a>0)
        {
            if (a%b>=10) c[dem]=a%b+55;
            else c[dem]=a%b+48;
            dem++;
            a/=b;
        }
        for (int i=dem-1;i>=0;i--) printf ("%c",c[i]);
        printf("\n");
    }
}