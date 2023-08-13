#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    char a[1000][1000],c[10000];
    string b;
    getline(cin,b);
    int n=b.length();
    for (int i=0;i<n;i++)
        c[i]=b[i];
    char *p=strtok(c,"  ");
    int i=0;
    while (p!=NULL)
    {
        if (p[0]<='Z'&&p[0]>='A')
            p[0]+=32;
        strcpy(a[i],p);
        i++;
        p=strtok(NULL,"     ");
    }
    int j=i;
    int h=strlen(a[j-1]);
    for (int i=0;i<h;i++)
        if (a[j-1][i]<='Z'&&a[j-1][i]>='A')
            a[j-1][i]+=32;
    cout<<a[j-1];
    for (int i=0;i<j-1;i++)
        cout<<a[i][0];
    cout <<"@ptit.edu.vn";
    return 0;
}