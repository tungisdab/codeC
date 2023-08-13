#include<stdio.h>
#include<math.h> 
int tang(int n)
{
    while (n >= 10)
    {
        if (n % 10 < (n / 10) % 10)
            return 0;
        n /= 10;
    }
    return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
//		int dem=0; 
		int dau=1,cuoi=9; 
		for( int i=1;i<n;i++)
		{
			dau*=10;
			cuoi= cuoi*10+9;
		}
		int dem=0; 
		printf("%d %d",dau,cuoi); 
//		for(int i=dau;i<=cuoi;i++)
//		{
//			if(tang(i)) printf("%d ",i); 
//		} 
		printf("\n"); 
	}
}
