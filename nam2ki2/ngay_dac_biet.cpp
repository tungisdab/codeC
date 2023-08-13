#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    string a[3]={"02","20","22"};
    string b="02";
    int c[8]={2000,2002,2020,2022,2200,2202,2220,2222};
    for (int i=0;i<3;i++){
        for (int j=0;j<8;j++){
            cout<<a[i]<<"/"<<b<<"/"<<c[j]<<endl;
        }
    }
    return 0;
}