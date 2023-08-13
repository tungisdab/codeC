#include<stdio.h>
#include<math.h>
#define max 1300
int gtln(int n)
{
	scanf("%d",&n);
	int a[max];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int ln=a[0];
	int x=0;
	for(int i=1;i<n;i++)
	{
	    if(ln<a[i])
		{
			ln=a[i];
			x=i;	
    	}
	}
	int nn=a[0];
	int y=0;
	for(int i=1;i<n;i++)
	{
	    if(nn>a[i])
		{
			nn=a[i];
			y=i;	
    	}
	}
    int min=y;
    if(x<y)
	{
    	min=x;
    	x=y;	
	}
	int dem =0;
    if(min+1<=n-min-1)
    dem=min+1;
    else dem=n-min-1;
    int z=n-dem;
    x=x-dem;  
    if(z-x<=x+1)
    dem=dem+z-x;
    else dem=dem+x+1;
    printf("%d",dem);
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		int a[max];
		gtln(n);
		printf("\n");
	}
}
