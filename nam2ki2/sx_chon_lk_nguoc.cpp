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
    vector<vector<int> > b;
    for (int i=0;i<n-1;i++)
    {
        vector<int> c;
        int min=a[i];
        int d=0;
        for (int j=i+1;j<n;j++){
            if (a[j]<min){
                min=a[j];
                d=j;
            }
        }
        if (d)
            swap(a[i], a[d]);
        for (int j=0;j<n;j++)
            c.push_back(a[j]);
        b.push_back(c);
    }
    for (int i=b.size()-1;i>=0;i--){
        cout<<"Buoc "<<i+1<<": ";
        for (int j=0;j<b[i].size();j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}