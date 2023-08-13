#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man

int n;
int k;
int h;
int i;
int dd;
int sum;
int a[10000];
vector<int> res;
void out(){
    cout<<"[";
    for (int i=0;i<res.size();i++){
        if(i==res.size()-1)
            cout<<res[i]<<"]";
        else    
            cout<<res[i];
    }
}
void Try(int i){
    for (int j=i;j<=h;j++){
        if(sum+a[j]<k){
            sum+=a[j];
            res.push_back(a[j]);
            j--;
        }
        else if(sum+a[j]==k){
            sum+=a[j];
            res.push_back(a[j]);
            out();
            break;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        memset(a, 0, sizeof(a));
        set<int> b;
        cin>>n>>k;
        for (int i=0;i<n;i++){
            int z;
            cin>>z;
            if(z<=k)
                b.insert(z);
        }
        sum=0;
        dd=0;
        h=0;
        i=0;
        for(auto i:b)
            a[++h]=i;
        // for (int i=1;i<=h;i++)
        //     cout<<a[i]<<" ";
        if(!h){
            cout<<"-1"<<endl;
            continue;
        }
        res.push_back(a[1]);
        sum=a[1];
        Try(1);
        cout<<endl;
    }
    return 0;
}