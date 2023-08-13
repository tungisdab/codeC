#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    long long sum=1,s=1;
    cin>>n;
    for (int i=2;i<=n;i++)   
    {
        s*=i;
        sum+=s;
    }
    cout<<sum;
}