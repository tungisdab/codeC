#include <bits/stdc++.h>
using namespace std;
int b[1000000]={};
int main()
{

    int n;
    cin>>n;
    int arr[n+5];
    for (int i=0;i<n;i++){
        cin>>arr[i];
        b[arr[i]]++;
    }
    for (int i=0;i<n;i++){
        if(b[arr[i]]>0)
            cout<<arr[i]<<" ";
        b[arr[i]]=0;
    }
    return 0;
}