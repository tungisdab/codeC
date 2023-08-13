#include<stdio.h>
#include<string.h>
#define space " ""/"",""."
int main()
{
    int t;
    scanf ("%d ",&t);
    while (t--)
    {
        char a[5000];
        gets(a);
        char *token;
        int k=strlen(a),c=0;
        for (int i=0;i<k;i++)
        {
            if (a[i]>64&&a[i]<91) a[i]=a[i]+32;
        }
        token=strtok(a,space);
        while (token!=NULL)
        {
            *token=*token-32;
            if (c==0)
            {
                printf ("%s",token);
                c=1;
            }
            else printf (" %s",token);
            token=strtok(NULL,space);
        }
        printf ("\n");
    }
}