#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void chuyen(int n, char a, char b){
    cout<<a<<" -> "<<b;
    cout<<endl;
}
void thapHaNoi(int n, char a, char b, char c){
    if (n==1)
        chuyen(1, a, c);
    else{
        thapHaNoi(n-1, a, c, b);
        chuyen(n, a, c);
        thapHaNoi(n-1, b, a, c);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    char a='A';
    char b='B';
    char c='C';
    thapHaNoi( n, a, b, c);
    return 0;
}