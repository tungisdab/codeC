#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[93];
        long long i, kt = 0;
        a[0] = 0;
        a[1] = 1;
        if (n == 0 || n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (i = 2; i <= 92; i++)
            {
                a[i] = a[i - 1] + a[i - 2];
                if (a[i] == n)
                {
                    kt = 1;
                    break;
                }
            }
            if (kt == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}