#include<iostream>
using namespace std;
int UCLN(long a, long b)
{
    if (b==0) return a;
    return UCLN(b,a%b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long a,b,c,d;
        cin >> a >> b;
        c=UCLN(a,b);
        d=(a*b)/c;
        cout << d << " " << c << endl;
    }
}