#include <stdio.h>
int main()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n,m,k=0;
	    scanf ("%d %d ",&n,&m);
	    int a[n][n],b[];
	    b[0]=0;b[1]=1;
	    for (int i=2;i<93;i++) b[i]=b[i-1]+b[i-2];
	    for (int i=0;i<=(n/2);i++)
	    {
	        for (int j=i;j<n-i-1;j++)
	        {
	       		a[i][j]=b[k];
	    		k=k+1;
	    	}
	    	for (int j=i;j<n-i-1;j++)
	        {
	   		   	a[j][n-i-1]=b[k];
	    	    k=k+1;
	    	}
	    	for (int j=i;j<n-i-1;j++)
	        {
	    	    a[n-i-1][n-j-1]=b[k];
	    		k=k+1;
	    	}
	    	for (int j=i;j<n-i-1;j++)
	        {
	   	    	a[n-j-1][i]=b[k];
	    	    k=k+1;
	        }
	    }
	    if (n%2!=0) a[(n-1)/2][(n-1)/2]=b[k];
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	        printf ("%d ",a[i][j]);
	        }
	        printf("\n");
	    }
	}
}
