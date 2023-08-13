#include<bits/stdc++.h>
using namespace std;
//kma
long long kt(long long n){
	long long a[93];
	long long i,check = 0;
	a[0]=0;
	a[1]=1;
	if(n==0||n==1){
	return 1;
	}else{
		for(i=2;i<=92;i++){
			a[i]=a[i-1]+a[i-2];
			if(a[i]==n){
				check = 1;
				break;
			}
		}
	if(check == 1){
		return 1;
	}else{
		return 0;
	}}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int b[100];
		cin>>n;
		for(int i = 0 ; i<n;i++){
			cin>>b[i];
			if(kt(b[i])){
				cout<<b[i]<<" ";
			}
		}
		cout<<endl;
	}
}