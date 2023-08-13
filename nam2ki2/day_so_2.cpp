#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int n;
int v1;
int a[1000];
int q[1000][1000]={};
void Try(int i){    
    for (int j=0;j<n;j++)
        q[v1][j]=a[j];
    v1++;
    if (i==0)
        return;
    else{
        for (int j=0;j<n;j++)
            a[j]+=a[j+1];
        Try(n--);
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        v1=0;
        cin>>n;
        int h=n;
        for (int i=0;i<n;i++)
            cin>>a[i];
        Try(n);
        int k=1;
        for (int i=h-1;i>=0;i--){
            for (int j=0;j<k;j++){
                if (j==0)
                    cout<<"[";
                if (j==(k-1))
                    cout<<q[i][j]<<"]";
                else 
                    cout<<q[i][j]<<" ";
            }
            cout<<" ";
            k++;
        }
        cout<<endl;
    }   
    return 0;
}