#include<stdio.h>
int ucln(int i,int j)
{
    int h=i,k=j;
    if (k==0) return h;
    return ucln(k,h%k);
}
int main()
{
    int a,b;
    scanf ("%d%d",&a,&b);
    for (int i=a;i<=b;i++)
    {
        for (int j=i+1;j<=b;j++)
        {
            if (ucln(i,j)==1) printf ("(%d,%d)\n",i,j);
        }
    }
}