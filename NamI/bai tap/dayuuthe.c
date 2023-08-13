#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf ("%d ",&t);
    while (t--)
    {
        int dem=0;
        int a[5000];
        char b[5000];
        for (int i=0;b[i-1]!='\n';i++)
        {
            dem++;
            scanf("%d%c",&a[i],&b[i]);
        }
        int k=strlen(b),c=0,l=0;
        for (int i=0;i<dem;i++)
        {
            if (a[i]%2==0) c++;
            else l++;
        }
        if (((dem%2==0)&&(c>l))||((dem%2!=0)&&(l>c))) printf ("YES\n");
        else printf ("NO\n");
    }
}