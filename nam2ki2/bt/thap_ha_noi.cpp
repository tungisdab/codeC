#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void chuyen(int n, char a, char b){
    cout<<a<<" -> "<<b<<endl;
}
void thap(int n, char a, char b, char c){
    if (n==1) 
        chuyen(1, a, c);
    else{
        thap(n-1, a, c, b);
        chuyen (n, a, c);
        thap( n-1, b, a, c);
    }
}
int main()
{
    int n;
    cin>>n;
    char a='A';
    char b='B';
    char c='C';
    thap(n, a, b, c);
    return 0;
}