#include<bits/stdc++.h>
using namespace std;
int thuannghich(string a)
{
	int m=a.length();
	for(int i=0;i<m/2;i++)
		if(a[i]!=a[m-i-1]) 
			return 0;
	if(a.length()<2) 
		return 0;
	return 1;
}
bool cmp(string a,string b)
{
	if(a.length()>b.length()) 
		return true;
	if(a.length()==b.length())
		if(a>=b) 
			return true;
	return false;
}
int main()
{
	string a;
	string luu[1000];
	int count=0;
    while(cin>>a)
    {
    	if(thuannghich(a))
    	{
    		luu[count]=a;
    		count++;
		}
	}	
	sort(luu,luu+count,cmp);
	for(int i=0;i<count;i++)
    { 
        int dev=0;
    	for(int j=i;j<count;j++)              // xac dinh xem sau no co bao nhieu phân tu giong no
    		if(luu[i]==luu[j])
				dev++;
		int trung =0; 
		for( int j=0;j<i;j++ )                // xac dinh xem no da xuat hien dang trc chua 
			if(luu[i]==luu[j])
				trung++; break;	 
	    if(trung==0)
			cout<<luu[i]<<" "<<dev<<endl;
	}
}
