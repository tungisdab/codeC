#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int a[1000];
vector<string> s;

void Try(int i, string s1, int sum){
    if(i>=n) 
        return;
    for (int j=0;j<=1;j++){
        if(j){
            int ans=sum+a[i];
            if(ans%2)
                s.push_back(s1+to_string(a[i]));
            Try(i+1,s1+to_string(a[i])+" ", ans);
        }
        else
            Try(i+1, s1, sum);
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        s.clear();
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n, greater<int>());
        Try(0,"",0);
        for(auto i:s)
            cout<<i<<endl;
    }   
    return 0;
}