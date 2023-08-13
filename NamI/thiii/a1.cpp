#include<stdio.h>
#include<math.h>
int kiemtra(int h)
{
	int max=0,min=0,e;
	int d=h%10,c=(h/10)%10;
	h/=10;
	if (c==d) return 0;
	if (c<d)
	{
		max=d;
		while (h>0)
		{
			e=h%10;
			h/=10;
			if (e>=max) return 0;
			max=e;
		}
	}
	if (c>d)
	{
		min=d;
		while (h>0)
		{
			e=h%10;
			h/=10;
			if (e<=min) return 0;
			min=e;
		}
	}
	return 1;
}
int check(int h)
{
	if(h<2) return 0;
	for (int v=2;v<=sqrt(h);v++)
	{.
		if (h%v==0) return 0;
	}
	return 1;
}
int main()
{
	int n,m;
	scanf ("%d%d",&n,&m);
	for (int i=n;i<=m;i++)
	{
		if ((check(i)==1)&&(kiemtra(i)==1)) printf ("%d ",i);
	}
}
