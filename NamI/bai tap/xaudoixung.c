#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf ("%d ",&t);
    while (t--)
    {
        char a[1000],dem=0;
        gets(a);
        int k=strlen(a);
        if (k==1) printf ("YES\n");
        else
        {
            for (int i=0;i<(k/2);i++)
            {
                if (a[i]!=a[k-1-i]) dem++;
            }   
            if (dem==0&&(k%2==1)) printf ("YES\n");
            else if (dem==1) printf ("YES\n");
            else printf ("NO\n");
        }
    }
}