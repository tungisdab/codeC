#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define space " "
int main()
{
    int t;
    scanf ("%d ",&t);
    while(t--)
    {
        char s[500],*token;
        gets(s);
        strlwr(s);
        token =strtok(s,space);
        while (token!=NULL)
        {
            *token=toupper(*token);
            printf ("%s ",token);
            token=strtok(NULL,space);
        }
        printf ("\n");
    }
}