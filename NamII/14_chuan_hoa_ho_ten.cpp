#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    string s,s1;
    getline (cin,s);
    stringstream ss(s);
    string t;
    int h=s.length(),k=0,count=0;
    char b[h];
    for (int i=0;i<h;i++)
        b[i]=s[i];
    char *p;
    p=strtok(b,"    ,");
    while (p!=NULL)
    {
        k++;
        p=strtok(NULL,"     ,");
    }
    // for (int i=0;i<h;i++)
    //     s1[i]=s[i];
    // stringstream sss(s1);
    // string token;
    // while (sss>>token)
    //     k++;
    // cout<<k;
    while (ss>>t)
    {
        count++;
        if (count<k)
        {
            int n=t.length();
            if (t[0]>'Z')
                t[0]-=32;
            cout<<t[0];
            for (int i=1;i<n;i++)
            {
                if (t[i]<'a')
                    t[i]+=32;
                cout<<t[i];
            }
            if (count+1==k)
                cout<<","; 
            cout<<" ";
        
        }   
       else 
        {
            int n=t.length();
            for (int i=0;i<n;i++)
            {
                if (t[i]>'Z')
                    t[i]-=32;
                cout<<t[i];
            }
        }
    }
    return 0;
}