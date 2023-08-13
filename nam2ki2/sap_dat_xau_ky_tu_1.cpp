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
        string s;
        cin>>s;
        int n=s.length();
        map<char, int> a;
        for (int i=0;i<n;i++){
            a[s[i]]++;
        }
        int max=0;
        for (auto i:a){
            if(i.second>max)
                max=i.second;
        }
        if(n-max>=max-1)
            cout<<"1";
        else    
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}