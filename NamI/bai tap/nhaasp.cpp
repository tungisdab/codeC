#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int n,max=0,min,h=0,k;
        scanf ("%d",&n);
        int s[n],i;
        for (i=0;i<n;i++)
            scanf ("%d",&s[i]);
        min=s[0];
        for (i=0;i<n;i++)
        {
            if (s[i]>max)
            {
                max=s[i];
                h=i;
            }
            if (s[i]<min)
            {
                min=s[i];
                k=i;
            }
        }
        printf ("%d %d\n",h,k);
//        if (h>k)
//        {
//            int temp=h;
//            h=k;
//            k=temp;
//        }
//        int p=h+1;
//        int q=k-h;
//        int r=n-k;
//        int a=p+q;
//        int b=p+r;
//        int c=q+r;
//        int mm=a;
//        if (mm>b) mm=b;
//        if (mm>c) mm=c;
//        printf ("%d %d %d\n",h,k,mm);
    }
	return 0;
}
