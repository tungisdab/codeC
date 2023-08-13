#include<stdio.h>
#include<math.h>
int main()
{
    int s[8],a,b,c,d;
    for (int i=0;i<8;i++)
        scanf ("%d",&s[i]);
    if (s[0]<s[4]) a=s[0];
    else a=s[4];
    if (s[1]<s[5]) b=s[1];
    else b=s[5];
    if (s[2]>s[6]) c=s[2];
    else c=s[6];
    if (s[3]>s[7]) d=s[3];
    else d=s[7];
    int e=abs(a-c);
    int f=abs(b-d);
    if (e>f) printf ("%d",e*e);
    else printf ("%d",f*f);
}