#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
void hieu(int h, int k, string a, string b)
{
    int s[h],y=0;
    for (int i=h-1;i>=0;i--)
    {
        int c;
        if (a[i]<b[i])
        {
            c=a[i]-'0'+10-b[i]+'0';
            b[i-1]++;
        }
        else 
            c=a[i]-'0'-b[i]+'0';
        s[i]=c;
    }
    for (int i=0;i<h;i++)
        cout<<s[i];
    cout<<endl;
}
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
        while (h>k)
        {
            b='0'+b;
            k++;
        }
        if (a>=b)
            hieu(h,k,a,b);
        else
            hieu(k,h,b,a);
    }    
    return 0;
}