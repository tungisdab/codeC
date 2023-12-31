#include<bits/stdc++.h>
using namespace std;

// kma dil and man
typedef struct sinhVien{
    string MSV;
    string tenSV;
    float diemTB;
    sinhVien *next;
}Node;

typedef struct dsSV{
    Node *head; 
    Node *tail; 
}listSV;

void tao_dslk_moi(listSV &list){
    list.head = NULL;
    list.tail = NULL;
}

Node* tao_1_note_SV(string MSV, string tenSV, float diemTB){
    Node* p;
    p = new Node;
    if(p == NULL) exit(1);

    p -> MSV = MSV;
    p -> tenSV = tenSV;
    p -> diemTB = diemTB;
    p -> next = NULL;
    
    return p;
}

void them_SV_vao_dau_DS(listSV &list, Node* p){
    if(list.head == NULL){
        list.head = p;
        list.tail = list.head;
    }else{
        p -> next = list.head;
        list.head = p;
    }
}

Node* tim_kiem_SV(listSV &list, string tenSV){
    Node *p;
    p = list.head;
    while(p != NULL && (p -> tenSV).compare(tenSV) != 0){
        p = p -> next;
    }
    return p;
}

int xoa_SV_khoi_dslk(listSV &list, string MSV){
    Node *p, *q;
    p = list.head;
    q = NULL;
    while(p != NULL && p -> MSV != MSV){
        q = p;
        p = p -> next;
    }

    if(p == NULL) return 0;

    if(p == list.head){
        list.head = list.head -> next;
        p -> next = NULL;
        delete p;
        p = NULL;
    }else if(p == list.tail){
        list.tail = q;
        list.tail -> next = NULL;
    }else{
        q->next = p->next;
        p -> next = NULL;
        delete p;
        p = NULL; 
    }
    return 1;
}

void print(listSV &list, float diemTB = 0, bool check = false){
    Node *p;
    p = list.head;
    while(p != NULL){
        if(p->diemTB >= diemTB){
            cout << p->MSV << " - " << p->tenSV << " - ";
            cout << p->diemTB;
            if(check){
                cout << " - XL: ";
                if(p->diemTB <= 3.6) cout << "Yeu";
                else if(p->diemTB >= 5.0 && p->diemTB < 6.5) cout << "Trung binh";
                else if(p->diemTB >= 6.5 && p->diemTB < 7.0) cout << "Trung binh kha";
                else if(p->diemTB >= 7.0 && p->diemTB < 8.0) cout << "Kha";
                else if(p->diemTB >= 8.0 && p->diemTB < 9.0) cout << "Gioi";
                else if(p->diemTB >= 9.0) cout << "Xuat sac";
            }
            cout << endl;
        }
        p = p -> next;
    }
}

int main(){

    // 1) khai bao
    listSV DanhSachSV; 
    tao_dslk_moi(DanhSachSV);

    // 2) Nhap thong tin
    while(1){
        string MSV; cin >> MSV;

        cin.ignore();
        string TenSV; getline(cin, TenSV);

        if(TenSV.empty()) break; // Kiem tra xem ten SV co rong khong

        float diemTB; cin >> diemTB;

        Node *p = tao_1_note_SV(MSV, TenSV, diemTB);

        them_SV_vao_dau_DS(DanhSachSV, p);
    }

    // 3) tim kiem
    cout << "\nNhap ten SV can tim: ";
    string tenSV; getline(cin, tenSV);

    // tim kiem sv co trong danh sach hay khong
    if(tim_kiem_SV(DanhSachSV, tenSV) != NULL) cout << ">>>>> TIM THAY <<<\n";
    else cout << ">>>>> KHONG TIM THAY <<<<<\n";

    // 4) xoa sv khoi dslk
    cout << "\nNhap ma so SV can xoa: ";
    string MSV; cin >> MSV;
    xoa_SV_khoi_dslk(DanhSachSV, MSV);

    // 5) in dssv co tb >=5
    cout << "\n===== DSSV CO DIEM TB >= 5 =====\n";
    print(DanhSachSV, 5);

    // 6) xep loai
    cout << "\n===== XEP LOAI SV =====\n";
    print(DanhSachSV, 0, true);

    return 0;
}