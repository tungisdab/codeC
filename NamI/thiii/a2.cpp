#include<stdio.h>
int main()
{
	int m,n,g,h;
	scanf ("%d%d",&m,&n);
	int a[m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++) scanf ("%d",&a[i][j]);
	}
	scanf ("%d%d",&g,&h);
	for (int i=0;i<m;i++)
	{
		if (i==(g-1))
		{
			for (int j=0;j<n;j++) printf ("%d ",a[h-1][j]);
			printf ("\n");
		}
		else if (i==(h-1))
		{
			for (int j=0;j<n;j++) printf ("%d ",a[g-1][j]);
			printf ("\n");
		}
		else 
		{
			for (int j=0;j<n;j++) printf ("%d ",a[i][j]);
			printf ("\n");
		}
	}
}
