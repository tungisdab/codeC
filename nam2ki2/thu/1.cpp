/*

design by toan dao
*/
#include<bits/stdc++.h>
using namespace std;
bool cmp (pair <int , int>a, pair<int , int> b){
	return a.second<b.second;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t ;
	while (t--){
		int n ; cin>>n ;
		pair <int, int> p[n]; 
		for (int i =0 ; i <n ; i++){
			cin>>p[i].first>>p[i].second;
		}
	 
		sort(p,p+n, cmp);
		for (int i=0;i<n;i++){
			cout<<p[i].first<<" "<<p[i].second<<endl;
		}

		// int j=0,ans=1;
		// for (int i=1 ; i<n ;i++){ 
		// 	if (p[j].second<=p[i].first){
				
		// 		ans++;
		// 		j=i;
		// 	}
		// }
		// cout<<ans<<endl;
	}
}	
