#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    queue<int> a;
    int n;
    cin>>n;
    while(n--){
        string b;
        cin>>b;
        if(b=="PUSH"){
            int x;
            cin>>x;
            a.push(x);
        }
        else if(b=="POP"){
            if(!a.empty())
                a.pop();
        }
        else if(b=="PRINTFRONT"){
            if(!a.empty())
                cout<<a.front()<<endl;
            else
                cout<<"NONE"<<endl;
        }
    }   
    return 0;
}