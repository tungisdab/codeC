#include<stdio.h>
#include<math.h>
#include<string.h>
int check(long h)
{
	if (h<2) return 0;
	for (long j=2;j<=sqrt(h);j++)
	{
		if (h%j==0) return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		long n,k=0,z=0,h;
		scanf("%ld",&n);
		h=n;
		if (check(h)==1)
		{
			printf ("%ld\n",h);
		}
		else
		{
			for (long i=2;i<=sqrt(n);i++)
			{
				while (n%i==0)
				{
					h=n/i;
//					printf ("%ld\n",h);
					if(check(h)==1)
					{
						if (h>k) k=h;
					}
					else
					{
						h=i;
						if ((check(h)==1)&&(h>k)) k=h;
					}
					n/=i;
				}	
			}
			printf ("%ld\n",k);
		}
	}
}
