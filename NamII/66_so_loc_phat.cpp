#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    fflush(stdin);
    while (t--)
    {
        char a[100];
        cin>>a;
        int k=strlen(a),d=0;
        for (int i=0;i<k;i++)
        {
            if ((a[i]!='0')&&(a[i]!='6')&&(a[i]!='8'))
            {
                cout<<"NO";
                d=1;
                break;
            }
        }
        if (d==0) cout<<"YES";
        cout<<endl;
    }
}