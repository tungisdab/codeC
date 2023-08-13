#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
bool cmp (pair <int , int>a, pair<int , int> b){
	return a.second<b.second;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        // int a[n][2];
        // for (int i=0;i<n;i++)
        //     for (int j=0;j<2;j++)
        //         cin>>a[i][j];
        // for (int i=0;i<n-1;i++){
        //     for (int j=i+1;j<n;j++){
        //         if(a[i][1]>a[j][1]){
        //             swap(a[i][0], a[j][0]);
        //             swap(a[i][1], a[j][1]);
        //         }
        //         else if(a[i][0]==a[j][0] && a[i][1]>a[j][1]){
        //             swap(a[i][0], a[j][0]);
        //             swap(a[i][1], a[j][1]);
        //         }
        //     }
        // } 
        // for (int i=0;i<n;i++){
        //     for (int j=0;j<2;j++)
        //         cout<<a[i][j]<<" ";
        //     cout<<endl;
        // } 
        pair <int, int> a[n]; 
		for (int i =0 ; i <n ; i++)
			cin>>a[i].first>>a[i].second;	 
		sort(a,a+n, cmp);
        int dem=1;
        int j=0;
        for (int i=1;i<n;i++){
            if(a[j].second<=a[i].first){
                dem++;
                j=i;
            }
        }
        cout<<dem<<endl;
    }   
    return 0;
}