#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,temp;
	scanf ("%d",&n);
	int a[n],b[n],c[n],k=0;
	for (int i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
		b[i]=a[i];
	}
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (int i=0;i<n;i++)
	{
		if ((a[i]!=a[i-1])&&(a[i]!=a[i+1]))
		{
			c[k]=a[i];
			k++;
		}
	}
	printf ("%d\n",k);
	for (int i=0;i<k;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (b[j]==c[i]) printf ("%d ",c[i]);
		}
	}
}

