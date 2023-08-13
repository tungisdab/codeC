#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int h)
{
	if (h==0||h==1) return 0;
	if (h==2) return 1;
	for (int l=2;l<=sqrt(h);l++)
	{
		if (h%l==0) return 0;
	}
	return 1;
}
int kiemtra(int g)
{
	int sum=0,k;
	while (g>0)
	{
		k=g%10;
		if (check(k)!=1) return 0;
		sum+=k;
		g/=10;
	}
//	if (check(sum)!=1) return 0;
	return 1;
}
int main()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int a,b,dem=0;
		scanf ("%d%d",&a,&b);
		for (int i=a;i<=b;i++)
		{
			if ((kiemtra(i)==1)&&(check(i)==1)) dem++;
		}
		printf ("%d\n",dem);
	}
}