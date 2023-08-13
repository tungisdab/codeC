#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int check(char a)
{
    if ((a>='a'&&a<='z')|| (a>='A'&&a<='Z')|| (a>='0'&&a<='9')||a=='.'||a=='_'||a=='@')
        return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        int n=s.length();
        int b=0;
        int b1=0;
        int b2=0;
        int b3=0;
        int b4=0;
        int k=1;
        int h=0;
        for (int i=0;i<n;i++)
        {
            if(s[i]=='@')
            {
                k=0;
                b++;
            }
            if (k==1)
                b1++;
            else
            {
                if (s[i]!='@')
                    b2++;
                if (s[i]=='.')
                    b4++;
                
            }
            if (s[i]==' ')
                b3++;
            if (check(s[i])==0)
            {
                cout<<"NO"<<endl;
                h=1;
                break;
            }
            
        }
        if (h==0)
        {
            if (b1>64|| b1==0|| b2==0|| b2>254||b!=1||b4==0||b3>0||s[n-1]=='.')
                cout<<"NO"<<endl;
            else cout<<"YES"<<endl;;
        }
    }
    return 0;
}