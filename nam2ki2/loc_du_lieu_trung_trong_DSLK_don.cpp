#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n;
    cin>>n;
    int a[n];
    map<int, int> b;
    for (int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    for (int i=0;i<n;i++){
        if (b[a[i]]>0)
            cout<<a[i]<<" ";
        b[a[i]]=0;
    }
    return 0;
}