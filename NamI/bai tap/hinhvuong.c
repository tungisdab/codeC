#include <stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int k=n;
    int a[2*n-1][2*n-1];
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<2*n-i-1;j++)
        {
       		a[i][j]=k;
   		   	a[j][2*n-i-2]=k;
    	    a[2*n-i-2][2*n-j-2]=k;
   	    	a[2*n-j-2][i]=k;
   		}
    	k--;
    }
    a[n-1][n-1]=1;
    for (int i=0;i<2*n-1;i++)
    {
        for (int j=0;j<2*n-1;j++) printf ("%d",a[i][j]);
        printf("\n");
    }
}