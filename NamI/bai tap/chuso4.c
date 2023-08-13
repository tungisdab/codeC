#include<stdio.h>
#include<math.h>
int check(int h)
{
    int g=0,sum=0,k=h,tong=0;
    while(h>0)
    {
        g=h%10;
        h/=10;
        if (g==4) return 0;
        sum=sum*10+g;
        tong+=g;
    }
//    printf ("%d    %d\n",sum,k);
    if (sum!=k) return 0;
    if (tong%10!=0) return 0;
    return 1; 
}
int main()
{
    int t;
    scanf ("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a=pow(10,n-1);
        int b=pow(10,n);
        for (int i=a;i<b;i++)
        {
            if (check(i)) printf ("%d ",i);
        }
        printf ("\n");
    }
}