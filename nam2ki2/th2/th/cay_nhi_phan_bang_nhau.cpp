#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct node{
    int data;
    node *l;
    node *r;
    node(int x){
        data = x;
        l=NULL;
        r=NULL;
    }
};
void addNode(node *root, int d, char w){
    if (w=='R')
        root->r= new node(d);
    else
        root->l= new node(d);
}
void chenNode(node *root, int d1, int d2, char w){
    if (!root)
        return;
    if (root->data == d1)
        addNode(root, d2, w);
    else{
        chenNode(root->l, d1, d2, w);
        chenNode(root->r, d1, d2, w);
    }
}
node *tao(int n){
    node *root = NULL;
    for (int i = 0; i < n; i++){
        int d1; 
        int d2;
        char w;
        cin>>d1>>d2>>w;
        if (!root){
            root = new node(d1);
            addNode(root, d2, w);
        }
        else
            chenNode(root, d1, d2, w);
    }
    return root;
}
bool canbang(node *r1, node *r2){
    if (r1 == NULL && r2 == NULL)
        return true;
    if (r1 != NULL && r2 != NULL){
        return ( r1->data == r2->data && canbang(r1->l, r2->l) && canbang(r1->r, r2->r));
    }
    return false;
}
void solve(){
    int n, m;
    node *r1 = NULL;
    node *r2=NULL;
    string s;
    cin>>n;
    r1=tao(n);
    cin>>m;
    r2=tao(m);
    if (canbang(r1, r2)==true)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}