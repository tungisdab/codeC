#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    gets(a);
    int k=strlen(a);
    for (int i=0;i<k;i++)
    {
        int dem=1,c=0;
        if (a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='7')
        {
            int d=i-1;
            while(d>=0)
            {
                if (a[i]==a[d])
                {
                    c=1;
                    break;
                }
                d--;
            }
            if (c==0)
            {
                for (int j=i+1;j<k;j++)
                {
                    if (a[i]==a[j]) dem++;
                }
                printf("%c %d\n",a[i],dem);
            } 
        }
    }
}