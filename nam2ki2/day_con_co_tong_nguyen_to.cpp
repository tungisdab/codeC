#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int a[10000];
int b[10000]={};
set<vector<int>> c;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
void out(){
    int sum=0;
    for (int i=1;i<=n;i++)
        sum+=(a[i]*b[i]);
    if(isPrime(sum)){
        vector<int> z;
        for (int i=1;i<=n;i++){
            if(b[i])
                z.push_back(a[i]);
        }
        c.insert(z);
    }
}
void Try(int i){
    for (int j=0;j<=1;j++){
        b[i]=j;
        if(i==n)
            out();
        else    
            Try(i+1);
    }
}
bool cmp(int a, int b){
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        c.clear();
        cin>>n;
        for (int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1, a+n+1, cmp);
        Try(1);
        for(auto i:c){
            for(auto j:i)
                cout<<j<<" ";
            cout<<endl;
        }
    }   
    return 0;
}