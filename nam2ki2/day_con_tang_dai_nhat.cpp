#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int dem=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        b[i]=1;
    }      
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]<a[j] && (b[i]+1)>b[j])
                b[j]++;
            if(b[j]>dem)
                dem=b[j];
        }
    }
    cout<<dem<<endl;
    return 0;
}
