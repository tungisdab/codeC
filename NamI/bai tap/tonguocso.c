#include<stdio.h>
#include<math.h>
#include<string.h>
int tinh(int h)
{
	long tong=0;
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
    long sum=0;
	int n,h;
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
	printf ("%ld",sum);
}