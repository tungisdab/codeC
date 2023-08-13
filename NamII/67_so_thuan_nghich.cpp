#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    // fflush(stdin);
    //cin.ignore();
    while (t--)
    {
        char a[1000];
        cin>>a;
        int k=strlen(a),h=0;
        for (int i=0;i<k/2;i++)
        {
            if (a[i]!=a[k-1-i])
            {
                h=1;
                cout<<"NO";
                break;
            }
        }
        if (h==0) cout<<"YES";
        cout<<endl;
    }
}