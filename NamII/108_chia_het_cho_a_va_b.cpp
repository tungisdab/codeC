#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
bool snt(int n){
	if(n<2) return false; 
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
		return true;
}
main(){
     int t;
     cin>>t;
     while(t--){
          int m,n,a,b;
          cin>>m>>n>>a>>b;
          int dem=0; 
          for(int i=m;i<=n;i++){
               if(i%a==0||i%b==0){
               	dem++; 
			   } 
          }
          cout<<dem<<endl; 
     }
}