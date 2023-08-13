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
//     ll n;
//     cin>>n;
//     ll a[n];
//     for (ll i=0;i<n;i++)
//         cin>>a[i];
//     sort (a, a+n);
//     if (n%2==0){
//         for (ll i=0;i<n;i++){
//             if (i%2==0){
//                 cout<<a[i]<<" ";
//             }
//             else{
//                 cout<<a[n-i]<<" ";
//             }
//         }   
//     }
//     else{
//         for (ll i=0;i<n;i++){
//             if (i%2==0){
//                 cout<<a[i]<<" ";
//             }
//             else{
//                 cout<<a[n-1-i]<<" ";
//             }
//         }   
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int a[100005];
// vector<int> chan;
// vector<int> le;
// int main()
// {

//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (i % 2 == 0)
//             chan.push_back(a[i]);
//         else
//             le.push_back(a[i]);
//     }
//     sort(chan.begin(), chan.end());
//     sort(le.begin(), le.end(), greater<int>());

//     if (chan.size() < le.size())
//     {
//         for (int i = 0; i < chan.size(); i++)
//         {
//             cout << chan[i] << " " << le[i] << " ";
//         }
//         cout << le[le.size() - 1];
//     }
//     else if (chan.size() > le.size())
//     {
//         for (int i = 0; i < le.size(); i++)
//         {
//             cout << chan[i] << " " << le[i] << " ";
//         }
//         cout << chan[chan.size() - 1];
//     }
//     else
//     {
//         for (int i = 0; i < le.size(); i++)
//             cout << chan[i] << " " << le[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n;
    cin>>n;
    vector <int> c;
    vector <int> l;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (i%2==0)
            c.push_back(a[i]);
        else   
            l.push_back(a[i]);
    }   
    sort(c.begin(), c.end());
    sort(l.begin(), l.end(), greater<int>());
    if (c.size()>l.size()){
        for (int i=0;i<l.size(); i++)
            cout<< c[i]<<" "<<l[i]<<" ";
        cout<<c[c.size()-1];
    }
    else if (c.size()<l.size()){
        for (int i=0;i<c.size(); i++)
            cout<< l[i]<<" "<<c[i]<<" ";
        cout<<l[l.size()-1];
    }
    else{
        for (int i=0;i<l.size(); i++)
            cout<< c[i]<<" "<<l[i]<<" "; 
    }
    return 0;
}