#include<stdio.h>
#include<math.h>
int main()
{
    int x,c,n;
    scanf ("%d%d%d",&x,&c,&n);
    long long sum=1,tong=1;
    for (int i=1;i<=n;i++)
    {
        tong*=i;
        sum+=((pow(x,i))/tong);
    }
    printf ("%lld",sum);
}