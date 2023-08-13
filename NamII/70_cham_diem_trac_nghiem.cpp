#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int count=0, dem=0;
        int k=s.length();
        char a[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
		char b[] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
        for (int i=4;i<k;i++)
        {
            if (s[2]=='1')
            {
                if (s[i]!=' '&&s[i-1]==' ')
                {
                    if (s[i]==a[dem])
                        count++;
                    dem++;
                }
            }
            else
            {
                 if (s[i]!=' '&&s[i-1]==' ')
                {
                    if (s[i]==b[dem])
                        count++;
                    dem++;
                }
            }
        }
        cout<<fixed<<setprecision(2)<<(float) count*2/3<<endl; 
    }
    return 0;
}