#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
// typedef double db;
// //by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int dd[2005][2005]={};
        string s1, s2;
        cin>>s1>>s2;
        int n1=s1.length();
        int n2=s2.length();
        int k=0;
        for (int i=1;i<=n1;i++){
            for (int j=1;j<=n2;j++){
                if (s1[i-1]==s2[j-1])
                    dd[i][j]=dd[i-1][j-1]+1;
                else
                    dd[i][j]=max(dd[i-1][j], dd[i][j-1]);
                k=max(k, dd[i][j]);
            }
        }   
        cout<<k<<endl;
    }
    return 0;
}