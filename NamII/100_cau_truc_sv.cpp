#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten;
	string lop;
	string ngaysinh;
	double diem;
};
void nhapThongTinSV(SinhVien &p){
	scanf("\n");
	getline(cin,p.ten);
	cin>>p.lop;
	cin>>p.ngaysinh>>p.diem;
}
void inThongTinSV(SinhVien &p){
	if(p.ngaysinh[2]!='/'){
		p.ngaysinh.insert(0,"0");
	}
	if(p.ngaysinh[5]!='/'){
		p.ngaysinh.insert(3,"0");
	}
	cout<<"N20DCCN001"<<" "<<p.ten<<" "<<p.lop<<" "<<p.ngaysinh<<" ";
	cout<<fixed<<setprecision(2)<<p.diem;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}