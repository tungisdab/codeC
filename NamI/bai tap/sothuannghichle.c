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
        int k=strlen(a),c=0;
        if (k%2!=0)
        {
            for (int i=0;i<k/2;i++)
            {
                if (a[i]!=a[k-1-i])
                {
                    c=1;
                    break;
                }
                if (a[i]=='0'||a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]=='8')
                {
                    c=1;
                    break;
                }
                if (a[k-1-i]=='0'||a[k-1-i]=='2'||a[k-1-i]=='4'||a[k-1-i]=='6'||a[k-1-i]=='8')
                {
                    c=1;
                    break;
                }
            }
            if (a[k/2]=='0'||a[k/2]=='2'||a[k/2]=='4'||a[k/2]=='6'||a[k/2]=='8') c=1;
            if (c==1)
                printf ("NO\n");
            else
                printf ("YES\n");
        }
        else
            printf ("NO\n");
    }
}