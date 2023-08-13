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
        map<int, int> b;
        int n;
        cin>>n;
        int a[n];
        int h=-1;
        for (int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        for (int i=0;i<n;i++){
            if (h==-1 && b[a[i]]>1)
                h=a[i];
        }
        if (h>-1)
            cout<<h<<endl;
        else   
            cout<<"NO"<<endl;
    }
    return 0;
}