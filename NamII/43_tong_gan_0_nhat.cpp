#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
// bool compare (int m, int n)
// {
//     return abs(m)<abs(n);
// }
// void solution(int a[], int n)
// {
//     sort (a, a+n, compare);
//     int min=INT_MAX, x,y;
//     for (int i=0;i<n-1;i++)
//     {
//         if (abs(a[i]+a[i+1])<min)
//         {
//             min=abs(a[i]+a[i+1]);
//             x=i;
//         }
//     }
//     cout<<a[x]+a[x+1]<<endl;

// }
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int *a;
//         a= new int [n];
//         //int a[n];
//         for (int i=0;i<n;i++)
//             cin>>a[i];
//         solution(a,n);
//         delete a;
//     }
//     return 0;
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i=0;i<n;i++)
            cin >> a[i];
        int min = INT_MAX;
        ll sum;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i] + a[j]) < min)
                {
                    min = abs(a[i] + a[j]);
                    sum = a[i] + a[j];
                }
            }
        }
        cout<<sum<<endl;
    }
}