#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a;
        cin>>a;
        int k=a.length();
        int i=k-1,h=0;
        while (i>0)
        {
            if (i==1)
            {
                if (a[i]>='5')
                {              
                    a[0]++;
                    a[i]='0';
                    if (a[0]>'9')
                    {
                        a[0]='0';
                        h=1;
                    }
                }
                else
                {
                    a[i]='0';
                }
            }
            else if (a[i]>='5')
            {
                a[i-1]++;
                a[i]='0';
            }
            else
            {
                a[i]='0';
            }
            i--;
        }
        if (h==1) cout<<'1';
        for (int i=0;i<k;i++)
            cout<<a[i];
        cout<<endl;
    }
}