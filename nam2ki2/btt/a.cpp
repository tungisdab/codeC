#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int count = 0;
    for(int i = 0;i<n - 2;i++){
        if(i != 0 && a[i] == a[i - 1]) 
            continue;
        int j = i + 1,b = n - 1;
        while(j < b){
            long long x = a[i] + a[j] + a[b];
            if(x == k){
                count = 1;
                break;
            }
            else if(x < k) j++;
            else b--;
        }
        if(count == 1) break;
    }
    if(count == 1) cout << "YES";
    else cout << "NO";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}