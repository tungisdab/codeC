#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void solve(int a[], int n){
    for (int i=0;i<n;i++)
        cin>>a[i];
    int k=1;
    for (int i=0;i<n;i++){
        int h=0;
        for (int j=i+1;j<n;j++){
            if(a[i]>a[j])
            {
                swap(a[i], a[j]);
                h=1;
            }
        }
        if (h){
            cout<<"Buoc "<<k<<": ";
            k++;
            for (int j=0;j<n;j++)
                cout<<a[j]<<" ";
            cout<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    solve(a,n);
}