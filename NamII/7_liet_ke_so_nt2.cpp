#include<iostream>
#include<math.h>
using namespace std;
int check(int h)
{
    if (h<2) return 0;
    if (h==2) return 1;
    for (int i=2;i<=sqrt(h);i++)
        if (h%i==0) return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        for (int i=m;i<=n;i++)
            if (check(i)) cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}