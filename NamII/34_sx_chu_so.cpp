#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,dem=0;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        int k=s.length();
        int a[k];
        for (int i=0;i<k;i++)
        {
            if (s[i]!=' ')
            {
                a[dem]=s[i]-48;
                dem++;
            }
        }
        sort(a,a+dem);
        for(int i=0;i<dem;i++)
        {
            if (a[i]!=a[i-1])
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}