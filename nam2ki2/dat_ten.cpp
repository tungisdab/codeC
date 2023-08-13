#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n,k;
string a[10005];
int c[10005];
int h=1;
void out(){
    for (int i=1;i<=k;i++)
        cout<<a[c[i]]<<" ";
    cout<<endl;
}
void Try(int i){
    for (int j=c[i-1]+1;j<=h-(k-i);j++){
        c[i]=j;
        if (i==k)
            out();
        else    
            Try(i+1);   
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    set <string> b;
    for (int i=0;i<n;i++){
        string z;
        cin>>z;
        b.insert(z);
    }
    for (auto i:b){
        a[h++]=i;
    }
    h--;
    Try(1);
    return 0;
}