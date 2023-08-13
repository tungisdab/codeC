#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
void findCommon(ll ar1[], ll ar2[], ll ar3[], ll n1, ll n2, ll n3)
{

    ll i = 0, j = 0, k = 0;
    ll m = 0;
    while (i < n1 && j < n2 && k < n3)
    {

        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            cout << ar1[i] << " ";
            i++;
            j++;
            k++;
            m = 1;
        }
        else if (ar1[i] < ar2[j])
            i++;

        else if (ar2[j] < ar3[k])
            j++;

        else
            k++;
    }
    if (m == 0)
        cout << "-1";
}
void slove()
{
    ll n, m, k;

    cin >> n >> m >> k;
    ll a[n + 5], b[m + 5], c[k + 5];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    for (ll i = 0; i < k; i++)
        cin >> c[i];
    findCommon(a, b, c, n, m, k);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slove();
        cout << endl;
    }
}