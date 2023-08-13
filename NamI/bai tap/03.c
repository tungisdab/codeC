#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    long long sum=0;
    scanf("%d",&n);
    while(n--)
	{
        scanf("%d",&a);
        while(a%2==0)
		{
            sum+=2;
            a/=2;
        }
        for(int j=3;j<=sqrt(a);j+=2)
		{
            while(a%j==0)
			{
                sum+=j;
                a/=j;
            }
        }
        if(a>1) sum+=a;
    }
    printf("%lld",sum);
}