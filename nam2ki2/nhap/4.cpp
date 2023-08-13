#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ="Nguyen,Van,A",temp;
    stringstream ss(s);
    vector<string>a;
    string z;
    // while(getline(ss,temp,','))
    // {
    //     a.push_back(temp);
    // }
    while(ss>> z){
        a.push_back(z);
    }
    for(int i=0;i<a.size();i++)
        cout <<a[i]<<' ';
}