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
    vector<vector<int>> b;
    vector<int> d;
    d.push_back(a[0]);
    b.push_back(d);
    for (int i=1;i<n;i++){
        vector<int> c;
        int h=a[i];
        int j=i-1;
        while (j>=0 && a[j]>h){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=h;
        for (int j=0;j<=i;j++)
            c.push_back(a[j]);
        b.push_back(c);
    }    
    for (int i=b.size()-1;i>=0;i--){
        cout<<"Buoc "<<i<<": ";
        for (int j=0;j<b[i].size();j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}