#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int giaithua(long long n){
    if (n==0) 
        return 1;
    else
        return n*giaithua(n-1);
}
int main()
{
    long long n;
    cin>>n;
    cout<<giaithua(n);
    return 0;
}