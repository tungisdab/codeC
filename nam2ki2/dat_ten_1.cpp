#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n,k;
    cin>>n>>k;
    set<string> a;
    string b[n+1];
    int h=1;
    cin.ignore();
    for (int i=0;i<n;i++){
        string c;
        cin>>c;
        a.insert(c);
    }
    for (auto i:a){
        b[h++]=i;
    }
    h--;
    int c[k+1];
    for (int i=1;i<=k;i++)
        c[i]=i;
    while (1){
        for (int i=1;i<=k;i++)
            cout<<b[c[i]]<<" ";
        cout<<endl;
        int i=k;
        while (i>0 && c[i]>=h-(k-i))
            i--;
        if (i==0)
            break;
        else{
            c[i]++;
            for (int j=i+1;j<=k;j++)
                c[j]=c[i]+(j-i);
        }
    }
    return 0;
}