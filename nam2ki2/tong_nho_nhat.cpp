#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n+5];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		if(n%2)
			a[n++]=0;
		sort(a, a+n);
		ll x=0;
		ll y=0;
		for (ll i=0;i<n;i++){
			x=x*10+a[i++];
			y=y*10+a[i];
		}
		cout<<x+y<<endl;
	}	
	return 0;
}