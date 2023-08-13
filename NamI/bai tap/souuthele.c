#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf ("%d ",&t);
    while(t--)
    {
        char a[20];
        gets(a);
        int k=strlen(a),g=0,h=0;
        if (a[k-1]=='0'||a[k-1]=='2'||a[k-1]=='4'||a[k-1]=='6'||a[k-1]=='8')
        {
            for (int i=0;i<k;i++)
            {
                if (a[i]=='0'||a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]=='8')
                    g++;
                else h++;
            }
            if (g>h) printf ("YES\n");
            else printf ("NO\n");
        }
        else printf ("NO\n");
    }
}