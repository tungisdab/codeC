#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int Fib(int n){
    int fib1=1;
    int fib0=0;
    int fibn,i;
    if (n<=1)
        return n;
    else{
        for (int i=2;i<=n;i++){
            fibn=fib1+fib0;
            fib0=fib1;
            fib1=fibn;
        }
        return fibn;
    }
}
int Fib1(int i){
    if (i==0)
        return 0;
    if (i==1)
        return 1;
    return Fib1(i-1)+Fib1(i-2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    cout<<Fib(n)<<endl;
    cout<<Fib1(n);   
    return 0;
}