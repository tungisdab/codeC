#include <stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int a[n],b[n],h=0,k,m;
    for (int i=0;i<n;i++) scanf ("%d",&a[i]);
    for (int i=0;i<n;i++)
    {
        for  (int j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                b[h]=a[i];
                h++;
            }
        }
    }
    for (int i=0;i<h;i++)
    {
		if (i==0) printf ("%d ",b[i]);
		else
		{
			k=i-1,m=0;
        	while (k>=0)
        	{
        	    if (b[k]==b[i]) m++;
        	    k--;
        	}
        	if (m==0) printf("%d ",b[i]);
		}
    }
}