#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    cin.getline(a,1000);
    char b[1000];
    cin.getline(b,1000);
    char *p;
    p=strtok(a," ");
    while(p!=NULL)
    {
        if (strcmp(p,b)!=0)
        {
            // puts(p);
            // cout<<" ";
            cout<<p<<" ";
        }
        p=strtok(NULL," ");
    }
    return 0;
}