#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    string ten, lp, ngay;
    float d;
};

void nhapThongTinSV(SinhVien &A)
{
    getline(cin,A.ten);
    cin >> A.lp >> A.ngay >> A.d;
}

void inThongTinSV(SinhVien A)
{
    cout << "N20DCCN001 " << A.ten << " " << A.lp << " ";
    int n = A.ngay.size();
    if(A.ngay[1]=='/'){
        n++;
        for (int i=n-1;i>=1;i--) A.ngay[i] = A.ngay[i-1];
        A.ngay[0] = '0';
    }
    if(A.ngay[4]=='/'){
        n++;
        for (int i=n-1;i>=3;i--) A.ngay[i] = A.ngay[i-1] ;
        A.ngay[3] = '0';
    }
     for (int i=0;i<n;i++) cout << A.ngay[i];
     cout << " " << fixed << setprecision(2) << A.d << endl;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}