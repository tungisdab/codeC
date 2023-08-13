#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        vector<string>A;
        getline(cin, s);
        stringstream ss(s);
        string t;
        while (ss>>t)
            A.push_back(t);
        for (int i=A.size()-1;i>=0;i--)
            cout<<A[i]<<" ";
        cout<<endl;
    }    
    return 0;
}