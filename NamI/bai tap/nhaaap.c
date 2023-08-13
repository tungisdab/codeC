#include<stdio.h>
#include<string.h>
int main()
{
    int a[10];
    for (int i=0;i<10;i++)
    {
        scanf ("%c ",a[i]);
        if ((a[i]==' ')||(a[i]=='\n')) i--;
    }
    for (int i=0;i<10;i++) printf ("%c",a[i]);
}