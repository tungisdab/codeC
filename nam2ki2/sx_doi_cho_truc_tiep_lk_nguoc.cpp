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
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        int k=0;
        vector<vector<int>> b;
        for (int i=0;i<n-1;i++){
            int h=0;
            for (int j=i+1;j<n;j++){
                if (a[i]>a[j]){
                    swap(a[i],a[j]);
                    h=1;
                }                
            }
            vector<int> c;
            if (h) k++;
            for (int j=0;j<n;j++)
                c.push_back(a[j]);
            b.push_back(c);
        }
        // cout<<k<<endl;
        for (int i= b.size()-1; i>=0; i--){
            cout<<"Buoc "<<k<<": ";
            k--;
            for (int j=0;j<b[i].size();j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
        }
    }   
    return 0;
}