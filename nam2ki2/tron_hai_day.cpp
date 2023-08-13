// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef double db;
// //by KMA dil and man
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         ll m,n;
//         cin>>m>>n;
//         map<int, int > a;
//         for (int i=0;i<m;i++){
//             int x;
//             cin>>x;
//             a[x]++;
//         }    
//         for (int i=0;i<n;i++){
//             int x;
//             cin>>x;
//             a[x]++;
//         }
//         for(auto i:a)
//             cout<<i.first<<" ";
//         cout<<endl;
//     }   
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
        cin>>m>>n;
        int k=m+n;
        int a[k];
        for (int i=0;i<m;i++)
            cin>>a[i];
        for (int i=m;i<m+n;i++)
            cin>>a[i];
        sort(a,a+k);
        for (int i=0;i<n+m;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }   
    return 0;
}