#include<stdio.h>
#include<string.h>
int main()
{
    char s[5000];
    gets(s);
    int k=strlen(s),m=0,n=0,p=0;
    for (int i=0;i<k;i++)
    {
        if(((s[i]>64)&&(s[i]<91))||((s[i]>96)&&(s[i]<123))) m++;
        else if ((s[i]>47)&&(s[i]<58)) n++;
        else p++;
    }
    printf ("%d %d %d",m,n,p);
}