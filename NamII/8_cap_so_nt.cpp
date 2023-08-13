#include<iostream>
#include<math.h>
using namespace std;
int check(int h)
{
    if (h<2) return 0;
    for (int i=2;i<=sqrt(h);i++)
        if (h%i==0) return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i=2;i<=n;i++)
        {
            if (check(i)&&check(n-i)) 
            {
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
}