#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

//by KMA dil and man
struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;

// cap phat dong mot Node moi voi du lieu la so nguyen x
node makeNode(int x){
    node tmp=new Node();
    tmp->data=x;
    tmp->next=NULL;
    return tmp;
}
int Sizeofnode(node a){
    int count=0;
    while (a !=NULL){
        count++;
        a=a->next;

    }
    return count;
}
// them mot phan tu vao dau danh sach lien ket
void insertFirst(node &a, int x){
    node tmp = makeNode(x);
    if (a== NULL){
        a=tmp;
    }
    else{
        tmp->next=a;
        a=tmp;
    }
}
// or
void insertFirst1(node *a, int x){
    node tmp = makeNode(x);
    if (*a==NULL){
        *a=tmp;
    }
    else{
        tmp->next=*a;
        *a=tmp;
    }

}
// them phan tu vao cuoi danh sach lien ket
void insertLast(node &a, int x){
    node tmp=makeNode(x);
    if (a==NULL){
        a=tmp;
    }
    else{
        node p=a;
        while (p->next != NULL){
            p=p->next;
        }
        p->next=tmp;
    }
}
void insertMiddle(node &a, int x, int pos){
    int n=Sizeofnode(a);
    if (pos<=0 || pos >n+1)
        cout<<"vi tri ko hop le"<<endl;
    if (pos==1){
        insertFirst(a, x);
        return ;
    }
    else if (pos+1==n){
        insertLast(a,x);
        return;
    }
    else{
        node p=a;
        for (int i=0;i<pos-1;i++){
            p=p->next;
        }
        node tmp=makeNode(x);
        tmp->next=p->next;
        p->next=tmp; 
    }
}
// xoa ptu dau dslk
void deleteFirst(node &a){
    if (a==NULL)    
        return;
    else    
        a=a->next; 
}
void deleteLast(node &a){
    if (a==NULL)
        return ;
    else{
        node sau=a;
        node truoc=NULL;
        while (sau->next !=NULL){
            truoc=sau;
            sau=sau->next;
        }
        if (truoc==NULL)
            a=NULL;
        else{
            truoc->next=NULL;
        }
    }
}
void in(node a){
    while (a != NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
}
int main()
{
    node head =NULL;
    return 0;
}