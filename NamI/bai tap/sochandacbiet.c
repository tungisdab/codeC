#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf ("%d ",&t);
    while (t--)
    {
        char a[100];
        gets(a);
        int k=strlen(a),c=0;
        for (int i=0;i<k;i++)
        {
            if ((a[i]=='1')||(a[i]=='3')||(a[i]=='5')||(a[i]=='7')||(a[i]=='9'))
            {               
                c=1;
                break;
            }
        }
        if (c==0) printf ("YES\n");
        else printf ("NO\n");
    }
}