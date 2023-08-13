#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string a;
        getline(cin,a);
        stringstream ss(a);
        string token;
        int k=0;
        while (ss>>token)
            k++;
        cout<<k<<endl;
    }
}