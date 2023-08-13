#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n1, n2, n3;
        cin>>n1>>n2>>n3;
        ll a[n1], b[n2], c[n3];
        for (ll v=0;v<n1;v++)
            cin>>a[v];
        for (ll v=0;v<n2;v++)
            cin>>b[v];
        for (ll v=0;v<n3;v++)
            cin>>c[v];
        ll i=0;
        ll j=0;
        ll k=0;
        ll dd=0;
        while (i<n1 && j<n2 && k<n3){
            if (a[i]==b[j] && b[j]==c[k]){
                cout<<a[i]<<" ";
                i++;
                j++;
                k++;
                dd=1;
            }
            else if (a[i]<b[j]){
                i++;
            }
            else if (b[j]<c[k]){
                j++;
            }
            else 
                k++;
        }
        if (!dd)
            cout<<"-1";
        cout<<endl;
    }   
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef double db;
// //by KMA dil and man
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         ll n1, n2, n3;
//         cin>>n1>>n2>>n3;
//         ll a[n1], b[n2], c[n3];
//         map<ll,ll> a1;
//         map<ll,ll> b1;
//         map<ll,ll> c1;
//         set<ll> a2;
//         set<ll> b2;
//         set<ll> c2;
//         for (ll i=0;i<n1;i++){
//             cin>>a[i];   
//             a1[a[i]]++;
//         }
//         for (ll i=0;i<n2;i++){
//             cin>>b[i];
//             b1[b[i]]++;
//         }
//         for (ll i=0;i<n3;i++){
//             cin>>c[i];
//             c1[c[i]]++;
//         }
//         for (ll i=0;i<n1;i++)
//             a2.insert(a[i]);
//         for (ll i=0;i<n2;i++)
//             b2.insert(b[i]);
//         for (int i=0;i<n3;i++)
//             c2.insert(c[i]);
//         int o=1;
//         // cout<<"a1\n";
//         // for (auto x:a1)
//         //     cout<<x.first<<" "<<x.second<<endl;
//         // cout<<"b1\n";
//         // for (auto x:b1)
//         //     cout<<x.first<<" "<<x.second<<endl;
//         // cout<<"c1\n";
//         // for (auto x:c1)
//         //     cout<<x.first<<" "<<x.second<<endl;
//         //  for (auto x:a2)
//         //     cout<<x<<" ";
//         // cout<<endl;
//         // for (auto x:b2)
//         //     cout<<x<<" ";
//         // cout<<endl;
//         // for (auto x:c2)
//         //     cout<<x<<" ";
//         // cout<<endl;
//         for (auto x:a2){
//             if(a1[x]>0 && b1[x]>0 && c1[x]>0){
//                 ll min=a1[x];
//                 if (min>b1[x]) 
//                     min=b1[x];
//                 if (min>c1[x])
//                     min=c1[x];
//                 o=0;
//                  while (min--)
//                     cout<<x<<" ";
//             }
//         }
//         if (o)
//             cout<<"-1";
//         cout<<endl;
//     }   
//     return 0;
// }