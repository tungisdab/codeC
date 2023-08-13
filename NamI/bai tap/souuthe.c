#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf ("%d ",&t);
    while(t--)
    {
        char a[1500];
        gets(a);
        int k=strlen(a),c=0,l=0,z=0;
        for (int i=0;i<k;i++)
        {
            if (a[i]=='0'||a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]=='8') c++;
            else if (a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9') l++;
            else z=1;
        }
        if (z==1) printf ("INVALID\n");
        else
        {
            if (k%2==0)
            {
                if (c>l) printf ("YES\n");
                else printf ("NO\n");
            }
            else
            {
                if (c<l) printf ("YES\n");
                else printf ("NO\n");
            }
        }
    }
}