#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int a[], int n){
    for (int i=0;i<n;i++)
        cin>>a[i];
    int k=0;
    for (int i=0;i<n;i++){
        int min=i;
        for (int j=i+1;j<n;j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
        if (min>i){
            k++;
            swap(a[i], a[min]);
        }
    }
    cout<<k<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        solve(a, n);
    }   
    return 0;
}