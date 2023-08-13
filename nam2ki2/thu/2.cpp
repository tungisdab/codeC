
#include<bits/stdc++.h>
using namespace std;
int n, a[1000];
vector<string> v;
void dq(int j, string s, long sum ) {
	if (j>=n) return;
	for (int i = 0 ; i <=1 ; i++) {
		if (i) {
			long tmp = sum +a[j];
			if (tmp%2==1) {
				v.push_back(s+to_string(a[j]) );
			}
			dq(j+1,s+to_string(a[j])+" ", tmp);
		} else dq(j+1,s,sum);
	}
}
int main() {
	int t;
	cin >>t;
	while (t--) {
		cin>>n ;
		for (int i=0 ; i < n  ; i++)
			cin>> a[i];
		sort(a,a+n,greater<int>());
		v.clear();
		dq(0,"",0);
		for (auto x : v) {
			cout<<x<<endl;
		}
	}
}
