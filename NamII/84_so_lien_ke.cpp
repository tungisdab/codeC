#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        // string a;
        // getline(cin,a);
        // cin.ignore();
        // int k=a.length(),h=0;
        // for (int i=1;i<k;i++)
        // {
        //     if ((a[i]!=(a[i-1]+1))||(a[i]!=(a[i-1]-1)))
        //     {
        //         cout<<"NO"<<endl;
        //         h=1;
        //         break;
        //     }
        // }
        // if (h==0) cout<<"YES"<<endl;
        scanf("\n");
        string a;
        getline(cin,a);
        int k=a.length(),h=0;
        for (int i=1;i<k;i++)
        {
            if ((a[i]!=(a[i-1]+1))&&(a[i]!=(a[i-1]-1)))
            {
                cout<<"NO"<<endl;
                h=1;
                break;
            }
        }
        if (h==0) cout<<"YES"<<endl;

    }
}