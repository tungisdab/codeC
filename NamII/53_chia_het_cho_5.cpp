#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin,s);
		int k=s.length();
		int a[k]={},b[k],dem=0;
		for (int i=0;i<k;i++)
			a[i]=s[k-1-i]-'0';
		for (int i=0;i<k;i++)
		{
			if (a[i]==1)
			{
				if (i%4==0)
					b[i]=1;
				else if (i%4==1)
					b[i]=2;
				else if (i%4==2)
					b[i]=4;
				else if (i%4==3)
					b[i]=3;
			}
			else 
			{
				b[i]=0;
				dem++;
			}	
			// cout<<b[i];
		}
		int sum=0;
		for (int i=0;i<k;i++)
		{
			sum=(sum+b[i])%5;
				// cout<<sum<<" ";
		}
		if ((sum==0)&&(dem!=k)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}	
	return 0;
}