// #include <bits/stdc++.h>
// using namespace std;

// //by KMA dil and man
// int n;
// int h;
// int k;
// int a[10005]={};
// int b[10005]={};
// int c[10005]={};
// void out(){
//     int dd=1;
//     int max=b[h];
//     for (int j=k;j<=n;j++){
//         if (a[j]==1 && max<b[j]){
//             dd=0;
//             max=b[j];
//         }          
//         else if (a[j]==1 && max>b[j])
//             return;   
//     }
//     if(dd==0){
//         cout<<b[h]<<" ";
//         for (int j=k;j<=n;j++){
//             if (a[j]==1)
//                 cout<<b[j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// void Try(int i){
//     for (int j=0;j<=1;j++){
//         a[i]=j;
//         if (i==n)
//             out();
//         else    
//             Try(i+1);
//     }
// }
// int main()
// {
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         cin>>b[i];
//         c[i]=b[i];
//     }
//     sort(c+1, c+n+1);
//     for (int i=1;i<n;i++){
//         for (int j=1;j<=n;j++){
//             if (c[i]==b[j]){
//                 h=j;
//                 break;
//             }
//         }
//         for (int j=1;j<=n;j++)
//             a[j]=0;
//         a[h]=1;
//         if (h<n){
//             k=h+1;
//             Try(k);
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
set<vector<string>> arr;
vector<string> a,b;
int n;
void Try(int i){
    for (int j=i+1;j<n;j++){
        if (stoi(a[i])<stoi(a[j])){
            b.push_back(a[j]);
            arr.insert(b);
            if (i==n-1)
                return;
            else 
                Try(j);
            b.pop_back();
        }
    }
}
int main()
{
    cin>>n;
    a.assign(n,"");
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++){
        b.push_back(a[i]);
        Try(i);
        b.clear();
    }
    for (auto i: arr){
        for(auto j: i)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}