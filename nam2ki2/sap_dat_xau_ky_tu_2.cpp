#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        int d;
        cin>>d;
        string s;
        cin>>s;
        int n=s.length();
        int a[255]={};
        for (int i=0;i<n;i++)
            a[s[i]]++;
        sort(a,a+255, greater<int>());
        int max=a[0];
        if(d<=(n+1)/max)
            cout<<"1";
        else    
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}