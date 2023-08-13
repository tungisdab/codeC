#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,temp;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
		scanf ("%d",&a[i]);
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
	printf ("%d ",a[0]);
	for (int i=0;i<n;i++)
	{
		if (a[i]>a[0])
		{
			printf ("%d",a[i]);
			break;
		}
	}
}

