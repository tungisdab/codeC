// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef double db;
// //by KMA dil and man
// void merge(int a[], int l, int m, int r){
//     vector<int> x(a+l, a+m+1);
//     vector<int> y(a+m+1, a+r+1);
//     int i=0;
//     int j=0;
//     while (i< x.size() && j< y.size()){
//         if (x[i]<=y[j]){
//             a[l]=x[i];
//             i++;
//             l++;
//         }
//         else{
//             a[l]=y[j];
//             j++;
//             l++;
//         }
//     }
//     while (i< x.size()){
//         a[l]=x[i];
//         i++;
//         l++;
//     }
//     while (j<y.size()){
//         a[l]=y[j];
//         l++;
//         j++;
//     }
// }
// void mergeSort(int a[], int l, int r){
//     if (l>=r) return;
//     int m=(l+r)/2;
//     mergeSort(a, l, m);
//     mergeSort(a, m+1, r);
//     merge( a, l, m,r);
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         for (int i=0;i<n;i++)
//             cin>>a[i];
//         mergeSort(a,0,n-1);  
//         for(auto i:a){
//             cout<<i<<" ";
//         }
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
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for (int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;    
    }   
    return 0;
}