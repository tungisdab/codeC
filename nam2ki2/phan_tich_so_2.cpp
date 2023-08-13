#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int s;
int dem=1;
vector<int> a;
vector<vector <int> > b;
void out(){
    for (int j=0;j<b.size();j++){
        cout<<"(";
        for(int i=0;i<b[j].size();i++){
            if(i==b[j].size()-1)
                cout<<b[j][i]<<") ";
            else
                cout<<b[j][i]<<" ";
        }       
    }
}
void Try(int i){
        for(int j=i;j>=1;j--){
            if(s+j==n){
                s+=j;
                a.push_back(j);
                b.push_back(a);
                dem++;
                break;
            }
            else if(s+j<n){
                s+=j;
                a.push_back(j); 
                j++;  
            }         
        }
        while(a.back()==1 && !a.empty()){
            s--;
            a.pop_back();
        }
        if(a.empty())
            return;
        int x=a.back();
        a.pop_back();
        a.push_back(x-1);
        s--;
        Try(x-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        s=0;
        dem=1;
        a.clear();
        b.clear();
        a.push_back(n);
        b.push_back(a);
        a.clear();
        if(n>1){
            s=n-1;
            a.push_back(n-1);
            Try(n-1);
        }
        cout<<dem<<endl;
        out();
        cout<<endl;
    }
}
