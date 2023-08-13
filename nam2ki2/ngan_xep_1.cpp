#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
stack<int> a;
string s1;
ll n;
void show(){
    vector <int> b;
    while (!a.empty()){
        b.push_back(a.top());
        a.pop();
    }
    for (int i=b.size()-1; i>=0; i--){
        cout<<b[i]<<" ";
        a.push(b[i]);
    }
    cout<<endl;
}
int main()
{
    while (1){
        cin>>s1;
        if (s1=="push"){
            cin>>n;
            a.push(n);
        }
        else if (s1=="pop")
            a.pop();
        else if (s1=="show")
            show();
        if (a.size()==0){ //a.empty()
            cout<<"empty";
            break;

        }
    }
    return 0;
}
// void slove()
// {
//     while (1)
//     {
//         cin >> s1;
//         if (s1 == "push")
//         {
//             cin >> n;
//             s.push(n);
//         }
//         else if (s1 == "pop")
//         {
//             s.pop();
//         }
//         else if (s1 == "show")
//             show(s);
//         if (s.size() == 0)
//         {
//             cout << "empty";
//             break;
//         }
//     }
// }

