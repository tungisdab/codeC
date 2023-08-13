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
        queue <int> a;
        int n;
        cin>>n;
        while (n--){
            int x;
            cin>>x;
            if (x==1){
                cout<<a.size()<<endl;
            }
            if (x==2){
                if (a.size())
                    cout<<"NO"<<endl;
                else 
                    cout<<"YES"<<endl;
            }
            if (x==3){
                int z;
                cin>>z;
                a.push(z);
            }
            if (x==4){
                if (!a.empty())
                    a.pop();
            }
            if (x==5){
                if (!a.empty())
                    cout<<a.front()<<endl;
                else
                    cout<<"-1"<<endl;
            }
            if (x==6){
                if (!a.empty())
                    cout<<a.back()<<endl;
                else
                    cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}