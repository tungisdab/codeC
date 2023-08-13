#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
     //fflush(stdin);
    //cin.ignore();
    while (t--)
    {
        char a[1000],b[1000];
        cin>>a;
        int k=strlen(a);
        for (int i=0;i<k;i++)
            b[k-1-i]=a[i];
        if (strcmp(a,b)==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
