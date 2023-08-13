#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        int h=a.length();
        int k=b.length();
        while (h<k)
        {
            a='0'+a;
            h++;
        }
        while(h>k)
        {
            b='0'+b;
            k++;
        }
        char c[h];
        int z=0;
        for (int i=h-1;i>=0;i--)
        {
            if (i==0&&(a[i]-'0'+b[i]-'0'>=10))
                z=1;
            else if (a[i]-'0'+b[i]-'0'>=10)
                a[i-1]++;
            int x=(a[i]-'0'+b[i]-'0')%10;
            c[i]=x+48;
        }
        if (z==1)
            cout<<z;
        for (int i=0;i<h;i++)
            cout<<c[i];
        cout<<endl;
    }    
    return 0;
}