#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    long long m, s;
    cin>>m>>s;
    if (m==1 && s==0)
    {
        cout<<0<<" "<< 0;
        return 0;
    }
    if (s==0 || s>9*m)
    {
        cout<<"-1 -1";
        return 0;
    }
    long long a[m + 1];
    long long b[m + 1];
    for (long long i=0;i<m;i++)
    {
        if (s >= 10)
        {
            a[i] = 9;
            s -= 9;
        }
        else
        {
            a[i] = s;
            s = 0;
        }
    }
    for (long long i = 0; i < m; i++)
    {
        b[i] = a[i];
    }
    if (b[m - 1] == 0)
    {
        b[m - 1] = 1;
        for (long long i = m - 2; i >= 0; i--)
        {
            if (b[i] != 0)
            {
                b[i] -= 1;
                break;
            }
        }
    }
    for (long long i = m - 1; i >= 0; i--)
        cout << b[i];
    cout << " ";
    for (long long i = 0; i < m; i++)
        cout << a[i];
    return 0;
}