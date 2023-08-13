#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man

struct node{
    int data;
    struct node *pLeft;
    struct node *pRight;
};
typedef node* TREE;
void KhoiTaoCay(TREE &t){
    t=NULL; //cây rỗng
}
// thêm phần tử x vào cây nhị phân
void ThemNodeVaoCay(TREE &t, int x){
    if(t==NULL){
        node *p = new node; // khởi tạo 1 cái node để thêm vào cây
        p->data=x;
        p->pLeft=NULL;
        p->pRight=NULL;
        t=p; // node p là nút node gốc, x chính là node gốc
    }
    else{
        if(t->data > x){
            ThemNodeVaoCay(t->pLeft, x);
        }
        else if(t->data < x){
            ThemNodeVaoCay(t->pRight, x);
        }
    }
}
/* hàm xuất cây nhị phân theo NLR */
void Duyet_NLR(TREE t)
{ 
    // nếu cây còn phần tử thì tiếp tục duyệt
    if (t != NULL)
    {
        cout << t->data << " "; // xuất dữ liệu trong node
        Duyet_NLR(t->pLeft); // duyệt qua trái
        Duyet_NLR(t->pRight); // duyệt qua phải
    }
}
void Duyet_NRL(TREE t){
    if(t!=NULL){
        cout<<t->data<<" ";
        Duyet_NRL(t->pRight);
        Duyet_NRL(t->pLeft);
    }
}
void Duyet_LNR(TREE t){
    if(t!=NULL){
        Duyet_LNR(t->pLeft);
        cout<<t->data<<" ";
        Duyet_LNR(t->pRight);
    }
}
void Duyet_RNL(TREE t){
    if(t!=NULL){
        Duyet_RNL(t->pRight);
        cout<<t->data<<" ";
        Duyet_RNL(t->pLeft);
    }
}
void Duyet_LRN(TREE t){
    if(t!=NULL){
        Duyet_LRN(t->pLeft);
        Duyet_LRN(t->pRight);
        cout<<t->data<<" ";
    }
}
void Duyet_RLN(TREE t){
    if(t!=NULL){
        Duyet_RLN(t->pRight);
        Duyet_RLN(t->pLeft);
        cout<<t->data<<" ";
    }
}
int main()
{

       
    return 0;
}