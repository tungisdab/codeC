#include <stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    if (n==0) printf ("0 1");
    else
    {
        int h=0,k=0;
       while (n>0)
        {
          int m;
          m=n%10;
            n=n/10;
            if (m%2!=0) h++;
            else k++;
        }
    printf ("%d %d",h,k);
    }
}