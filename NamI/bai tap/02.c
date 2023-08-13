#include <stdio.h>
int main()
{
    int n,k=0,temp,h=0;
    scanf ("%d",&n);
    int a[n][n],b[n][n],c[n*n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf ("%d",&b[i][j]);
            c[h]=b[i][j];
            h++;
        }
    }
    for (int i=0;i<n*n;i++)
    {
        for (int j=i+1;j<n*n;j++)
        {
            if (c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for (int i=0;i<=(n/2);i++)
    {
        for (int j=i;j<n-i-1;j++)
        {
       		a[i][j]=c[k];
    		k=k+1;
    	}
    	for (int j=i;j<n-i-1;j++)
        {
   		   	a[j][n-i-1]=c[k];
    	    k=k+1;
    	}
    	for (int j=i;j<n-i-1;j++)
        {
    	    a[n-i-1][n-j-1]=c[k];
    		k=k+1;
    	}
    	for (int j=i;j<n-i-1;j++)
        {
   	    	a[n-j-1][i]=c[k];
    	    k=k+1;
        }
    }
    if (n%2!=0) a[(n-1)/2][(n-1)/2]=c[k];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
        printf ("%d\t",a[i][j]);
        }
        printf("\n");
    }
}