#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf ("%d ",&t);
    while (t--)
    {
        int dem=0;
        char a[1000];
        gets(a);
        char s[2]=" ";
        char *token;
        token=strtok(a,s);
        while (token != NULL)
        {
            dem++;
            token=strtok(NULL,s);
        }
        printf ("%d\n",dem);
    }
}