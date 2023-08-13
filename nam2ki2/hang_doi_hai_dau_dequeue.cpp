#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n;
    cin>>n;
    deque<int> a;
    while (n--){
        string b; 
        cin>>b; 
        if(b=="PUSHFRONT"){
            int x;
            cin>>x;
            a.push_front(x);
        }
        else if(b=="PUSHBACK"){
            int x;
            cin>>x;
            a.push_back(x);
        }
        else if(b=="POPFRONT"){
            if(!a.empty())
                a.pop_front();
        }
        else if(b=="POPBACK"){
            if(!a.empty())
                a.pop_back();
        }
        else if(b=="PRINTFRONT"){
            if(!a.empty())
                cout<<a.front()<<endl;
            else
                cout<<"NONE"<<endl;
        }
        else if(b=="PRINTBACK"){
            if(!a.empty())
                cout<<a.back()<<endl;
            else
                cout<<"NONE"<<endl;
        }
    }    
    return 0;
}