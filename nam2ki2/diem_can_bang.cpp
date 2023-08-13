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
        int d=0;
        int sum1=0;
        int sum2=0;
        for (int i=0;i<n;i++)
            cin>>a[i];     
            sum1+=a[0];
        for (int j=2;j<n;j++)
            sum2+=a[j];
        if(sum1==sum2){
            cout<<"2"<<endl;
            d=1;
            continue;
        }
        for (int i=2;i<n;i++){
            sum1+=a[i-1];
            sum2-=a[i];
            if(sum1==sum2){
                cout<<i+1<<endl;
                d=1;
                break;
            }
        }
        if (!d) 
            cout<<"-1"<<endl;
    }   
    return 0;
}