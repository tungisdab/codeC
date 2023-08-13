#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA

int  check(long long n) 
{ 

    if (n < 2) 
        return 0; 
    if (n <= 3) 
        return 1; 
 
    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
  
    for (long long i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
  
    return 1; 
} 
int main(){
	int t;
	scanf("%d",&t) ;
	while(t--){
		long long N;
	    cin >> N; 
		long long dem=0;
		for(long long i=1;i<=sqrt(N);i++){
			if(check(i)) dem++;
		}
		cout << dem << endl;
	}
}
