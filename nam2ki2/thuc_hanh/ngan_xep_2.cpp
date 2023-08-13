#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
stack<int> a;
void show(){
    if (a.size()==0)
        cout<<"NONE"<<endl;
    else 
        cout<<a.top()<<endl;
}
int main()
{
    int n;
    cin>>n;
    string a1;
    for (int i=0;i<n;i++){
        cin>>a1;
        if (a1=="PUSH"){
            int x;
            cin>>x;
            a.push(x);
        }
        if (a1=="POP"){
            if (a.size()!=0)
            a.pop();
        }
        if (a1=="PRINT"){
            show();
        }
    }
    return 0;
}