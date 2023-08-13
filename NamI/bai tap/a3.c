#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while(t--)
    {
        int n,i,dem=0,a=0,b=0;
        scanf ("%d",&n);
        long long s[n];
        for (i=0;i<n;i++)
        {
            scanf ("%lld",&s[i]);
            if (s[i]!=0)
            {
                if (s[i]%3==0) dem++;
                else
                {
                    if (s[i]%3==1) a++;
                    else b++;
                }
            }
        }
        if (a==b) printf ("%d\n",dem+a);
        else
        {
            if (a<b)
            {
                printf ("%d\n",a+dem+(b-a)/3);
            }
            else printf  ("%d\n",b+dem+(a-b)/3);
        }
    }
}