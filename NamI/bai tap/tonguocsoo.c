#include<stdio.h>
#include<math.h>
#include<string.h>
int tinh(int h)
{
	int tong=0;
	for (int j=2;j<=h;j++)
	{
		while (h%j==0)
		{
			tong+=j;
			h/=j;
		}
	}
	return tong;
}
int main()
{
	int n,sum=0,h;
	scanf ("%d",&n);
	int a[n];
    for (int i=0;i<n;i++)
		scanf ("%d",&a[i]);
	for (int i=0;i<n;i++)
	{
		if (a[i]>1)
		{
			h=a[i];
			sum+=tinh(h);
		}
	}
	printf ("%d",sum);
}