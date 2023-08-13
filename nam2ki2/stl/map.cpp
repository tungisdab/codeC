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
    map<int,int> a;
    a[1]=100;
    a[2]=200;
    a.insert({3,300});
    a.insert({4,400});
    a.insert({5,500});
    a.erase(5);
    // for(pair<int, int> i:a){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
    // for (map<int, int>::iterator i=a.begin(); i!= a.end();i++){
    //     cout<<(*i).first<<" "<<(*i).second<<endl;
    // }
    if (a.count(1)!=0) // tim kiem
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
    if (a.find(1) != a.end())
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
    int n;
    cin>>n;
    map <int, int > b;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        b[x]++;
    }
    for(auto i:b){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}