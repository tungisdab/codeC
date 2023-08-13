#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3][3][3];
	for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
			for (int k=0;k<3;k++)
				for (int h=0;h<3;h++)
					a[i][j][k][h]=0;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			for (int k=0;k<3;k++)
			{
				for (int h=0;h<3;h++)
					cout<<a[i][j][k][h]<<" ";
				cout<<"			";
			}
			cout<<endl;
		}
		cout<<endl<<endl;
	}
	return 0;
}

