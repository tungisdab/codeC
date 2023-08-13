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
        queue<int> a;
        int n;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            if(x==1){
                cout<<a.size()<<endl;
            }
            else if(x==2){
                if(a.empty())
                    cout<<"YES"<<endl;
                else    
                    cout<<"NO"<<endl;
            }
            else if(x==3){
                int b;
                cin>>b; 
                a.push(b);
            }
            else if(x==4){
                if(!a.empty())
                    a.pop();
            }
            else if(x==5){
                if(!a.empty())
                    cout<<a.front()<<endl;
                else 
                    cout<<"-1"<<endl;
            }
            else if(x==6){
                if(!a.empty())
                    cout<<a.back()<<endl;
                else
                    cout<<"-1"<<endl;
            }
        }   
    }   
    return 0;
}