#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while(t--)
    {
        int a,b,m,n;
        scanf ("%d%d%d%d",&a,&b,&m,&n);
        if ((m-a)==(n-b)) printf ("YES\n");
        else printf ("NO\n"); 
    }
}