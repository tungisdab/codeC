#include<stdio.h>
struct nguoi
{
    char hoten[100];
    int tuoi;
    char nn[100];
};
int main()
{
    int i;
    struct nguoi n1,n2;         //fflush(stdin);
    gets(n1.hoten);             //fflush(stdin);
    scanf ("%d ",&n1.tuoi);     //fflush(stdin);
    gets(n1.nn);                //fflush(stdin);
    gets(n2.hoten);             //fflush(stdin);
    scanf ("%d ",&n2.tuoi);     //fflush(stdin);
    gets(n2.nn);                //fflush(stdin);
    printf ("%-20s %-20d %-20s\n",n1.hoten,n1.tuoi,n1.nn);
    printf ("%-20s %-20d %-20s\n",n2.hoten,n2.tuoi,n2.nn);
}
