#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int s;
vector<int> a;
void out(){
    cout<<"(";
    for(int i=0;i<a.size();i++){
        if(i==a.size()-1)
            cout<<a[i]<<") ";
        else
            cout<<a[i]<<" ";
    }       
}
void Try(int i){
    for(int j=i;j>=1;j--){
        if(s+j==n){
            s+=j;
            a.push_back(j);
            out();
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
        cout<<"("<<n<<") ";
        if(n>1){
            s=n-1;
            a.push_back(n-1);
            Try(n-1);
        }
        cout<<endl;
    }
}