#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while(t--)
    {
        int n,a[10]={1,2,5,10,20,50,100,200,500,1000},h=0,k=9;
        scanf ("%d",&n);
        while (n>0)
        {
            if (k>=0)
            {
                if (n<a[k]) k--;
                else
                {
                	h++;
                	n=n-a[k];
				}
            }
        }
        printf ("%d\n",h);
    }
}