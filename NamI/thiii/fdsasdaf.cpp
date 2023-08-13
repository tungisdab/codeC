#include<stdio.h>
#include<math.h>
int nn(int h)
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
			if (e==max) return 0;
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
			if (e==min) return 0;
			min=e;
		}
	}
	return 1;
}
int check(int h)
{
	if(h<2) return 0;
	for (int v=2;v<=sqrt(h);v++)
	{
		if (h%v==0) return 0;
	}
	return 1;
}
int kiemtra(int g)
{
	int h=0;
	while (g!=0)
	{
		h=h*10+g%10;
		g/=10;
	}
	if (check(h)) return 1;
	else return 0;
}
int main()
{
	int a,b;
	scanf ("%d%d",&a,&b);
	for (int i=a;i<=b;i++)
	{
		if (i>10)
		{
		
			if (check(i)&&kiemtra(i)&&nn(i)) printf ("%d ",i);
		}
	}
}
