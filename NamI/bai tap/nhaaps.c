#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
	int n;
	scanf("%d",&n);
	char x[n+100];
	int a[10000],soluong[10000],tong[10000],sum=0,i;
	scanf("%s",&x);
	for (i=0; i<n; i++)
    {
	    a[i+1] = x[i] - 48;
		sum += a[i+1];
	}
	int k = 0;
	for (i=2 ; i<= sum/2; i++)
    {
		if (sum % i == 0)
        {
			k++;
			soluong[k] = i;
			tong[k] = sum / i;
		}
	}
	int ktra = 0;
	for (i=1; i<=k;i++ )
    {
	    int j = 0, check = 1, dem=0;
	    while (j<=n)
        {
		    int s = 0;
		    while (s != tong[i])
            {
			    s += a[j];
			    j++;
			    if (j == n+2) 
			    { 
                    check = 0;
                    break;
                }
		    }
		    if (check) dem++;
        }
        if (dem == soluong[i])
        {
            ktra = 1;
            break;
        }
	}
	if (ktra) printf("YES\n");
	else printf("NO\n");
}
}