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
//         ll n, k;
//         cin>>n>>k;
//         ll a[n];
//         for (ll i=0;i<n;i++)
//             cin>>a[i];
//         sort(a, a+n);
//         ll count=0, sum=0;
//         ll l=0;
//         ll m=1;
//         ll r=2; 
//         ll h=1;
//         if (a[l]+a[m]+a[r] >= k)
//             cout<<count<<endl;
//         else{
//             while (1){
//                 if (h){
//                     sum=a[l]+a[m]+a[r];
//                     if (sum < k && r<n){
//                         count++;
//                         r++;
//                     }
//                     else if ( a[l]+a[m+1]+a[m+2] < k && (m+2)<n){
//                         m++;
//                         r=m+1;
//                     }
//                     else
//                         h=0;
//                 }
//                 else if (l+3<n ){
//                     l++;
//                     m=l+1;
//                     r=m+1;
//                     sum=a[l]+a[m]+a[r];
//                     if (sum < k)
//                         h=1;
//                     else    
//                         break; 
//                 }
//                 else  
//                     break;
//             }
//             cout<<count<<endl;
//         }
//     }   
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
ll a[6000];
ll n,k;
int kk(ll l, ll r, ll h){
    ll qq=-1;
    while (l<=r){
        ll m = (l+r)/2;
        if (a[m]<h){
            qq=m;
            l=m+1;
        }
        else 
            r=m-1;
    }
    return qq;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for (ll i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ll qq=0;
        for (ll i=0;i<n-2;i++){
            for (ll j=i+1;j<n-1;j++){
                ll h=kk(j+1, n-1, k-a[i]-a[j]);
                if (h!=-1){
                    qq+=(h-j);
                }
            }
        }
        cout<<qq<<endl;
    }
    return 0;
}