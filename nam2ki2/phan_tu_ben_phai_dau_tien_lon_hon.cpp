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
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        stack<int> s;
        s.push(-1);
        for (int i=n-2;i>=0;i--){
            int dd=0;
            for (int j=i;j<n;j++){
                if(a[j]>a[i]){
                    s.push(a[j]);
                    dd=1;
                    break;
                }
            }
            if(!dd)
                s.push(-1);
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    } 
    return 0;
}