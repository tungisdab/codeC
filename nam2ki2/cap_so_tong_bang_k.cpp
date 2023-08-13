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
//         int n,k;
//         cin>>n>>k;
//         int a[n];
//         map<int, int> b;
//         for (int i=0;i<n;i++){
//             int x;
//             cin>>x;
//             b[x]++;
//             a[i]=x;
//         }  
//         int count=0;
//         int h=0;
//         for(auto i:b){
//             for(auto j:b){
//                 if((i.first+j.first)==k) {
//                     if (i.first==j.first){
//                         count+=((i.second)*(i.second-1)/2);
//                         cout<<count<<endl;
//                         h=1;
//                         break;
//                     }   
//                     else    
//                         count+=(i.second)*(j.second);
//                 }
//             }
//             if(h)
//                 break;
//         }
//         if (!h)
//             cout<<count/2<<endl;
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
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        int count=0;
        sort(a,a+n);
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (a[i]+a[j]==k)
                    count++;
            }
        }
        cout<<count<<endl;
    }    
    return 0;
}