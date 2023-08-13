#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int h=1;
    for (int i=0;i<n-1;i++){
        int k=0;
        for (int j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                k=1;
            }
        }
        if (k){
            cout<<"Buoc "<<h++<<": ";
            for (int j=0;j<n;j++)
            cout<<a[j]<<" ";
            cout<<endl;
        }        
        else break;
    }    
    return 0;
}