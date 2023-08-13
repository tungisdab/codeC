// 147253470
// 0|1|2|3|4|5|6|7|8|9
// 1|1|1|1|2|1|0|2|0|0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
	int t;
	cin>>t;
	int b[t];
	for (int i=0;i<t;i++)
		cin>>b[i];
	int a[100]={};
	for (int i=0;i<t;i++)
		a[b[i]]++;
	for (int i=0;i<10;i++)
		cout<<i<<"|";
	cout<<endl;
	for (int i=0;i<10;i++)
		cout<<a[i]<<' ';	
	return 0;
}