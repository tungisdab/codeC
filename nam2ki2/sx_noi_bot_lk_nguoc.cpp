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
        vector<vector<int>> b;
        int k=0;
        for (int i=0;i<n-1;i++){
            int d=0;
            for (int j=0;j<n-i-1;j++){
                if (a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    d=1;
                }
            }
            vector<int> c;
            if (d){
                for (int j=0;j<n;j++){
                    c.push_back(a[j]);
                }
                k++;
                b.push_back(c);
            }
        }   
        for(int i=b.size()-1;i>=0;i--){
            cout<<"Buoc "<<k<<": ";
            k--;
            for(int j=0;j<b[i].size();j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }       
    }   
    return 0;
}