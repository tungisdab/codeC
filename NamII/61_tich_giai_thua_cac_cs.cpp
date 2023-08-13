#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,s,k;
        cin>>n>>s;
        long long a[10]={};
        for (int i=0;i<n;i++)
        {
            k=s%10;
            s/=10;
            for (int j=0;j<=k;j++)
                a[j]++;
        }
        k=a[8];
        a[2]+=3*k;
        k=a[9];
        a[3]+=2*k;
        char b[10000];
        int h=0;
        for (int i=7;i>=2;i--)
        {
            if (i==6)
            {
                k=a[6];
                a[2]+=k;
                a[3]+=k;
            }
            if (i==4)
            {
                k=a[4];
                a[2]+=2*k;
            }
            while ((a[i]>0)&&(i!=6)&&(i!=4))
            {
                b[h]=i+48;
                h++;
                for (int j=i;j>=2;j--)
                    a[j]--;
            }
        }
        for (int i=0;i<h;i++)
            cout<<b[i];
        cout<<endl;
    }
}
/*
#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t; 
	while(t--) {
		long long x,n;
		cin>>n;
		int a[20]={0};
		while(n!=0){
			a[n%10]++;
			n/=10;
		}
		a[7]+=a[8]+a[9];
		a[5]+=a[6];
		a[3]+=a[4]+2*a[9]+a[6];
		a[2]+=a[9]+3*a[8]+2*a[4];
		a[4]=0;
		a[6]=0;
		for(int i=7; i>=2; i--) {
			for (int j=1; j<=a[i]; j++) {
				cout<<i;
			}
		}
		cout<<endl;
	}
}
*/