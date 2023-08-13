#include<stdio.h>
int fb(int n)
{
    if (n==1||n==2) return 1;
    return fb(n-1)+fb(n-2);
}
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int n;
        scanf ("%d",&n);
        printf("%lld\n",fb(n));
    }
}