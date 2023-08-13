#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int a;
int n, k, b;
int c[100005];

void slove()
{
   cin >> n >> k >> b;
   for (int i = 1; i <= n + 1; i++)
   {
      c[i] = 1;
   }
   for (int i = 0; i < b; i++)
   {
      cin >> a;
      c[a] = 0;
   }
   int e = 0;
   for (int i = 1; i <= k; i++)
      e += c[i];
   int ans = k - e;
   for (int i = k + 1; i <= n; i++)
   {
      e += c[i];
      e -= c[i - k];
      ans = min(ans, k - e);
   }
   if (ans < 0)
      cout << "0";
   else
      cout << ans;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   slove();
}
//Code by TN