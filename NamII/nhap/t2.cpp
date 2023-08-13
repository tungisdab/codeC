#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

void slove()
{
    map<int, int> mp;
    fstream in("DATA.in", ios::in);
    int x;
    while (in >> x)
    {
        mp[x]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    in.close();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    slove();
}
//Code by TN
#include <stdio.h>

const int N = 1000005;
int a[N], k[N] = {0};

int main() {

    int n, d = 0, max = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        k[a[i]]++;

        while (k[a[i]] >= 2) {
            k[a[d]]--;
            d++;
        }

        if (i-d+1 > max) max = i-d+1;
    }

    printf("%d", max);

    return 0;
}