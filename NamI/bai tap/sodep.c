#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d ",&t);
    while (t--)
    {
        char a[20];
        gets(a);
        int k=strlen(a);
        int m=a[0]-48;
        int n=a[k-1]-48;
        int c=0;
        if ((m/n==2)||(n/m==2))
        {
            for (int i=1;i<k/2;i++)
            {
                if (a[i]!=a[k-1-i])
                {
                    c=1;
                    break;
                }
            }
            if (c==0) printf ("YES\n");
            else printf ("NO\n");
        }
        else printf ("NO\n");
    }
}