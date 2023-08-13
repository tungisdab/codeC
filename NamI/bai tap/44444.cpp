#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int m,n,h,k,temp;
	scanf ("%d%d",&m,&n);
	int a[m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
			scanf ("%d",&a[i][j]);
	}
	scanf ("%d%d",&h,&k);
	h--;
	k--;
	for (int i=0;i<m;i++)
	{
		temp=a[i][h];
		a[i][h]=a[i][k];
		a[i][k]=temp;
	}
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
			printf ("%d ",a[i][j]);
		printf ("\n");	
	}
	return 0;
}

