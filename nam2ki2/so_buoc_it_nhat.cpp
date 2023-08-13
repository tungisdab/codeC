#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int a[10005];
int solve(){
    int ans=0;
	int b[1005]={};
	for (int i=0;i<n;i++){
		b[i]=1;
		for (int j=0;j<i;j++){
			if (a[j]<=a[i])
				b[i]=max (b[i],b[j]+1);
			ans=max(b[i],ans);
		}
	}
	return n-ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve()<<endl;
    }   
    return 0;
}