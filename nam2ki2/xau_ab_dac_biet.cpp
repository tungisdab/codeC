#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n,k;
vector <vector<int> > s;
int dem=0;
void in(){
    cout<<dem<<endl;
    for (int i=0;i<s.size();i++){
        for (int j=0;j<s[i].size();j++){
            if (s[i][j]==0)
                cout<<"A";
            else
                cout<<"B";
        }
        cout<<endl;
    }
}
void solve(int n, int k){
    int a[n+1]={};
    while (1){
        vector <int> s1;
        int dem1=0;
        int dem2=0;
        for (int i=1;i<=n;i++){
            if (a[i]==0){
                dem1++;
                if (i==n && dem1==k)
                    dem2++;
            }
            else{
                if (dem1==k)
                    dem2++;
                dem1=0;
            }
        }
        if (dem2==1){
            for (int i=1;i<=n;i++)
                s1.push_back(a[i]);
            s.push_back(s1);
            dem++;
        }
        int i=n;
        while (a[i]==1 && i>0){
            a[i]=0;
            i--;
        }
        if (i==0){
            in();
            return;
        }
        else
            a[i]=1;
    }
}
int main()
{
    cin>>n>>k;
    solve(n,k);   
    return 0;
}