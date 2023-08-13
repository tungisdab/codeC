#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        scanf ("\n");
        string x,y;
        cin>>x>>y;
        int n=y.length();
        string a;
        for (int i=0;i<n;i++)
        {
            if(y[i]>='A'&&y[i]<='Z')
            {
                if (y[i]=='A'||y[i]=='K')
                    a.push_back('0');
                else if (y[i]=='B'||y[i]=='L')
                    a.push_back('1');
                else if (y[i]=='C'||y[i]=='M')
                    a.push_back('2');
                else if (y[i]=='D'||y[i]=='N')
                    a.push_back('3');
                else if (y[i]=='E'||y[i]=='O')
                    a.push_back('4');
                else if (y[i]=='F'||y[i]=='P')
                    a.push_back('5');
                else if (y[i]=='G'||y[i]=='Q')
                    a.push_back('6');
                else if (y[i]=='H'||y[i]=='R')
                    a.push_back('7');
                else if (y[i]=='I'||y[i]=='S')
                    a.push_back('8');
                else if (y[i]=='J'||y[i]=='T')
                    a.push_back('9');
            } 
        }
        if (x==a)
            cout<<"YES"<<endl;
        else   
            cout<<"NO"<<endl;
    }
    return 0;
}