#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int dd;
int a[1000][1000];
int xx[5];
int s[5];
string b[1000];
void Try(int i, int j, int h){
	if(i==n && j==n){
		dd=1;
		for (int v=1;v<h;v++)
			cout<<b[v];
		cout<<" ";
	}
	else{
		int x;
		int y;
		for(int v=0;v<=1;v++){
			x=i+xx[v];
			y=j+s[v];
			if(a[x][y]==1 && x>0 && x<=n && y>0 && y<=n){
				if(v==0)
					b[h]='D';
				else
					b[h]='R';
				Try(x,y,h+1);
			}
		}
	}
}
int main()
{
    int t;
    cin>>t;
	xx[0]=1;
	xx[1]=0;
	s[0]=0;
	s[1]=1;
    while (t--)
    {
        dd=0;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++)
                cin>>a[i][j];
        }
        if (!a[1][1] || !a[n][n])
            cout<<"-1";
        else{
            Try(1,1,1);
        	if (!dd)
            	cout<<"-1";
		}
        cout<<endl;
    }   
    return 0;
}
