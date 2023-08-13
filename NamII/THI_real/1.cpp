#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n]={};
        for (int i=2;i<n;i++)
        {
            if (isPrime(i)&&a[i]==0)
            {
                int k;
                int m=i;
                int sum=0;
                while (m>0)
                {
                    k=m%10;
                    m/=10;
                    sum=k+sum*10;
                }
                a[i]=1;
                a[sum]=1;
                if (isPrime(sum)&&sum!=i&&sum<n)
                    cout<<i<<" "<<sum<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}