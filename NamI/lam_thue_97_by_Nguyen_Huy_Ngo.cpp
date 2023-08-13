#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;
ll  n, b[20], c[20], nt, np, a[20];
int main() {
	scanf("%d",&n);
	a[0] = 1;
	for (int i=1; i<=18; i++) 
		a[i] = a[i-1]*3;
	for (int i=0; n>0; n/=3,i++) 
		c[i] = n%3;
	for (int i=0; i<=17; i++) 
	{
		if (c[i] == 1) np++;
		else if (c[i] == 2) nt++, b[i] = 1, c[i+1]++;
		else if (c[i] == 3) c[i+1]++;
	}
	for (int i=0; i<=18; i++)
		if (b[i] == 1) printf("%d ", a[i]);
	printf ("\n");
	for (int i=0; i<=18; i++)
		if (c[i] == 1) printf("%d ", a[i]);
	return 0;
}

