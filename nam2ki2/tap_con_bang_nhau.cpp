#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int a[1001];
int b[1001];
int n;
int dd;
int sum;
int res;
int s;
void Try(int i){
    if(dd)
        return;
    for (int j=0;j<=1;j++){
        b[i]=j;
        if(i==n){
            s=0;
            for(int k=1;k<=n; k++){
                s+=(a[k]*b[k]);
                if(s>sum/2)
                    break;
            }
            if(s=sum/2){
                cout<<endl<<s;
                dd=1;
                return;
            }
        }
        Try(i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        dd=0;
        sum=0;
        res=0;
        memset(b, 0, sizeof(b));
        for (int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2)
            cout<<"NO\n";
        else{
            Try(1);
            if(dd)
                cout<<"YES";
            else    
                cout<<"NO";
            cout<<endl;
        }
    }
    return 0;
}
