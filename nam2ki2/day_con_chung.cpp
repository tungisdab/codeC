#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int x;
        map<int, int> mp;   
        map<int, int> mp1;   
        map<int, int> mp2;   
        for (int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        for (int i=0;i<m;i++){
            cin>>x;
            if(mp[x]){
                mp[x]--;
                mp1[x]++;
            }
        }
        for (int i=0;i<k;i++){
            cin>>x;
            if(mp1[x]){
                mp1[x]--;
                mp2[x]++;
            }
        }
        if(mp2.size()==0)
            cout<<"NO"<<endl;
        else{
            for(auto i:mp2){
                while(i.second--)
                    cout<<i.first<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}