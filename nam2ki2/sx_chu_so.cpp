#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int z;
        cin>>z;
        string a;
        cin.ignore();
        getline(cin,a);
        int n=a.length();
        map<int, int> b;
        for (int i=0;i<n;i++){
            if (a[i] !=' '){
                int x=a[i]-'0';
                b[x]++;
            }
        }   
        for(auto i:b){
            cout<<i.first<<" ";
        }
        cout<<endl;
    }    
    return 0;
}