#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
void insert(node **root, int x){
    if(*root==NULL)
        *root=new node(x);
    else{
        if(x<(*root)->data)
            insert(&(*root)->left,x);
        else    
            insert(&(*root)->right,x);
    }
}
void check(node *root){
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        node *root=NULL;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            insert(&root,x);
        }   
        check(root);
        cout<<endl;
    }
    return 0;
}