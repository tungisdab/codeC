#include <bits/stdc++.h>
using namespace std;
void xulimax(int n, int s)
{
	int a[n];
	for(int j=9;j>=1; j--) 
	{
		if(j<=s) 
		{
			a[0]=j;
			s-=j;
			break;
		}
	}
	for(int i=1; i<n;i++) 
	{
		for(int j=9;j>=0; j--) 
		{
			if(j<=s) 
			{
				a[i]=j;
				s-=j;
				break;
			}
		}
	}
	for(int i=0; i<n; i++)
		cout<<a[i];
	cout<<endl;
}
void xulimin(int n, int s) 
{
	int a[n];
	for(int j=1;j<=9; j++) 
	{
		if(j<=s&& 9*(n-1)>=s-j) 
		{
			a[0]=j;
			s-=j;
			break;
		}
	}
	for(int i=n-1; i>=1;i--) 
	{
		for(int j=9;j>=0; j--) 
		{
			if(j<=s) 
			{
				a[i]=j;
				s-=j;
				break;
			}
		}
	}
	for(int i=0; i<n; i++) 
		cout<<a[i];
	cout<<" ";
}
int main ()
{
	int n,s;
	cin>>n>>s;
	if (9*n<s)
		cout<<"-1 -1"<<endl;
	else
	{
		xulimin(n,s);	
		xulimax(n,s);
	}
	return 0;
}